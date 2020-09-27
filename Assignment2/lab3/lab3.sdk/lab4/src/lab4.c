#include "xparameters.h"
#include "xgpio.h"
#include "led_ip.h"
#include "xscutimer.h"
#define ONE_SECOND 325000000

//====================================================

int main (void) 
{
   // Initialize variables
   XGpio dip, push;
   XScuTimer Timer;
   int i, psb_check, dip_check, Status, time_passed;
   unsigned char value, skip;

   // Configure timer
   XScuTimer_Config *ConfigPtr;
   XScuTimer *TimerInstancePtr = &Timer;

   // Initialize the timer
   ConfigPtr = XScuTimer_LookupConfig (XPAR_PS7_SCUTIMER_0_DEVICE_ID);
   Status = XScuTimer_CfgInitialize (TimerInstancePtr, ConfigPtr, ConfigPtr->BaseAddr);
   if (Status != XST_SUCCESS){
	   xil_printf("Timer init() failed\r\n");
	   return XST_FAILURE;
   }
	
   xil_printf("-- Start of the Program --\r\n");
 
   // Initialize GPIO devices: Switches and LED's
   XGpio_Initialize(&dip, XPAR_SWITCHES_DEVICE_ID);
   XGpio_SetDataDirection(&dip, 1, 0xffffffff);
	
   XGpio_Initialize(&push, XPAR_BUTTONS_DEVICE_ID);
   XGpio_SetDataDirection(&push, 1, 0xffffffff);
	

   while (1)
   {
	  xil_printf("Enter choice: 1 (SW->Leds), 2 (Timer->Leds)");
	  xil_printf("CMD:> ");

	  /* Read an input value from the console. */
	  value = inbyte();
	  skip = inbyte(); //CR
	  skip = inbyte(); //LF (Skip this line using PuTTY terminal)

	  switch (value)
	  {
	  	  case '1':
	  	  {
	  		  xil_printf("-- Switch to LED --\n");
	  		  dip_check = XGpio_DiscreteRead(&dip, 1);
	  		  LED_IP_mWriteReg(XPAR_LED_IP_S_AXI_BASEADDR, 0, dip_check);

	  		  break;
	  	  }
	  	  case '2':
	  	  {
	  		  time_passed = 0;
	  		  xil_printf("-- Timer test --\n");
	  		  // Load timer with delay in multiple of ONE_SECOND
	  		  XScuTimer_LoadTimer(TimerInstancePtr, ONE_SECOND);
	  		  // Set AutoLoad mode
	  		  XScuTimer_EnableAutoReload(TimerInstancePtr);
	  		  // Start the timer
	  		  XScuTimer_Start(TimerInstancePtr);

	  		  while (time_passed <= 15){
		  		  // Check timer expired
		  		  if(XScuTimer_IsExpired(TimerInstancePtr)) {
		  			  time_passed++;
		  			  LED_IP_mWriteReg(XPAR_LED_IP_S_AXI_BASEADDR, 0, time_passed);
		  			  // clear status bit
		  			  XScuTimer_ClearInterruptStatus(TimerInstancePtr);
		  		  }
	  		  }
	  		  // Stop the timer
	  		  XScuTimer_Stop(TimerInstancePtr);
	  		  break;
	  	  }
	  }
   }
}