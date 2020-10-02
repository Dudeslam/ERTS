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

VectorArray aInst, bTInst, pInst;


int main(void)
{
	xil_printf("-- Starting Program -- \r\n");
	SetInputMatrices(aInst, bTInst);
	displayMatrix(aInst, "aInst");
	displayMatrix(bTInst, "bTInst");

	xil_printf("\r\nSoftware Multiplication");
	multiMatrixSoft(aInst, bTInst, pInst);
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

	xil_printf("\r\nTransposing");
	transpose(bTInst);
	displayMatrix(bTInst, "bTInst");

	//multiMatrixSoft(aInst, bTInst, pInst);
	//displayMatrix(pInst, "pInst");

	xil_printf("\r\nHardware Multiplication");
	multiMatrixHard(aInst, bTInst, pInst);
	displayMatrix(pInst, "pInst");

	while(1)
	{

	}
}
