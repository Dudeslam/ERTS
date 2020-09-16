#include "Master.h"

void Master::SendD()
{
	//show initiating
	cout << "Started Master Thread @:" << sc_time_stamp() << endl;
	//Databuffer to send
	sc_uint<DATA_BITS> TheD[] = { 2,4,8,16,32 };
	int sizbuff = sizeof(TheD) / sizeof(*TheD);
	int i = 0;
	while (1)
	{
			//wait for slave
			while (Slave_ready.read() == false){
				wait(CLK.posedge_event());
			}

			//send data buffer
			cout << "Sending the Data " << TheD[i] << " at " << sc_time_stamp() << endl;

			DataHolder.write(TheD[i++ % sizbuff]);
			channel.write(0); // Channel number
			error.write(0);   // Error

			//signal valid new data
			data_valid.write(true);

			wait(CLK.posedge_event());

			data_valid.write(false);

			//wait one clock cycle
			wait(CLK.posedge_event());
	}
}