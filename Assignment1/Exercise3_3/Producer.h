#include <iostream>
using namespace std;
#include <systemc.h>
#include "TCPHeader.h"

SC_MODULE(Producer) {

    sc_port<sc_fifo_out_if<TCPHeader*>, 0> out;

    SC_CTOR(Producer) {
        SC_THREAD(producer_thread);
    }
    void producer_thread(void)
    {
        TCPHeader package;

    	while(1)
    	{
            int random = rand() % (10 - 2 + 1) + 2;
            wait(random, SC_MS);
            for (int i = 0; i < out.size(); i++)
            {
                out[i]->write(&package);
            }

    	}
    }
};

