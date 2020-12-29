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




class SW_Filter : public StratPat
{
public:
	int PerformFilter() override;
	int test_borders_ok(int, int);
	int test_convolution_step(unsigned char, int, int, int);
};


// Functions for Software convolution
int SW_Filter::test_borders_ok(int y, int x){
	if (0 < y && y < SIZE && 0 < x && x < SIZE)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// Defines the actual calculation for one output value.
int SW_Filter::test_convolution_step(unsigned char window[3][3], int y, int x, int kernel[3][3]){
  int result = 0;
  for (int i =0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
		  if (test_borders_ok(y + i, x + j)) {
			  result += window[i][j] * kernel[i][j];
		  }
		  else {
			  return 0;
		  }
	  }
  }
  return result;
}


int SW_Filter::PerformFilter(){

  unsigned char src[SIZE][SIZE];
  unsigned char dst[SIZE][SIZE] = {0};
  int kernel[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
  unsigned char window[3][3] = {0};
  unsigned char val_out;
  xil_printf("Done defining data\n");

  // Set up timer
  XScuTimer_Config *TMRConfigPtr;     //timer config
  TMRConfigPtr = XScuTimer_LookupConfig(TIMER_DEVICE_ID);
  XScuTimer_CfgInitialize(&Timer, TMRConfigPtr,TMRConfigPtr->BaseAddr);
  XScuTimer_SelfTest(&Timer);
  //load the timer
  XScuTimer_LoadTimer(&Timer, TIMER_LOAD_VALUE);
  unsigned long int tick;

  xil_printf("Start timer\r\n");
  XScuTimer_Start(&Timer);

  // Here we perform a basic straightforward 3x3 convolution of the supplied image.
  for (int y = 0; y < SIZE; y++)
  {
		for (int x = 0; x < SIZE; x++)
		{
	  // Load window
			for (int i = -1; i <= 1; i++) {
				for (int j = -1; j <= 1; j++) {
					if (test_borders_ok(y + i+1, x + j+1)) {
						window[i + 1][j + 1] = src[y+i][x+j];
					}
				}
			}
	  // Calculate output value
	  //val_out = uint8_t(abs(test_convolution_step(window, y, x, kernel)/4));
	  int val = test_convolution_step(window, y, x, kernel);
	  //cout << val_out;
	  val_out = (unsigned char)(fabs(val / 4));
	  //cout << val_out << endl;
	  dst[y][x] = val_out;
		}
  }
  xil_printf("Measure timer\r\n");
  XScuTimer_Stop(&Timer);
  tick = XScuTimer_GetCounterValue(&Timer);

  printf("Software convolution took %.6lf secs\r\n",(double)(-1*tick)/XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ);

  return 1;
}
