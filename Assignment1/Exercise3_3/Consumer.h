#include <iostream>
#include <systemc.h>
#include "TCPHeader.h"

template <class T>
SC_MODULE(Consumer) {
<<<<<<< HEAD

    sc_fifo_in_if<TCPHeader> tcp_in;
=======
	
    sc_fifo_in<TCPHeader* > tcp_in;
    TCPHeader* TCPcons = new TCPHeader;
>>>>>>> 446621228cb283bc1ef5b3c6fd6a1b0e7390ea35

    SC_CTOR(Consumer) {
        SC_THREAD(consumer_thread);
    }
<<<<<<< HEAD
    void consumer_thread(void)
    {
        T sample;

        while(1)
        {

=======
    void consumer_thread(void){
        while(1){
            TCPcons = tcp_in->read();
            std::cout << name() << " received TCP package with sequence number: " << TCPcons->SequenceNumber <<
                " at timestamp: " << sc_time_stamp() << std::endl;
>>>>>>> 446621228cb283bc1ef5b3c6fd6a1b0e7390ea35
        }
    }
    void print_consumer(void)
    {
        cout << tcp_in << endl;
    }
};


