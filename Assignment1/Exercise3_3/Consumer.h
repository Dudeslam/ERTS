#include <iostream>
using namespace std;
#include <systemc.h>
#include "TCPHeader.h"

SC_MODULE(Consumer) {

    sc_fifo<double> tcp_in;

    SC_CTOR(Consumer) {
        SC_THREAD(consumer_thread);
    }
    void consumer_thread(void)
    {
        while(1)
        {
        	
        }
    }
};

