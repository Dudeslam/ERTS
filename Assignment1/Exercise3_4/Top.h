#pragma once
#include "systemc.h"
#include "Config.h"
#include "Master.h"
#include "Slave.h"

SC_MODULE(Top) {
public:
    Master master;
    Slave slave;

    sc_clock CLK;
    sc_signal<bool> Slave_Ready, Data_Valid;
    sc_signal<sc_uint<DATA_BITS > > DataHolder;
    sc_signal<sc_uint<ERROR_BITS > > error;
    sc_signal<sc_uint<CHANNEL_BITS > > channel;

    sc_trace_file* tf;

    SC_CTOR(Top) :
        master("master"),
        slave("Slave"),
        CLK("CLK", sc_time(CLK_PERIODE, SC_NS)),
        Slave_Ready("Slave_Ready"),
        Data_Valid("Data_Valid"),
        DataHolder("data"),
        error("error"),
        channel("channel")
    {

        // Connect Master signals
        master.CLK(CLK);
        master.Slave_ready(Slave_Ready);
        master.data_valid(Data_Valid);
        master.DataHolder(DataHolder);
        master.error(error);
        master.channel(channel);

        // Connect Slave signals
        slave.CLK(CLK);
        slave.Slave_ready(Slave_Ready);
        slave.data_valid(Data_Valid);
        slave.DataHolder(DataHolder);
        slave.error(error);
        slave.channel(channel);

        // Create VCD wave form file used for signal timing analysis
        tf = sc_create_vcd_trace_file("3.4_exercise_trace");
        if (!tf) {
            cout << "Unable to create trace file!" << endl;
            exit(-1);
        }

        tf->set_time_unit(1, SC_NS);
        sc_trace(tf, CLK, "CLK");
        sc_trace(tf, Slave_Ready, "Slave_Ready");
        sc_trace(tf, Data_Valid, "Data_Valid");
        sc_trace(tf, DataHolder, "data");
        sc_trace(tf, error, "error");
        sc_trace(tf, channel, "channel");
    }

    ~Top() {
        sc_close_vcd_trace_file(tf);
        cout << "Trace file created successfully." << endl;
    }
};