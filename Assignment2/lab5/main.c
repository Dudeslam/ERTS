#include "xparameters.h"
#include "xgpio.h"

#include "led_ip.h"
#include "xscutimer.h"
#include "xscugic.h"
#include "Matrixmul.h"
#include "matrix_ip.h"
#include "malloc.h"
#include "led_ip.h"
#include "matrix_ip.h"

#include "xscutimer.h"
#define CLOCK_SECOND 325000000
#define CLOCK_MILLISECOND 325000
#define CLOCK_MICROSECOND 325
int setupTimer(XScuTimer *timer);
void printTime(XScuTimer *timer);

VectorArray aInst, bTInst, pInst;
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
		// Load timer with delay in multiple of ONE_SECOND
		XScuTimer_LoadTimer(TimerInstancePtr, CLOCK_SECOND);
		// Set AutoLoad mode
		XScuTimer_EnableAutoReload(TimerInstancePtr);
}

void printTime(XScuTimer *timer){
	u32 timeCount = XScuTimer_GetCounterValue(timer);
	xil_printf("Clock cycles: %d\r\n", timeCount);
	xil_printf("Seconds: %d\r\n", timeCount/CLOCK_SECOND);
	xil_printf("Milliseconds: %d\r\n", timeCount/CLOCK_MILLISECOND);
	xil_printf("Microseconds: %d\r\n", timeCount/CLOCK_MICROSECOND);
	xil_printf("\r\n");
}


int main(void)
{
	XScuTimer timer;
	setupTimer(&timer);
	xil_printf("-- Starting Program -- \r\n");
	SetInputMatrices(aInst, bTInst);
	displayMatrix(aInst, "aInst");
	displayMatrix(bTInst, "bTInst");

	xil_printf("\r\nSoftware Multiplication\r\n");
	XScuTimer_Start(&timer);
	multiMatrixSoft(aInst, bTInst, pInst);
	XScuTimer_Stop(&timer);
	printTime(&timer);
	displayMatrix(pInst, "pInst");

	xil_printf("\r\nClearing Matrices");
	EmptyMatrix(aInst, bTInst, pInst);
	displayMatrix(aInst, "aInst");
	//displayMatrix(bTInst, "bTInst");
	//displayMatrix(pInst, "pInst");

	xil_printf("\r\nRe-adding variables to matrices \r\n");
	SetInputMatrices(aInst, bTInst);
	//displayMatrix(aInst, "aInst");
	//displayMatrix(bTInst, "bTInst");

	//xil_printf("\r\nTransposing");
	//displayMatrix(bTInst, "bTInst");

	//multiMatrixSoft(aInst, bTInst, pInst);
	//displayMatrix(pInst, "pInst");

	xil_printf("\r\nHardware Multiplication\r\n");
	XScuTimer_Start(&timer);
	multiMatrixHard(aInst, bTInst, pInst);
	XScuTimer_Stop(&timer);
	printTime(&timer);

	displayMatrix(pInst, "pInst");

	while(1)
	{

	}
}
