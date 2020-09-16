#pragma once
#include <systemc.h>
#include "Config.h"
#include <iostream>
#include <fstream>
#include <time.h>


//check if ready

SC_MODULE(Slave)
{
public:

	//clock and reset
	sc_in_clk CLK;
	
	// Acknowledge data ready 
	sc_out<sc_logic>  Slave_ready;
	sc_in<sc_logic>	data_valid;
	sc_in<sc_uint<DATA_BITS>> DataHolder;
	sc_in<sc_uint<ERROR_BITS > > error;
	sc_in<sc_uint<CHANNEL_BITS > > channel;
	// Input data port
	
	// File Thingy
	const char* FileName = "3.4_OutputFile.txt";

	SC_CTOR(Slave)
	{
		//delete in case already exists
		fileExists();
		//create new file
		createFile();
		SC_THREAD(RetrieveD);

	}

private:
	
	void RetrieveD();

	void createFile()
	{
		std::ofstream outfile(FileName);
		outfile << "Databits saved: " << endl;
		cout << "File succesfully Created"  << endl;
	}
	void fileExists()
	{
		if (remove(FileName) != 0)
			cout << "No File to delete" << endl;
		else
			cout << "File Succesfully deleted" << endl;
		return;
	}

	void SavetoFile(sc_uint<DATA_BITS>);


};
