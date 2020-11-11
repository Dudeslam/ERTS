#include <iostream>
#include <systemc.h>
#include "TCPHeader.h"

SC_MODULE(Consumer) {

    sc_fifo_in<TCPHeader* > tcp_in;
    TCPHeader* TCPcons = new TCPHeader;

    SC_CTOR(Consumer) {
        SC_THREAD(consumer_thread);
    }
    void consumer_thread(void)
    {
        while (1)
        {
            TCPcons = tcp_in->read();
            std::cout << name() << " received TCP package with sequence number: " << TCPcons->SequenceNumber << " at timestamp: " << sc_time_stamp() << std::endl;
        }
    }
};


