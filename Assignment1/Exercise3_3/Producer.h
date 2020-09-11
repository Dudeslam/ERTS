#include <iostream>
using namespace std;
#include <systemc.h>
#include "TCPHeader.h"

SC_MODULE(Producer) {

    sc_fifo<double> tcp_out;

    SC_CTOR(Producer) {
        SC_THREAD(producer_thread);
    }
    void producer_thread(void)
    {
    	while(1)
    	{

    	}
    }
};

