#include "xtime_l.h"
#include <xil_printf.h>
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

void multiMatrixHard(VectorArray A, VectorArray B, VectorArray P);

