#include <iostream>
#include <stdlib.h>
#include <systemc.h>

//#include "TCPHeader.h"

SC_MODULE(Producer) {
	
    //sc_fifo_out<TCPHeader* > tcp_out;
    sc_port<sc_fifo_out_if<TCPHeader*>, 0> tcp_out;
    TCPHeader* TCPprod = new TCPHeader;
	

    SC_CTOR(Producer) {
        SC_THREAD(producer_thread);
        //TCPprod.SequenceNumber = 0;
    }
    void producer_thread(void)
    {
        wait((rand() % 10 + 2), SC_MS);
    	
    	while(1)
    	{
            std::cout << name() << " Sending TCP package with sequence number: " << TCPprod->SequenceNumber << " at timestamp: " << sc_time_stamp() << std::endl;
            for (int i = 0; i < tcp_out.size(); i++)
            {
                tcp_out[i]->write(TCPprod);
            }

            wait((rand() % 10 + 2), SC_MS);
    		
            TCPprod->SequenceNumber++;
    	}
    }
};

