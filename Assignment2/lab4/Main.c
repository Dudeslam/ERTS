#include "xparameters.h"
#include "xgpio.h"

#include "led_ip.h"
#include "xscutimer.h"
#include "xscugic.h"
#include "Matrixmul.h"
#include "matrix_ip.h"
#include "malloc.h"

VectorArray aInst, bTInst, pInst;

int main(void)
{

	SetInputMatrices(aInst, bTInst);
	displayMatrix(aInst);
	displayMatrix(bTInst);

	multiMatrixSoft(aInst, bTInst, pInst);
	displayMatrix(pInst);

	while(1)
	{

	}
}
