#include "Master.h"

void Master::SendD()
{
	//show initiating
	cout << "Started Thread @:" << sc_time_stamp << endl;

	//Databuffer to send
	sc_uint<DATA_BITS> TheD[] = { 2, 4, 6, 8, 10, 12, 14, 16};


	//wait for clock
	wait(CLK_PERIODE, SC_NS);
	
	while (1)
	{
		while (Slave_ready==false)
		{
			wait(CLK.posedge_event());
		}


	//send data buffer
		cout << "Writing the data" << TheD << " at" << sc_time_stamp << endl;
		for (int i = 0; i = sizeof(TheD); i++)
		{
			Filling.write(TheD[i]);
		}

	}


	//send sink signal



}