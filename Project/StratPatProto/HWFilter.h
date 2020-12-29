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
#include "Strategy.h"


class HW_Filter : public StratPat
{
public:
	int PerformFilter() override;
	
};


int HW_Filter::PerformFilter()
{
	unsigned char input[SIZE*SIZE + 1] = {0};
	unsigned char output[SIZE*SIZE];
	int status;
	unsigned int dma_size_input = SIZE*SIZE * sizeof(unsigned char);
	unsigned int dma_size_output = SIZE*SIZE * sizeof(unsigned char);

	for (int i=0; i<SIZE*SIZE; i++)
	{
		output[i] = 1;
	}

	// Fill with some numbers for initial test
	for (int i=0; i<SIZE; i++)
	{
		for (int j=0; j<SIZE; j++){
			input[i*SIZE+j] = ((j % 3)+1)*50;
			//xil_printf("%u ", input[i*SIZE+j]);
		}
		//xil_printf("\n");
	}
	xil_printf("Done loading data\n");

	// Initialize timer
	XScuTimer_Config *TMRConfigPtr;
	TMRConfigPtr = XScuTimer_LookupConfig(TIMER_DEVICE_ID);
	XScuTimer_CfgInitialize(&Timer, TMRConfigPtr,TMRConfigPtr->BaseAddr);
	XScuTimer_SelfTest(&Timer);
	//load the timer
	XScuTimer_LoadTimer(&Timer, TIMER_LOAD_VALUE);
	unsigned long int tick;

	// Initialize DMA
	status = init_dma();

	if(status != XST_SUCCESS){
		print("\rError: DMA init failed\n");
		return XST_FAILURE;
	}
	print("\rDMA Init done\n\r");

	// Initialize Convolution IP block
	status = XConv_3x3_strm_CfgInitialize(&Conv, &Conv_Config);
	if(status != XST_SUCCESS){
		xil_printf("Error: example setup failed\r\n");
		return XST_FAILURE;
	}

	// Disable interrupts
	XConv_3x3_strm_InterruptGlobalDisable(&Conv);
	XConv_3x3_strm_InterruptDisable(&Conv, 1);
	print_accel_status();

	//flush the cache
	Xil_DCacheFlushRange((u32)input,dma_size_input);
	Xil_DCacheFlushRange((u32)output,dma_size_output);
	xil_printf("\rCache cleared\n\r");

	// Start the timer
	xil_printf("\rSetup HW accelerator done\r\n");
	xil_printf("Start timer\r\n");
	XScuTimer_Start(&Timer);

	//start the hardware accelerator
	XConv_3x3_strm_Start(&Conv);

	//transfer data to IP block through DMA
	status = XAxiDma_SimpleTransfer(&AxiDma, (u32) input, dma_size_input, XAXIDMA_DMA_TO_DEVICE );
	if (status != XST_SUCCESS) {
		xil_printf("Error: DMA transfer matrix A to Vivado HLS block failed\n");
		return XST_FAILURE;
	}

	//get results from the Vivado HLS block through DMA
	status = XAxiDma_SimpleTransfer(&AxiDma, (u32) output, dma_size_output, XAXIDMA_DEVICE_TO_DMA);
	if (status != XST_SUCCESS) {
		xil_printf("Error: DMA transfer from Vivado HLS block failed\n");
		return XST_FAILURE;
	}

	while (XAxiDma_Busy(&AxiDma, XAXIDMA_DMA_TO_DEVICE)) {
		print_accel_status();
	}
	xil_printf("\rSend input done\r\n");

	while (XAxiDma_Busy(&AxiDma, XAXIDMA_DEVICE_TO_DMA)) ;

	xil_printf("Measure timer\r\n");
	XScuTimer_Stop(&Timer);
	tick = XScuTimer_GetCounterValue(&Timer);

	printf("Hardware accelerated convolution took %.6lf secs\r\n",(double)(-1*tick)/XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ);
   	print_accel_status();

   	// Uncomment this in order to print the result
   	/*
	for (int i = 0; i<SIZE; i++)
	{
		for (int j = 0; j<SIZE; j++)
		{
			xil_printf("%u ", output[i*SIZE+j]);
		}
		xil_printf("\n");
	}
	*/

	return 1;
}
