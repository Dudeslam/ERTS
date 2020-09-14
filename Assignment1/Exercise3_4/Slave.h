#pragma once
#include <systemc.h>
#include "Config.h"
#include <iostream>
#include <fstream>


//check if ready

SC_MODULE(Slave)
{
public:

	//clock
	sc_in_clk CLK;
	
	// Acknowledge data ready 
	sc_out<bool>  Slave_ready;
	sc_in<bool>	data_inc;

	// Input data port
	sc_uint<DATA_BITS> FillMeUp;

	// File Thingy
	const char* FileName = "3.4_OutputFile.txt";

	SC_CTOR(Slave)
	{
		SC_THREAD(RetrieveD);

	}

private:
	//gain entry
	void RetrieveD();

	void createFile()
	{
		std::ofstream outfile(FileName);
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
