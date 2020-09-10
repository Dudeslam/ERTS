#pragma once
#include "systemc.h"
#include <iostream>

#define PACKET_SIZE	512
#define DATA_SIZE	(PACKET_SIZE-20)

typedef struct
{
	sc_uint<16>SourcePort;
	sc_uint<16>DestinationPort;
	sc_uint<32>SequenceNumber;
	sc_uint<32>Acknowledge;
	sc_uint<16>StatusBit;
	sc_uint<16> WindowSize;
	sc_uint<16> Checksum;
	sc_uint<16> UrgentPointer;
	char Data[DATA_SIZE];
} TCPHeader;

template <class T>
class Consumer1 : public sc_module
{
public:
    sc_in<bool> clock_in;
    sc_fifo<int>* my_fifo;
    int id;
    SC_HAS_PROCESS(Consumer);
    Consumer1(sc_module_name name) : sc_module(name)
    {
        // process registration
        SC_METHOD(readStuff);
        sensitive << clock_in;
    }

    void readStuff()
    {
        T sample;
        while (1)
        {
            sample = in.read();
            for (int i = 0; i < out.size(); i++)
            {
                out[i]->write(sample);
            }
        }
    }
};

template <class T>
class Consumer2 : public sc_module
{
public:
    sc_in<bool> clock_in;
    sc_fifo<int>* my_fifo;
    int id;
    SC_HAS_PROCESS(Consumer);
    Consumer2(sc_module_name name) : sc_module(name)
    {
        // process registration
        SC_METHOD(readStuff);
        sensitive << clock_in;
    }

    void readStuff()
    {
        T sample;
        while (1)
        {
            sample = in.read();
            for (int i = 0; i < out.size(); i++)
            {
                out[i]->write(sample);
            }
        }
    }
};


template <class T>
class Producer : public sc_module
{
public:

    sc_event A, B, Aack, Back;
    sc_uint<4> counter;
    bool alternator;

    int Rnum;
    void prod_A(void)
    {
        Rnum = rand() % (2 - 10 + 1) + 2;
        while (1)
        {
            wait(sc_time(Rnum), SC_MS);

        }
    }
    void prod_B(void)
    {
        Rnum = rand() % (2 - 10 + 1) + 2;
        while (1) {
            wait(sc_time(Rnum), SC_MS);

        }
    }
};
