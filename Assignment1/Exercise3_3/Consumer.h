#include <iostream>
using namespace std;
#include <systemc.h>
#include "TCPHeader.h"

template <class T>
SC_MODULE(Consumer) {

    sc_fifo_in_if<TCPHeader> tcp_in;

    SC_CTOR(Consumer) {
        SC_THREAD(consumer_thread);
    }
    void consumer_thread(void)
    {
        T sample;

        while(1)
        {

        }
    }
    void print_consumer(void)
    {
        cout << tcp_in << endl;
    }
};

