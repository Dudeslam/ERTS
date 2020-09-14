#include "Slave.h"
#include <time.h>
#include <iostream>
#include <fstream>
#include <stdio.h>

void Slave::RetrieveD()
{
	//Create file
	fileExists();
	cout << "Creating File" << endl;
	createFile();

	while (1)
	{
		cout << "Signal Slave is ready " << sc_time_stamp << endl;
		//send ready signal
		Slave_ready.write(true);

		//wait for data
		while (data_inc == false)
		{
			wait(CLK.posedge_event());
		}

		//is busy
		Slave_ready.write(false);

		//read data
		FillMeUp = data_inc.read();
		
		//save to file
		SavetoFile(FillMeUp);

		//wait a clockcycle
		wait(CLK.posedge_event());

	}
}


void Slave::SavetoFile(sc_uint<DATA_BITS> packet)
{
	std::ofstream outFile(FileName);
	outFile << packet << endl;
	outFile.close();
}




