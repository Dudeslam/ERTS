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



VectorArray aInst, bTInst, pInst;


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
	tStart = XScuTimer_GetCounterValue(&timer);
	multiMatrixSoft(aInst,bTInst,pInst);
	tSlut = XScuTimer_GetCounterValue(&timer);
	XScuTimer_Stop(&timer);
	printTime(tStart, tSlut);
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
	tStart = XScuTimer_GetCounterValue(&timer);
	multiMatrixHard(aInst,bTInst,pInst);
	tSlut = XScuTimer_GetCounterValue(&timer);
	XScuTimer_Stop(&timer);
	printTime(tStart, tSlut);

	displayMatrix(pInst, "pInst");

	while(1)
	{

	}
}
