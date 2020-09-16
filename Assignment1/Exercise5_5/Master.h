#pragma once

#include "Config.h"
#include "master.h"
#include <systemc.h>

SC_MODULE(Master) {

public:

	sc_fifo_out<int> out;
	int counter = 0;
	
	SC_CTOR(Master) {
		SC_THREAD(Master_thread);
	}


private:
	void Master_thread(void) {
		while (1)
		{
			out.write(32*counter);
			counter++;
		}
	}
};