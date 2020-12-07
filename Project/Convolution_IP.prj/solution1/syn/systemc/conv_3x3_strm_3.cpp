#include "conv_3x3_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_3x3_strm::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_V_din\" :  \"" << out_stream_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_stream_V_full_n\" :  \"" << out_stream_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_V_write\" :  \"" << out_stream_V_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream_V_dout\" :  \"" << in_stream_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream_V_empty_n\" :  \"" << in_stream_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_stream_V_read\" :  \"" << in_stream_V_read.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

