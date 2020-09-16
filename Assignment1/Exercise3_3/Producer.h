#include <iostream>
#include <stdlib.h>
#include <systemc.h>

SC_MODULE(Producer) {
<<<<<<< HEAD

    sc_port<sc_fifo_out_if<TCPHeader*>, 0> out;

=======
	
    sc_port<sc_fifo_out_if<TCPHeader*>, 0> tcp_out;
    TCPHeader* TCPprod = new TCPHeader;
	
>>>>>>> 446621228cb283bc1ef5b3c6fd6a1b0e7390ea35
    SC_CTOR(Producer) {
        SC_THREAD(producer_thread);
        //TCPprod.SequenceNumber = 0;
    }
<<<<<<< HEAD
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
=======
    void producer_thread(void){
        wait((rand() % 10 + 2), SC_MS);
    	
    	while(1){
            std::cout << name() << " Sending TCP package with sequence number: " << TCPprod->SequenceNumber <<
                " at timestamp: " << sc_time_stamp() << std::endl;
            for (int i = 0; i < tcp_out.size(); i++){
                tcp_out[i]->write(TCPprod);
>>>>>>> 446621228cb283bc1ef5b3c6fd6a1b0e7390ea35
            }

            wait((rand() % 10 + 2), SC_MS);  		
            TCPprod->SequenceNumber++;
    	}
    }
};


