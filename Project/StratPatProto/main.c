#include <stdio.h>
#include "xparameters.h"
#include "xaxidma.h"
#include "xconv_3x3_strm.h"
#include "xil_printf.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "xscutimer.h"
#include <sys/time.h>
#include <time.h>
#include "StratPat.h"


// AXI DMA Instance
XAxiDma AxiDma;

//Convolution filter instance
XConv_3x3_strm Conv;
XConv_3x3_strm_Config Conv_Config = {0,XPAR_CONV_3X3_STRM_0_S_AXI_CONTROL_BUS_BASEADDR};

//timer info
#define TIMER_DEVICE_ID		XPAR_XSCUTIMER_0_DEVICE_ID
#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#define TIMER_IRPT_INTR		XPAR_SCUTIMER_INTR
#define TIMER_LOAD_VALUE	0xFFFFFFFF

XScuTimer	Timer;

#define SIZE	256

static int init_dma(){
	XAxiDma_Config *CfgPtr;
	int status;

	CfgPtr = XAxiDma_LookupConfig(XPAR_AXI_DMA_0_DEVICE_ID);
	if(!CfgPtr){
		print("Error looking for AXI DMA config\n\r");
		return XST_FAILURE;
	}
	status = XAxiDma_CfgInitialize(&AxiDma,CfgPtr);
	if(status != XST_SUCCESS){
		print("Error initializing DMA\n\r");
		return XST_FAILURE;
	}
	//check for scatter gather mode
	if(XAxiDma_HasSg(&AxiDma)){
		print("Error DMA configured in SG mode\n\r");
		return XST_FAILURE;
	}
	// Disable interrupts, we use polling mode
	XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK,XAXIDMA_DEVICE_TO_DMA);
	XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK,XAXIDMA_DMA_TO_DEVICE);

	return XST_SUCCESS;
}

static void print_accel_status(void)
{
	int isDone, isIdle, isReady;

	isDone = XConv_3x3_strm_IsDone(&Conv);
	isIdle = XConv_3x3_strm_IsIdle(&Conv);
	isReady = XConv_3x3_strm_IsReady(&Conv);
	xil_printf("Convolution block status: isDone %d, isIdle %d, isReady%d\r\n", isDone, isIdle, isReady);
}


void InterfaceCode()
{
	int Status = init_dma();
	if(status != XST_SUCCESS){
		print("\rError: DMA init failed\n");
		return XST_FAILURE;
	}
	print("\rDMA Init done\n\r");
	
	
	Context *context = new Context(new HW_Filter);
	xil_printf("\nStarting software convolution\n");
	xil_printf("\r********************************\n\r");
	xil_printf("\r Convolution purely performed in software \n\n\r");
	context->RunLogic();
	
	
	Context *context = new Context(new SW_Filter);
	xil_printf("\nStarting software convolution\n");
	xil_printf("\r********************************\n\r");
	xil_printf("\r Convolution purely performed in software \n\n\r");
	context->RunLogic();
}


// In the main function we do a software convolution and a hardware accelerated convolution to compare performance
int main(void)
{
	InterfaceCode();

	return 1;
}




