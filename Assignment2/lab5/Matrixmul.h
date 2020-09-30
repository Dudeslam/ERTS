#include "xtime_l.h"
#include <xil_printf.h>
#include "matrix_ip.h"
#include "xparameters.h"
// Matrix Size
#define MSIZE 4

typedef union{
	unsigned char comp[MSIZE];
	unsigned int vect;
} VectorType;

typedef VectorType VectorArray[MSIZE];

void SetInputMatrices(VectorArray A, VectorArray B)
{
    for (u32 i = 0; i < MSIZE; i++) {
        for (u32 j = 0; j < MSIZE; j++) {
            A[i].comp[j] = (MSIZE*i) + j + 1;
            B[i].comp[j] = i+1;
        }
    }
}

void displayMatrix(VectorArray input)
{
	xil_printf("\r\nContents of Matrix: \r\n");
	for(int i=0; i<MSIZE;i++)
	{
		for(int j=0; j<MSIZE;j++)
		{
			xil_printf("%d ", input[i].comp[j]);
		}
		xil_printf("\r\n");
	}

}

void EmptyMatrix(VectorArray A, VectorArray B)
{
	    for (u32 i = 0; i < MSIZE; i++) {
        for (u32 j = 0; j < MSIZE; j++) {
            A[i].comp[j] = 0;
            B[i].comp[j] = 0;
        }

}

void multiMatrixSoft(VectorArray A, VectorArray B, VectorArray P)
{
	  for(int i=0; i < MSIZE; i++) {
	    for(int j=0; j < MSIZE; j++) {
	      for(int k=0; k < MSIZE; k++) { // k < q WILL ALSO WORK
	        P[i].comp[j] += A[i].comp[k]*B[k].comp[j];
	      }
	    }
	  }
}


void multiMatrixHard(VectorArray A, VectorArray B, VectorArray P)
{
	MATRIX_IP_S00_AXI_SLV_REG0_OFFSET
	MATRIX_IP_S01_AXI_SLV_REG0_OFFSET

	  for(int i=0; i < MSIZE; i++) {
		  Xil_Out32(XPAR_MATRIX_IP_0_S00_AXI_BASEADDR + MATRIX_IP_S00_AXI_SLV_REG0_OFFSET, A[i].vect);
	    for(int j=0; j < MSIZE; j++) {
	    	Xil_Out32(XPAR_MATRIX_IP_0_S00_AXI_BASEADDR + MATRIX_IP_S00_AXI_SLV_REG1_OFFSET, B[j].vect);
	    	  P[i].comp[j] = Xil_In32(XPAR_MATRIX_IP_0_S00_AXI_BASEADDR + MATRIX_IP_S00_AXI_SLV_REG2_OFFSET);
	    }
	  }





}

