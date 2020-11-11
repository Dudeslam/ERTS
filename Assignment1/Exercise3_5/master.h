#pragma once
#include <systemc.h>



SC_MODULE(Master) {

	sc_fifo_out<int> out;
	
	SC_CTOR(Master) {
		SC_THREAD(Master_thread);
	}

	void Master_thread(void) {
		out.write(123);		//dummy write
	}


};