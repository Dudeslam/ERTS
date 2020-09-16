#pragma once
#include <systemc.h>

template <class T>
class InAdapter : public sc_fifo_out_if<T>, public sc_module
{
public:
	
	//clock and reset
	sc_in_clk clock;
	sc_in<sc_logic>reset;

	//handshake
	sc_in<sc_logic>ready;
	sc_out<sc_logic>valid;

	//channel, error and data ports ST bus
	sc_out<sc_uint<CHANNEL_BITS>> channel;
	sc_out<sc_uint<ERROR_BITS>> error;
	sc_out<sc_uint<DATA_BITS>> data;

	void write(const T & value) {

		if (reset == SC_LOGIC_0) {
			// Output sample data on negative edge
			while (ready== SC_LOGIC_0) {
				wait(clock.posedge_event());
			}
			wait(clock.posedge_event());
			data.write(value);
			channel.write(0);
			error.write(0);
			valid.write(SC_LOGIC_1);
			wait(clock.posedge_event());
			valid.write(SC_LOGIC_0);
		}
		else {
			wait(clock.posedge_event());
		}
	}


	InAdapter(sc_module_name name_)
	:sc_module(name_)
	{}

private:
	bool nb_write(const T & data) {
		SC_REPORT_FATAL("/InAdapter", "Called nb_write()");
		return false;
	}

	virtual int num_free()const {
		SC_REPORT_FATAL("/InAdapter", "Called num_free()");
		return 0;
	}

	virtual const sc_event& data_read_event() const {
		SC_REPORT_FATAL("/InAdapter", "Called data_read_event()");
		return *new sc_event;
	}










};//*/end inAdapter