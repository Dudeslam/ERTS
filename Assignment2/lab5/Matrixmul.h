#include "xtime_l.h"
#include <xil_printf.h>
#include "matrix_ip.h"
#include "xparameters.h"
#include "xscutimer.h"
#define CLOCK_SECOND 325000000
#define CLOCK_MILLISECOND 325000
#define CLOCK_MICROSECOND 325
int setupTimer(XScuTimer *timer);
void printTime(u32 tStart, u32 tSlut);
// Matrix Size
#define MSIZE 4

typedef union{
	unsigned char comp[MSIZE];
	unsigned int vect;
} VectorType;
u32 tStart, tSlut;


typedef VectorType VectorArray[MSIZE];
int setupTimer(XScuTimer *Timer){
		XScuTimer_Config *ConfigPtr;
		XScuTimer *TimerInstancePtr = Timer;
		// Initialize the timer
		ConfigPtr = XScuTimer_LookupConfig (XPAR_PS7_SCUTIMER_0_DEVICE_ID);
		int Status = XScuTimer_CfgInitialize (TimerInstancePtr, ConfigPtr, ConfigPtr->BaseAddr);
		if (Status != XST_SUCCESS){
		   xil_printf("Timer init() failed\r\n");
		   return XST_FAILURE;
		}
		// Load timer with delay in multiple of ???_SECOND
		XScuTimer_LoadTimer(TimerInstancePtr, CLOCK_SECOND);
		// Set AutoLoad mode
		XScuTimer_EnableAutoReload(TimerInstancePtr);
}

void printTime(u32 tStart, u32 tSlut){
	int timeCount = tStart-tSlut;
	xil_printf("Clock cycles: %d\r\n", timeCount);
	//xil_printf("Seconds: %d\r\n", timeCount/CLOCK_SECOND);
	//xil_printf("Milliseconds: %d\r\n", timeCount/CLOCK_MILLISECOND);
	xil_printf("Microseconds: %d\r\n", timeCount/CLOCK_MICROSECOND);
	xil_printf("\r\n");
}




void SetInputMatrices(VectorArray A, VectorArray B)
{
    for (int i = 0; i < MSIZE; i++) {
        for (int j = 0; j < MSIZE; j++) {
            A[i].comp[j] = (MSIZE*i) + j + 1;
            B[j].comp[i] = i+1;
        }
    }
}

void displayMatrix(VectorArray input, char * name)
{
	xil_printf("\r\nContents of %s: \r\n", name);
	for(int i=0; i<MSIZE;i++)
	{
		for(int j=0; j<MSIZE;j++)
		{
			xil_printf("%d ", input[i].comp[j]);
		}
		xil_printf("\r\n");
	}

}

void EmptyMatrix(VectorArray A, VectorArray B, VectorArray P)
{
	for (int i = 0; i < MSIZE; i++)
	{
        for (int j = 0; j < MSIZE; j++)
        {
            A[i].comp[j] = 0;
            B[i].comp[j] = 0;
            P[i].comp[j] = 0;

        }
	}
}

void multiMatrixSoft(VectorArray A, VectorArray B, VectorArray P)
{
	  for(int i=0; i < MSIZE; i++) {
	    for(int j=0; j < MSIZE; j++) {
	      for(int k=0; k < MSIZE; k++) { // k < q WILL ALSO WORK
	        P[i].comp[j] += A[i].comp[k]*B[i].comp[k];
	      }
	    }
	  }
}

void runmultiSoft(VectorArray A, VectorArray B, VectorArray P)
{
	XScuTimer timer;
	setupTimer(&timer);

	SetInputMatrices(A, B);
	displayMatrix(A, "aInst");
	displayMatrix(B, "bTInst");

	xil_printf("\r\nHardware Multiplication\r\n");
	u32 tStart = XScuTimer_GetCounterValue(&timer);
	multiMatrixSoft(A,B,P);
	u32 tSlut = XScuTimer_GetCounterValue(&timer);
	XScuTimer_Stop(&timer);
	printTime(tStart, tSlut);
}

void transpose(VectorArray input)
{
	VectorArray Buffer;
	for(int i=0; i<MSIZE;i++)
	{
		for(int j=0; j<MSIZE; j++)
		{
			Buffer[i].comp[j]=input[i].comp[j];
		}
	}


	for(int i=0; i<MSIZE;i++)
	{
		for(int j=0; j<MSIZE; j++)
		{
			input[j].comp[i]=Buffer[i].comp[j];
		}
	}
}

void multiMatrixHard(VectorArray A, VectorArray B, VectorArray P)
{
	UINTPTR regaddr0, regaddr1, regaddr2;
	regaddr0 = XPAR_MATRIX_IP_0_S00_AXI_BASEADDR + MATRIX_IP_S00_AXI_SLV_REG0_OFFSET;
	regaddr1 = XPAR_MATRIX_IP_0_S00_AXI_BASEADDR + MATRIX_IP_S00_AXI_SLV_REG1_OFFSET;
	regaddr2 = XPAR_MATRIX_IP_0_S00_AXI_BASEADDR + MATRIX_IP_S00_AXI_SLV_REG2_OFFSET;
	//transpose(B);

	  for(int i=0; i < MSIZE; i++)
	  {
		  Xil_Out32(regaddr0, A[i].vect);
		  for(int j=0; j < MSIZE; j++)
		  {
	    	Xil_Out32(regaddr1, B[j].vect);
	    	P[i].comp[j] = Xil_In32(regaddr2);
		  }
	  }
}

void runmultiHard(VectorArray A, VectorArray B, VectorArray P)
{
	XScuTimer timer;
	setupTimer(&timer);

	SetInputMatrices(A, B);
	displayMatrix(A, "aInst");
	displayMatrix(B, "bTInst");

	xil_printf("\r\nHardware Multiplication\r\n");
	u32 tStart = XScuTimer_GetCounterValue(&timer);
	multiMatrixHard(A,B,P);
	u32 tSlut = XScuTimer_GetCounterValue(&timer);
	XScuTimer_Stop(&timer);
	printTime(tStart, tSlut);

}

