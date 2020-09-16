#include "Slave.h"
#include <time.h>
#include <iostream>
#include <fstream>
#include <stdio.h>

void Slave::RetrieveD()
{
	cout << "Started Slave Thread @ " << sc_time_stamp() << endl;

	while (1)
	{
		
		//send slave ready signal
		Slave_ready.write(SC_LOGIC_1);

		//wait for data_valid
		while (data_valid.read() == SC_LOGIC_0){
			wait(CLK.posedge_event());
		}

		//is busy
		Slave_ready.write(SC_LOGIC_0);

		//read data
		sc_uint<DATA_BITS> FillMe = DataHolder.read();
		cout << "Received: " << FillMe << " at: " << sc_time_stamp() << endl;

		//save to file
		SavetoFile(FillMe);

		//wait a clockcycle
		wait(CLK.posedge_event());
	}
}


void Slave::SavetoFile(sc_uint<DATA_BITS> packet)
{
	std::ofstream outFile;
	outFile.open(FileName, std::ofstream::out | std::ofstream::app);
	outFile << packet << endl;
	outFile.close();
}




