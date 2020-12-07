#include "conv_3x3_strm.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void conv_3x3_strm::thread_result_2_i_205_2_fu_94186_p3() {
    result_2_i_205_2_fu_94186_p3 = (!brmerge_demorgan_i_2_132_fu_94171_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_132_fu_94171_p2.read()[0].to_bool())? result_205_2_fu_94180_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_205_fu_94227_p3() {
    result_2_i_205_fu_94227_p3 = (!tmp_13_204_0_2_reg_124674.read()[0].is_01())? sc_lv<9>(): ((tmp_13_204_0_2_reg_124674.read()[0].to_bool())? tmp_17_205_fu_94221_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_206_0_0_s_fu_94238_p3() {
    result_2_i_206_0_0_s_fu_94238_p3 = (!brmerge_demorgan_i_2_135_fu_94234_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_135_fu_94234_p2.read()[0].to_bool())? result_2_i_205_fu_94227_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_206_0_2_c_fu_94269_p1() {
    result_2_i_206_0_2_c_fu_94269_p1 = esl_sext<11,9>(result_2_i_206_0_2_fu_94261_p3.read());
}

void conv_3x3_strm::thread_result_2_i_206_0_2_fu_94261_p3() {
    result_2_i_206_0_2_fu_94261_p3 = (!brmerge_demorgan_i_2_136_fu_94246_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_136_fu_94246_p2.read()[0].to_bool())? result_206_0_2_fu_94255_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_206_1_0_s_fu_94415_p3() {
    result_2_i_206_1_0_s_fu_94415_p3 = (!brmerge_demorgan_i_2_138_fu_94411_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_138_fu_94411_p2.read()[0].to_bool())? result_2_i_206_1_fu_94405_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_206_1_2_fu_94446_p3() {
    result_2_i_206_1_2_fu_94446_p3 = (!brmerge_demorgan_i_2_139_fu_94423_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_139_fu_94423_p2.read()[0].to_bool())? result_206_1_2_fu_94440_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_206_1_fu_94405_p3() {
    result_2_i_206_1_fu_94405_p3 = (!brmerge_demorgan_i_2_137_reg_128272.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_137_reg_128272.read()[0].to_bool())? result_206_1_reg_128278.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_206_2_0_s_fu_94482_p3() {
    result_2_i_206_2_0_s_fu_94482_p3 = (!brmerge_demorgan_i_2_141_fu_94477_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_141_fu_94477_p2.read()[0].to_bool())? result_2_i_206_2_fu_94469_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_206_2_2_fu_94617_p3() {
    result_2_i_206_2_2_fu_94617_p3 = (!brmerge_demorgan_i_2_142_fu_94613_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_142_fu_94613_p2.read()[0].to_bool())? result_206_2_2_reg_128314.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_206_2_fu_94469_p3() {
    result_2_i_206_2_fu_94469_p3 = (!brmerge_demorgan_i_2_140_fu_94454_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_140_fu_94454_p2.read()[0].to_bool())? result_206_2_fu_94463_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_206_fu_94510_p3() {
    result_2_i_206_fu_94510_p3 = (!tmp_13_205_0_2_reg_124743.read()[0].is_01())? sc_lv<9>(): ((tmp_13_205_0_2_reg_124743.read()[0].to_bool())? tmp_17_206_fu_94504_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_207_0_0_s_fu_94521_p3() {
    result_2_i_207_0_0_s_fu_94521_p3 = (!brmerge_demorgan_i_2_143_fu_94517_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_143_fu_94517_p2.read()[0].to_bool())? result_2_i_206_fu_94510_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_207_0_2_c_fu_94552_p1() {
    result_2_i_207_0_2_c_fu_94552_p1 = esl_sext<11,9>(result_2_i_207_0_2_fu_94544_p3.read());
}

void conv_3x3_strm::thread_result_2_i_207_0_2_fu_94544_p3() {
    result_2_i_207_0_2_fu_94544_p3 = (!brmerge_demorgan_i_2_144_fu_94529_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_144_fu_94529_p2.read()[0].to_bool())? result_207_0_2_fu_94538_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_207_1_0_s_fu_94698_p3() {
    result_2_i_207_1_0_s_fu_94698_p3 = (!brmerge_demorgan_i_2_146_fu_94694_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_146_fu_94694_p2.read()[0].to_bool())? result_2_i_207_1_fu_94688_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_207_1_2_fu_94729_p3() {
    result_2_i_207_1_2_fu_94729_p3 = (!brmerge_demorgan_i_2_147_fu_94706_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_147_fu_94706_p2.read()[0].to_bool())? result_207_1_2_fu_94723_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_207_1_fu_94688_p3() {
    result_2_i_207_1_fu_94688_p3 = (!brmerge_demorgan_i_2_145_reg_128319.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_145_reg_128319.read()[0].to_bool())? result_207_1_reg_128325.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_207_2_0_s_fu_94765_p3() {
    result_2_i_207_2_0_s_fu_94765_p3 = (!brmerge_demorgan_i_2_149_fu_94760_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_149_fu_94760_p2.read()[0].to_bool())? result_2_i_207_2_fu_94752_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_207_2_2_fu_94900_p3() {
    result_2_i_207_2_2_fu_94900_p3 = (!brmerge_demorgan_i_2_150_fu_94896_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_150_fu_94896_p2.read()[0].to_bool())? result_207_2_2_reg_128361.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_207_2_fu_94752_p3() {
    result_2_i_207_2_fu_94752_p3 = (!brmerge_demorgan_i_2_148_fu_94737_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_148_fu_94737_p2.read()[0].to_bool())? result_207_2_fu_94746_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_207_fu_94793_p3() {
    result_2_i_207_fu_94793_p3 = (!tmp_13_206_0_2_reg_124758.read()[0].is_01())? sc_lv<9>(): ((tmp_13_206_0_2_reg_124758.read()[0].to_bool())? tmp_17_207_fu_94787_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_208_0_0_s_fu_94804_p3() {
    result_2_i_208_0_0_s_fu_94804_p3 = (!brmerge_demorgan_i_2_151_fu_94800_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_151_fu_94800_p2.read()[0].to_bool())? result_2_i_207_fu_94793_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_208_0_2_c_fu_94835_p1() {
    result_2_i_208_0_2_c_fu_94835_p1 = esl_sext<11,9>(result_2_i_208_0_2_fu_94827_p3.read());
}

void conv_3x3_strm::thread_result_2_i_208_0_2_fu_94827_p3() {
    result_2_i_208_0_2_fu_94827_p3 = (!brmerge_demorgan_i_2_152_fu_94812_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_152_fu_94812_p2.read()[0].to_bool())? result_208_0_2_fu_94821_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_208_1_0_s_fu_94981_p3() {
    result_2_i_208_1_0_s_fu_94981_p3 = (!brmerge_demorgan_i_2_154_fu_94977_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_154_fu_94977_p2.read()[0].to_bool())? result_2_i_208_1_fu_94971_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_208_1_2_fu_95012_p3() {
    result_2_i_208_1_2_fu_95012_p3 = (!brmerge_demorgan_i_2_155_fu_94989_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_155_fu_94989_p2.read()[0].to_bool())? result_208_1_2_fu_95006_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_208_1_fu_94971_p3() {
    result_2_i_208_1_fu_94971_p3 = (!brmerge_demorgan_i_2_153_reg_128366.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_153_reg_128366.read()[0].to_bool())? result_208_1_reg_128372.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_208_2_0_s_fu_95048_p3() {
    result_2_i_208_2_0_s_fu_95048_p3 = (!brmerge_demorgan_i_2_157_fu_95043_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_157_fu_95043_p2.read()[0].to_bool())? result_2_i_208_2_fu_95035_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_208_2_2_fu_95183_p3() {
    result_2_i_208_2_2_fu_95183_p3 = (!brmerge_demorgan_i_2_158_fu_95179_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_158_fu_95179_p2.read()[0].to_bool())? result_208_2_2_reg_128408.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_208_2_fu_95035_p3() {
    result_2_i_208_2_fu_95035_p3 = (!brmerge_demorgan_i_2_156_fu_95020_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_156_fu_95020_p2.read()[0].to_bool())? result_208_2_fu_95029_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_208_fu_95076_p3() {
    result_2_i_208_fu_95076_p3 = (!tmp_13_207_0_2_reg_124834.read()[0].is_01())? sc_lv<9>(): ((tmp_13_207_0_2_reg_124834.read()[0].to_bool())? tmp_17_208_fu_95070_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_209_0_0_s_fu_95087_p3() {
    result_2_i_209_0_0_s_fu_95087_p3 = (!brmerge_demorgan_i_2_159_fu_95083_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_159_fu_95083_p2.read()[0].to_bool())? result_2_i_208_fu_95076_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_209_0_2_c_fu_95118_p1() {
    result_2_i_209_0_2_c_fu_95118_p1 = esl_sext<11,9>(result_2_i_209_0_2_fu_95110_p3.read());
}

void conv_3x3_strm::thread_result_2_i_209_0_2_fu_95110_p3() {
    result_2_i_209_0_2_fu_95110_p3 = (!brmerge_demorgan_i_2_160_fu_95095_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_160_fu_95095_p2.read()[0].to_bool())? result_209_0_2_fu_95104_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_209_1_0_s_fu_95264_p3() {
    result_2_i_209_1_0_s_fu_95264_p3 = (!brmerge_demorgan_i_2_162_fu_95260_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_162_fu_95260_p2.read()[0].to_bool())? result_2_i_209_1_fu_95254_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_209_1_2_fu_95295_p3() {
    result_2_i_209_1_2_fu_95295_p3 = (!brmerge_demorgan_i_2_163_fu_95272_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_163_fu_95272_p2.read()[0].to_bool())? result_209_1_2_fu_95289_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_209_1_fu_95254_p3() {
    result_2_i_209_1_fu_95254_p3 = (!brmerge_demorgan_i_2_161_reg_128413.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_161_reg_128413.read()[0].to_bool())? result_209_1_reg_128419.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_209_2_0_s_fu_95331_p3() {
    result_2_i_209_2_0_s_fu_95331_p3 = (!brmerge_demorgan_i_2_165_fu_95326_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_165_fu_95326_p2.read()[0].to_bool())? result_2_i_209_2_fu_95318_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_209_2_2_fu_95466_p3() {
    result_2_i_209_2_2_fu_95466_p3 = (!brmerge_demorgan_i_2_166_fu_95462_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_166_fu_95462_p2.read()[0].to_bool())? result_209_2_2_reg_128455.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_209_2_fu_95318_p3() {
    result_2_i_209_2_fu_95318_p3 = (!brmerge_demorgan_i_2_164_fu_95303_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_164_fu_95303_p2.read()[0].to_bool())? result_209_2_fu_95312_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_209_fu_95359_p3() {
    result_2_i_209_fu_95359_p3 = (!tmp_13_208_0_2_reg_124903.read()[0].is_01())? sc_lv<9>(): ((tmp_13_208_0_2_reg_124903.read()[0].to_bool())? tmp_17_209_fu_95353_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_20_0_0_s_fu_41600_p3() {
    result_2_i_20_0_0_s_fu_41600_p3 = (!brmerge_demorgan_i_2_8_fu_41596_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_8_fu_41596_p2.read()[0].to_bool())? result_2_i_19_fu_41589_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_20_0_2_ca_fu_41631_p1() {
    result_2_i_20_0_2_ca_fu_41631_p1 = esl_sext<11,9>(result_2_i_20_0_2_fu_41623_p3.read());
}

void conv_3x3_strm::thread_result_2_i_20_0_2_fu_41623_p3() {
    result_2_i_20_0_2_fu_41623_p3 = (!brmerge_demorgan_i_2_9_fu_41608_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_9_fu_41608_p2.read()[0].to_bool())? result_20_0_2_fu_41617_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_20_1_0_s_fu_41777_p3() {
    result_2_i_20_1_0_s_fu_41777_p3 = (!brmerge_demorgan_i_2_10_fu_41773_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_10_fu_41773_p2.read()[0].to_bool())? result_2_i_20_1_fu_41767_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_20_1_2_fu_41808_p3() {
    result_2_i_20_1_2_fu_41808_p3 = (!brmerge_demorgan_i_2_11_fu_41785_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_11_fu_41785_p2.read()[0].to_bool())? result_20_1_2_fu_41802_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_20_1_fu_41767_p3() {
    result_2_i_20_1_fu_41767_p3 = (!brmerge_demorgan_i_2_535_reg_112861.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_535_reg_112861.read()[0].to_bool())? result_20_1_reg_112867.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_20_2_0_s_fu_41844_p3() {
    result_2_i_20_2_0_s_fu_41844_p3 = (!brmerge_demorgan_i_2_13_fu_41839_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_13_fu_41839_p2.read()[0].to_bool())? result_2_i_20_2_fu_41831_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_20_2_2_fu_41979_p3() {
    result_2_i_20_2_2_fu_41979_p3 = (!brmerge_demorgan_i_2_14_fu_41975_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_14_fu_41975_p2.read()[0].to_bool())? result_20_2_2_reg_112944.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_20_2_fu_41831_p3() {
    result_2_i_20_2_fu_41831_p3 = (!brmerge_demorgan_i_2_12_fu_41816_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_12_fu_41816_p2.read()[0].to_bool())? result_20_2_fu_41825_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_20_fu_41872_p3() {
    result_2_i_20_fu_41872_p3 = (!tmp_13_19_0_2_reg_112378.read()[0].is_01())? sc_lv<9>(): ((tmp_13_19_0_2_reg_112378.read()[0].to_bool())? tmp_17_20_fu_41866_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_210_0_0_s_fu_95370_p3() {
    result_2_i_210_0_0_s_fu_95370_p3 = (!brmerge_demorgan_i_2_167_fu_95366_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_167_fu_95366_p2.read()[0].to_bool())? result_2_i_209_fu_95359_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_210_0_2_c_fu_95401_p1() {
    result_2_i_210_0_2_c_fu_95401_p1 = esl_sext<11,9>(result_2_i_210_0_2_fu_95393_p3.read());
}

void conv_3x3_strm::thread_result_2_i_210_0_2_fu_95393_p3() {
    result_2_i_210_0_2_fu_95393_p3 = (!brmerge_demorgan_i_2_168_fu_95378_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_168_fu_95378_p2.read()[0].to_bool())? result_210_0_2_fu_95387_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_210_1_0_s_fu_95547_p3() {
    result_2_i_210_1_0_s_fu_95547_p3 = (!brmerge_demorgan_i_2_170_fu_95543_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_170_fu_95543_p2.read()[0].to_bool())? result_2_i_210_1_fu_95537_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_210_1_2_fu_95578_p3() {
    result_2_i_210_1_2_fu_95578_p3 = (!brmerge_demorgan_i_2_171_fu_95555_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_171_fu_95555_p2.read()[0].to_bool())? result_210_1_2_fu_95572_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_210_1_fu_95537_p3() {
    result_2_i_210_1_fu_95537_p3 = (!brmerge_demorgan_i_2_169_reg_128460.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_169_reg_128460.read()[0].to_bool())? result_210_1_reg_128466.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_210_2_0_s_fu_95614_p3() {
    result_2_i_210_2_0_s_fu_95614_p3 = (!brmerge_demorgan_i_2_173_fu_95609_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_173_fu_95609_p2.read()[0].to_bool())? result_2_i_210_2_fu_95601_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_210_2_2_fu_95749_p3() {
    result_2_i_210_2_2_fu_95749_p3 = (!brmerge_demorgan_i_2_174_fu_95745_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_174_fu_95745_p2.read()[0].to_bool())? result_210_2_2_reg_128502.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_210_2_fu_95601_p3() {
    result_2_i_210_2_fu_95601_p3 = (!brmerge_demorgan_i_2_172_fu_95586_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_172_fu_95586_p2.read()[0].to_bool())? result_210_2_fu_95595_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_210_fu_95642_p3() {
    result_2_i_210_fu_95642_p3 = (!tmp_13_209_0_2_reg_124972.read()[0].is_01())? sc_lv<9>(): ((tmp_13_209_0_2_reg_124972.read()[0].to_bool())? tmp_17_210_fu_95636_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_211_0_0_s_fu_95653_p3() {
    result_2_i_211_0_0_s_fu_95653_p3 = (!brmerge_demorgan_i_2_175_fu_95649_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_175_fu_95649_p2.read()[0].to_bool())? result_2_i_210_fu_95642_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_211_0_2_c_fu_95684_p1() {
    result_2_i_211_0_2_c_fu_95684_p1 = esl_sext<11,9>(result_2_i_211_0_2_fu_95676_p3.read());
}

void conv_3x3_strm::thread_result_2_i_211_0_2_fu_95676_p3() {
    result_2_i_211_0_2_fu_95676_p3 = (!brmerge_demorgan_i_2_176_fu_95661_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_176_fu_95661_p2.read()[0].to_bool())? result_211_0_2_fu_95670_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_211_1_0_s_fu_95830_p3() {
    result_2_i_211_1_0_s_fu_95830_p3 = (!brmerge_demorgan_i_2_178_fu_95826_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_178_fu_95826_p2.read()[0].to_bool())? result_2_i_211_1_fu_95820_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_211_1_2_fu_95861_p3() {
    result_2_i_211_1_2_fu_95861_p3 = (!brmerge_demorgan_i_2_179_fu_95838_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_179_fu_95838_p2.read()[0].to_bool())? result_211_1_2_fu_95855_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_211_1_fu_95820_p3() {
    result_2_i_211_1_fu_95820_p3 = (!brmerge_demorgan_i_2_177_reg_128507.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_177_reg_128507.read()[0].to_bool())? result_211_1_reg_128513.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_211_2_0_s_fu_95897_p3() {
    result_2_i_211_2_0_s_fu_95897_p3 = (!brmerge_demorgan_i_2_181_fu_95892_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_181_fu_95892_p2.read()[0].to_bool())? result_2_i_211_2_fu_95884_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_211_2_2_fu_96032_p3() {
    result_2_i_211_2_2_fu_96032_p3 = (!brmerge_demorgan_i_2_182_fu_96028_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_182_fu_96028_p2.read()[0].to_bool())? result_211_2_2_reg_128549.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_211_2_fu_95884_p3() {
    result_2_i_211_2_fu_95884_p3 = (!brmerge_demorgan_i_2_180_fu_95869_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_180_fu_95869_p2.read()[0].to_bool())? result_211_2_fu_95878_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_211_fu_95925_p3() {
    result_2_i_211_fu_95925_p3 = (!tmp_13_210_0_2_reg_124987.read()[0].is_01())? sc_lv<9>(): ((tmp_13_210_0_2_reg_124987.read()[0].to_bool())? tmp_17_211_fu_95919_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_212_0_0_s_fu_95936_p3() {
    result_2_i_212_0_0_s_fu_95936_p3 = (!brmerge_demorgan_i_2_183_fu_95932_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_183_fu_95932_p2.read()[0].to_bool())? result_2_i_211_fu_95925_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_212_0_2_c_fu_95967_p1() {
    result_2_i_212_0_2_c_fu_95967_p1 = esl_sext<11,9>(result_2_i_212_0_2_fu_95959_p3.read());
}

void conv_3x3_strm::thread_result_2_i_212_0_2_fu_95959_p3() {
    result_2_i_212_0_2_fu_95959_p3 = (!brmerge_demorgan_i_2_184_fu_95944_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_184_fu_95944_p2.read()[0].to_bool())? result_212_0_2_fu_95953_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_212_1_0_s_fu_96113_p3() {
    result_2_i_212_1_0_s_fu_96113_p3 = (!brmerge_demorgan_i_2_186_fu_96109_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_186_fu_96109_p2.read()[0].to_bool())? result_2_i_212_1_fu_96103_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_212_1_2_fu_96144_p3() {
    result_2_i_212_1_2_fu_96144_p3 = (!brmerge_demorgan_i_2_187_fu_96121_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_187_fu_96121_p2.read()[0].to_bool())? result_212_1_2_fu_96138_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_212_1_fu_96103_p3() {
    result_2_i_212_1_fu_96103_p3 = (!brmerge_demorgan_i_2_185_reg_128554.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_185_reg_128554.read()[0].to_bool())? result_212_1_reg_128560.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_212_2_0_s_fu_96180_p3() {
    result_2_i_212_2_0_s_fu_96180_p3 = (!brmerge_demorgan_i_2_189_fu_96175_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_189_fu_96175_p2.read()[0].to_bool())? result_2_i_212_2_fu_96167_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_212_2_2_fu_96315_p3() {
    result_2_i_212_2_2_fu_96315_p3 = (!brmerge_demorgan_i_2_190_fu_96311_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_190_fu_96311_p2.read()[0].to_bool())? result_212_2_2_reg_128596.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_212_2_fu_96167_p3() {
    result_2_i_212_2_fu_96167_p3 = (!brmerge_demorgan_i_2_188_fu_96152_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_188_fu_96152_p2.read()[0].to_bool())? result_212_2_fu_96161_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_212_fu_96208_p3() {
    result_2_i_212_fu_96208_p3 = (!tmp_13_211_0_2_reg_125063.read()[0].is_01())? sc_lv<9>(): ((tmp_13_211_0_2_reg_125063.read()[0].to_bool())? tmp_17_212_fu_96202_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_213_0_0_s_fu_96219_p3() {
    result_2_i_213_0_0_s_fu_96219_p3 = (!brmerge_demorgan_i_2_191_fu_96215_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_191_fu_96215_p2.read()[0].to_bool())? result_2_i_212_fu_96208_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_213_0_2_c_fu_96250_p1() {
    result_2_i_213_0_2_c_fu_96250_p1 = esl_sext<11,9>(result_2_i_213_0_2_fu_96242_p3.read());
}

void conv_3x3_strm::thread_result_2_i_213_0_2_fu_96242_p3() {
    result_2_i_213_0_2_fu_96242_p3 = (!brmerge_demorgan_i_2_192_fu_96227_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_192_fu_96227_p2.read()[0].to_bool())? result_213_0_2_fu_96236_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_213_1_0_s_fu_96396_p3() {
    result_2_i_213_1_0_s_fu_96396_p3 = (!brmerge_demorgan_i_2_194_fu_96392_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_194_fu_96392_p2.read()[0].to_bool())? result_2_i_213_1_fu_96386_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_213_1_2_fu_96427_p3() {
    result_2_i_213_1_2_fu_96427_p3 = (!brmerge_demorgan_i_2_195_fu_96404_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_195_fu_96404_p2.read()[0].to_bool())? result_213_1_2_fu_96421_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_213_1_fu_96386_p3() {
    result_2_i_213_1_fu_96386_p3 = (!brmerge_demorgan_i_2_193_reg_128601.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_193_reg_128601.read()[0].to_bool())? result_213_1_reg_128607.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_213_2_0_s_fu_96463_p3() {
    result_2_i_213_2_0_s_fu_96463_p3 = (!brmerge_demorgan_i_2_197_fu_96458_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_197_fu_96458_p2.read()[0].to_bool())? result_2_i_213_2_fu_96450_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_213_2_2_fu_96598_p3() {
    result_2_i_213_2_2_fu_96598_p3 = (!brmerge_demorgan_i_2_198_fu_96594_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_198_fu_96594_p2.read()[0].to_bool())? result_213_2_2_reg_128643.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_213_2_fu_96450_p3() {
    result_2_i_213_2_fu_96450_p3 = (!brmerge_demorgan_i_2_196_fu_96435_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_196_fu_96435_p2.read()[0].to_bool())? result_213_2_fu_96444_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_213_fu_96491_p3() {
    result_2_i_213_fu_96491_p3 = (!tmp_13_212_0_2_reg_125132.read()[0].is_01())? sc_lv<9>(): ((tmp_13_212_0_2_reg_125132.read()[0].to_bool())? tmp_17_213_fu_96485_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_214_0_0_s_fu_96502_p3() {
    result_2_i_214_0_0_s_fu_96502_p3 = (!brmerge_demorgan_i_2_199_fu_96498_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_199_fu_96498_p2.read()[0].to_bool())? result_2_i_213_fu_96491_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_214_0_2_c_fu_96533_p1() {
    result_2_i_214_0_2_c_fu_96533_p1 = esl_sext<11,9>(result_2_i_214_0_2_fu_96525_p3.read());
}

void conv_3x3_strm::thread_result_2_i_214_0_2_fu_96525_p3() {
    result_2_i_214_0_2_fu_96525_p3 = (!brmerge_demorgan_i_2_200_fu_96510_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_200_fu_96510_p2.read()[0].to_bool())? result_214_0_2_fu_96519_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_214_1_0_s_fu_96679_p3() {
    result_2_i_214_1_0_s_fu_96679_p3 = (!brmerge_demorgan_i_2_202_fu_96675_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_202_fu_96675_p2.read()[0].to_bool())? result_2_i_214_1_fu_96669_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_214_1_2_fu_96710_p3() {
    result_2_i_214_1_2_fu_96710_p3 = (!brmerge_demorgan_i_2_203_fu_96687_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_203_fu_96687_p2.read()[0].to_bool())? result_214_1_2_fu_96704_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_214_1_fu_96669_p3() {
    result_2_i_214_1_fu_96669_p3 = (!brmerge_demorgan_i_2_201_reg_128648.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_201_reg_128648.read()[0].to_bool())? result_214_1_reg_128654.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_214_2_0_s_fu_96746_p3() {
    result_2_i_214_2_0_s_fu_96746_p3 = (!brmerge_demorgan_i_2_205_fu_96741_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_205_fu_96741_p2.read()[0].to_bool())? result_2_i_214_2_fu_96733_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_214_2_2_fu_96881_p3() {
    result_2_i_214_2_2_fu_96881_p3 = (!brmerge_demorgan_i_2_206_fu_96877_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_206_fu_96877_p2.read()[0].to_bool())? result_214_2_2_reg_128690.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_214_2_fu_96733_p3() {
    result_2_i_214_2_fu_96733_p3 = (!brmerge_demorgan_i_2_204_fu_96718_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_204_fu_96718_p2.read()[0].to_bool())? result_214_2_fu_96727_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_214_fu_96774_p3() {
    result_2_i_214_fu_96774_p3 = (!tmp_13_213_0_2_reg_125201.read()[0].is_01())? sc_lv<9>(): ((tmp_13_213_0_2_reg_125201.read()[0].to_bool())? tmp_17_214_fu_96768_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_215_0_0_s_fu_96785_p3() {
    result_2_i_215_0_0_s_fu_96785_p3 = (!brmerge_demorgan_i_2_207_fu_96781_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_207_fu_96781_p2.read()[0].to_bool())? result_2_i_214_fu_96774_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_215_0_2_c_fu_96816_p1() {
    result_2_i_215_0_2_c_fu_96816_p1 = esl_sext<11,9>(result_2_i_215_0_2_fu_96808_p3.read());
}

void conv_3x3_strm::thread_result_2_i_215_0_2_fu_96808_p3() {
    result_2_i_215_0_2_fu_96808_p3 = (!brmerge_demorgan_i_2_208_fu_96793_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_208_fu_96793_p2.read()[0].to_bool())? result_215_0_2_fu_96802_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_215_1_0_s_fu_96962_p3() {
    result_2_i_215_1_0_s_fu_96962_p3 = (!brmerge_demorgan_i_2_210_fu_96958_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_210_fu_96958_p2.read()[0].to_bool())? result_2_i_215_1_fu_96952_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_215_1_2_fu_96993_p3() {
    result_2_i_215_1_2_fu_96993_p3 = (!brmerge_demorgan_i_2_211_fu_96970_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_211_fu_96970_p2.read()[0].to_bool())? result_215_1_2_fu_96987_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_215_1_fu_96952_p3() {
    result_2_i_215_1_fu_96952_p3 = (!brmerge_demorgan_i_2_209_reg_128695.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_209_reg_128695.read()[0].to_bool())? result_215_1_reg_128701.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_215_2_0_s_fu_97029_p3() {
    result_2_i_215_2_0_s_fu_97029_p3 = (!brmerge_demorgan_i_2_213_fu_97024_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_213_fu_97024_p2.read()[0].to_bool())? result_2_i_215_2_fu_97016_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_215_2_2_fu_97164_p3() {
    result_2_i_215_2_2_fu_97164_p3 = (!brmerge_demorgan_i_2_214_fu_97160_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_214_fu_97160_p2.read()[0].to_bool())? result_215_2_2_reg_128737.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_215_2_fu_97016_p3() {
    result_2_i_215_2_fu_97016_p3 = (!brmerge_demorgan_i_2_212_fu_97001_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_212_fu_97001_p2.read()[0].to_bool())? result_215_2_fu_97010_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_215_fu_97057_p3() {
    result_2_i_215_fu_97057_p3 = (!tmp_13_214_0_2_reg_125216.read()[0].is_01())? sc_lv<9>(): ((tmp_13_214_0_2_reg_125216.read()[0].to_bool())? tmp_17_215_fu_97051_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_216_0_0_s_fu_97068_p3() {
    result_2_i_216_0_0_s_fu_97068_p3 = (!brmerge_demorgan_i_2_215_fu_97064_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_215_fu_97064_p2.read()[0].to_bool())? result_2_i_215_fu_97057_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_216_0_2_c_fu_97099_p1() {
    result_2_i_216_0_2_c_fu_97099_p1 = esl_sext<11,9>(result_2_i_216_0_2_fu_97091_p3.read());
}

void conv_3x3_strm::thread_result_2_i_216_0_2_fu_97091_p3() {
    result_2_i_216_0_2_fu_97091_p3 = (!brmerge_demorgan_i_2_216_fu_97076_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_216_fu_97076_p2.read()[0].to_bool())? result_216_0_2_fu_97085_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_216_1_0_s_fu_97245_p3() {
    result_2_i_216_1_0_s_fu_97245_p3 = (!brmerge_demorgan_i_2_218_fu_97241_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_218_fu_97241_p2.read()[0].to_bool())? result_2_i_216_1_fu_97235_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_216_1_2_fu_97276_p3() {
    result_2_i_216_1_2_fu_97276_p3 = (!brmerge_demorgan_i_2_219_fu_97253_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_219_fu_97253_p2.read()[0].to_bool())? result_216_1_2_fu_97270_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_216_1_fu_97235_p3() {
    result_2_i_216_1_fu_97235_p3 = (!brmerge_demorgan_i_2_217_reg_128742.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_217_reg_128742.read()[0].to_bool())? result_216_1_reg_128748.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_216_2_0_s_fu_97312_p3() {
    result_2_i_216_2_0_s_fu_97312_p3 = (!brmerge_demorgan_i_2_221_fu_97307_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_221_fu_97307_p2.read()[0].to_bool())? result_2_i_216_2_fu_97299_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_216_2_2_fu_97447_p3() {
    result_2_i_216_2_2_fu_97447_p3 = (!brmerge_demorgan_i_2_222_fu_97443_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_222_fu_97443_p2.read()[0].to_bool())? result_216_2_2_reg_128784.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_216_2_fu_97299_p3() {
    result_2_i_216_2_fu_97299_p3 = (!brmerge_demorgan_i_2_220_fu_97284_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_220_fu_97284_p2.read()[0].to_bool())? result_216_2_fu_97293_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_216_fu_97340_p3() {
    result_2_i_216_fu_97340_p3 = (!tmp_13_215_0_2_reg_125292.read()[0].is_01())? sc_lv<9>(): ((tmp_13_215_0_2_reg_125292.read()[0].to_bool())? tmp_17_216_fu_97334_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_217_0_0_s_fu_97351_p3() {
    result_2_i_217_0_0_s_fu_97351_p3 = (!brmerge_demorgan_i_2_223_fu_97347_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_223_fu_97347_p2.read()[0].to_bool())? result_2_i_216_fu_97340_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_217_0_2_c_fu_97382_p1() {
    result_2_i_217_0_2_c_fu_97382_p1 = esl_sext<11,9>(result_2_i_217_0_2_fu_97374_p3.read());
}

void conv_3x3_strm::thread_result_2_i_217_0_2_fu_97374_p3() {
    result_2_i_217_0_2_fu_97374_p3 = (!brmerge_demorgan_i_2_224_fu_97359_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_224_fu_97359_p2.read()[0].to_bool())? result_217_0_2_fu_97368_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_217_1_0_s_fu_97528_p3() {
    result_2_i_217_1_0_s_fu_97528_p3 = (!brmerge_demorgan_i_2_226_fu_97524_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_226_fu_97524_p2.read()[0].to_bool())? result_2_i_217_1_fu_97518_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_217_1_2_fu_97559_p3() {
    result_2_i_217_1_2_fu_97559_p3 = (!brmerge_demorgan_i_2_227_fu_97536_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_227_fu_97536_p2.read()[0].to_bool())? result_217_1_2_fu_97553_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_217_1_fu_97518_p3() {
    result_2_i_217_1_fu_97518_p3 = (!brmerge_demorgan_i_2_225_reg_128789.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_225_reg_128789.read()[0].to_bool())? result_217_1_reg_128795.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_217_2_0_s_fu_97595_p3() {
    result_2_i_217_2_0_s_fu_97595_p3 = (!brmerge_demorgan_i_2_229_fu_97590_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_229_fu_97590_p2.read()[0].to_bool())? result_2_i_217_2_fu_97582_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_217_2_2_fu_97730_p3() {
    result_2_i_217_2_2_fu_97730_p3 = (!brmerge_demorgan_i_2_230_fu_97726_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_230_fu_97726_p2.read()[0].to_bool())? result_217_2_2_reg_128831.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_217_2_fu_97582_p3() {
    result_2_i_217_2_fu_97582_p3 = (!brmerge_demorgan_i_2_228_fu_97567_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_228_fu_97567_p2.read()[0].to_bool())? result_217_2_fu_97576_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_217_fu_97623_p3() {
    result_2_i_217_fu_97623_p3 = (!tmp_13_216_0_2_reg_125361.read()[0].is_01())? sc_lv<9>(): ((tmp_13_216_0_2_reg_125361.read()[0].to_bool())? tmp_17_217_fu_97617_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_218_0_0_s_fu_97634_p3() {
    result_2_i_218_0_0_s_fu_97634_p3 = (!brmerge_demorgan_i_2_231_fu_97630_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_231_fu_97630_p2.read()[0].to_bool())? result_2_i_217_fu_97623_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_218_0_2_c_fu_97665_p1() {
    result_2_i_218_0_2_c_fu_97665_p1 = esl_sext<11,9>(result_2_i_218_0_2_fu_97657_p3.read());
}

void conv_3x3_strm::thread_result_2_i_218_0_2_fu_97657_p3() {
    result_2_i_218_0_2_fu_97657_p3 = (!brmerge_demorgan_i_2_232_fu_97642_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_232_fu_97642_p2.read()[0].to_bool())? result_218_0_2_fu_97651_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_218_1_0_s_fu_97811_p3() {
    result_2_i_218_1_0_s_fu_97811_p3 = (!brmerge_demorgan_i_2_234_fu_97807_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_234_fu_97807_p2.read()[0].to_bool())? result_2_i_218_1_fu_97801_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_218_1_2_fu_97842_p3() {
    result_2_i_218_1_2_fu_97842_p3 = (!brmerge_demorgan_i_2_235_fu_97819_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_235_fu_97819_p2.read()[0].to_bool())? result_218_1_2_fu_97836_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_218_1_fu_97801_p3() {
    result_2_i_218_1_fu_97801_p3 = (!brmerge_demorgan_i_2_233_reg_128836.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_233_reg_128836.read()[0].to_bool())? result_218_1_reg_128842.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_218_2_0_s_fu_97878_p3() {
    result_2_i_218_2_0_s_fu_97878_p3 = (!brmerge_demorgan_i_2_237_fu_97873_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_237_fu_97873_p2.read()[0].to_bool())? result_2_i_218_2_fu_97865_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_218_2_2_fu_98013_p3() {
    result_2_i_218_2_2_fu_98013_p3 = (!brmerge_demorgan_i_2_238_fu_98009_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_238_fu_98009_p2.read()[0].to_bool())? result_218_2_2_reg_128878.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_218_2_fu_97865_p3() {
    result_2_i_218_2_fu_97865_p3 = (!brmerge_demorgan_i_2_236_fu_97850_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_236_fu_97850_p2.read()[0].to_bool())? result_218_2_fu_97859_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_218_fu_97906_p3() {
    result_2_i_218_fu_97906_p3 = (!tmp_13_217_0_2_reg_125430.read()[0].is_01())? sc_lv<9>(): ((tmp_13_217_0_2_reg_125430.read()[0].to_bool())? tmp_17_218_fu_97900_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_219_0_0_s_fu_97917_p3() {
    result_2_i_219_0_0_s_fu_97917_p3 = (!brmerge_demorgan_i_2_239_fu_97913_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_239_fu_97913_p2.read()[0].to_bool())? result_2_i_218_fu_97906_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_219_0_2_c_fu_97948_p1() {
    result_2_i_219_0_2_c_fu_97948_p1 = esl_sext<11,9>(result_2_i_219_0_2_fu_97940_p3.read());
}

void conv_3x3_strm::thread_result_2_i_219_0_2_fu_97940_p3() {
    result_2_i_219_0_2_fu_97940_p3 = (!brmerge_demorgan_i_2_240_fu_97925_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_240_fu_97925_p2.read()[0].to_bool())? result_219_0_2_fu_97934_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_219_1_0_s_fu_98094_p3() {
    result_2_i_219_1_0_s_fu_98094_p3 = (!brmerge_demorgan_i_2_242_fu_98090_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_242_fu_98090_p2.read()[0].to_bool())? result_2_i_219_1_fu_98084_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_219_1_2_fu_98125_p3() {
    result_2_i_219_1_2_fu_98125_p3 = (!brmerge_demorgan_i_2_243_fu_98102_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_243_fu_98102_p2.read()[0].to_bool())? result_219_1_2_fu_98119_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_219_1_fu_98084_p3() {
    result_2_i_219_1_fu_98084_p3 = (!brmerge_demorgan_i_2_241_reg_128883.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_241_reg_128883.read()[0].to_bool())? result_219_1_reg_128889.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_219_2_0_s_fu_98161_p3() {
    result_2_i_219_2_0_s_fu_98161_p3 = (!brmerge_demorgan_i_2_245_fu_98156_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_245_fu_98156_p2.read()[0].to_bool())? result_2_i_219_2_fu_98148_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_219_2_2_fu_98296_p3() {
    result_2_i_219_2_2_fu_98296_p3 = (!brmerge_demorgan_i_2_246_fu_98292_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_246_fu_98292_p2.read()[0].to_bool())? result_219_2_2_reg_128925.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_219_2_fu_98148_p3() {
    result_2_i_219_2_fu_98148_p3 = (!brmerge_demorgan_i_2_244_fu_98133_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_244_fu_98133_p2.read()[0].to_bool())? result_219_2_fu_98142_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_219_fu_98189_p3() {
    result_2_i_219_fu_98189_p3 = (!tmp_13_218_0_2_reg_125445.read()[0].is_01())? sc_lv<9>(): ((tmp_13_218_0_2_reg_125445.read()[0].to_bool())? tmp_17_219_fu_98183_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_21_0_0_s_fu_41883_p3() {
    result_2_i_21_0_0_s_fu_41883_p3 = (!brmerge_demorgan_i_2_15_fu_41879_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_15_fu_41879_p2.read()[0].to_bool())? result_2_i_20_fu_41872_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_21_0_2_ca_fu_41914_p1() {
    result_2_i_21_0_2_ca_fu_41914_p1 = esl_sext<11,9>(result_2_i_21_0_2_fu_41906_p3.read());
}

void conv_3x3_strm::thread_result_2_i_21_0_2_fu_41906_p3() {
    result_2_i_21_0_2_fu_41906_p3 = (!brmerge_demorgan_i_2_16_fu_41891_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_16_fu_41891_p2.read()[0].to_bool())? result_21_0_2_fu_41900_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_21_1_0_s_fu_42060_p3() {
    result_2_i_21_1_0_s_fu_42060_p3 = (!brmerge_demorgan_i_2_18_fu_42056_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_18_fu_42056_p2.read()[0].to_bool())? result_2_i_21_1_fu_42050_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_21_1_2_fu_42091_p3() {
    result_2_i_21_1_2_fu_42091_p3 = (!brmerge_demorgan_i_2_19_fu_42068_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_19_fu_42068_p2.read()[0].to_bool())? result_21_1_2_fu_42085_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_21_1_fu_42050_p3() {
    result_2_i_21_1_fu_42050_p3 = (!brmerge_demorgan_i_2_17_reg_112949.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_17_reg_112949.read()[0].to_bool())? result_21_1_reg_112955.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_21_2_0_s_fu_42127_p3() {
    result_2_i_21_2_0_s_fu_42127_p3 = (!brmerge_demorgan_i_2_21_fu_42122_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_21_fu_42122_p2.read()[0].to_bool())? result_2_i_21_2_fu_42114_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_21_2_2_fu_42262_p3() {
    result_2_i_21_2_2_fu_42262_p3 = (!brmerge_demorgan_i_2_22_fu_42258_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_22_fu_42258_p2.read()[0].to_bool())? result_21_2_2_reg_113032.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_21_2_fu_42114_p3() {
    result_2_i_21_2_fu_42114_p3 = (!brmerge_demorgan_i_2_20_fu_42099_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_20_fu_42099_p2.read()[0].to_bool())? result_21_2_fu_42108_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_21_fu_42155_p3() {
    result_2_i_21_fu_42155_p3 = (!tmp_13_20_0_2_reg_112459.read()[0].is_01())? sc_lv<9>(): ((tmp_13_20_0_2_reg_112459.read()[0].to_bool())? tmp_17_21_fu_42149_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_220_0_0_s_fu_98200_p3() {
    result_2_i_220_0_0_s_fu_98200_p3 = (!brmerge_demorgan_i_2_247_fu_98196_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_247_fu_98196_p2.read()[0].to_bool())? result_2_i_219_fu_98189_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_220_0_2_c_fu_98231_p1() {
    result_2_i_220_0_2_c_fu_98231_p1 = esl_sext<11,9>(result_2_i_220_0_2_fu_98223_p3.read());
}

void conv_3x3_strm::thread_result_2_i_220_0_2_fu_98223_p3() {
    result_2_i_220_0_2_fu_98223_p3 = (!brmerge_demorgan_i_2_248_fu_98208_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_248_fu_98208_p2.read()[0].to_bool())? result_220_0_2_fu_98217_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_220_1_0_s_fu_98377_p3() {
    result_2_i_220_1_0_s_fu_98377_p3 = (!brmerge_demorgan_i_2_250_fu_98373_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_250_fu_98373_p2.read()[0].to_bool())? result_2_i_220_1_fu_98367_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_220_1_2_fu_98408_p3() {
    result_2_i_220_1_2_fu_98408_p3 = (!brmerge_demorgan_i_2_251_fu_98385_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_251_fu_98385_p2.read()[0].to_bool())? result_220_1_2_fu_98402_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_220_1_fu_98367_p3() {
    result_2_i_220_1_fu_98367_p3 = (!brmerge_demorgan_i_2_249_reg_128930.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_249_reg_128930.read()[0].to_bool())? result_220_1_reg_128936.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_220_2_0_s_fu_98444_p3() {
    result_2_i_220_2_0_s_fu_98444_p3 = (!brmerge_demorgan_i_2_253_fu_98439_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_253_fu_98439_p2.read()[0].to_bool())? result_2_i_220_2_fu_98431_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_220_2_2_fu_98579_p3() {
    result_2_i_220_2_2_fu_98579_p3 = (!brmerge_demorgan_i_2_254_fu_98575_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_254_fu_98575_p2.read()[0].to_bool())? result_220_2_2_reg_128972.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_220_2_fu_98431_p3() {
    result_2_i_220_2_fu_98431_p3 = (!brmerge_demorgan_i_2_252_fu_98416_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_252_fu_98416_p2.read()[0].to_bool())? result_220_2_fu_98425_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_220_fu_98472_p3() {
    result_2_i_220_fu_98472_p3 = (!tmp_13_219_0_2_reg_125521.read()[0].is_01())? sc_lv<9>(): ((tmp_13_219_0_2_reg_125521.read()[0].to_bool())? tmp_17_220_fu_98466_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_221_0_0_s_fu_98483_p3() {
    result_2_i_221_0_0_s_fu_98483_p3 = (!brmerge_demorgan_i_2_255_fu_98479_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_255_fu_98479_p2.read()[0].to_bool())? result_2_i_220_fu_98472_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_221_0_2_c_fu_98514_p1() {
    result_2_i_221_0_2_c_fu_98514_p1 = esl_sext<11,9>(result_2_i_221_0_2_fu_98506_p3.read());
}

void conv_3x3_strm::thread_result_2_i_221_0_2_fu_98506_p3() {
    result_2_i_221_0_2_fu_98506_p3 = (!brmerge_demorgan_i_2_256_fu_98491_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_256_fu_98491_p2.read()[0].to_bool())? result_221_0_2_fu_98500_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_221_1_0_s_fu_98660_p3() {
    result_2_i_221_1_0_s_fu_98660_p3 = (!brmerge_demorgan_i_2_258_fu_98656_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_258_fu_98656_p2.read()[0].to_bool())? result_2_i_221_1_fu_98650_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_221_1_2_fu_98691_p3() {
    result_2_i_221_1_2_fu_98691_p3 = (!brmerge_demorgan_i_2_259_fu_98668_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_259_fu_98668_p2.read()[0].to_bool())? result_221_1_2_fu_98685_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_221_1_fu_98650_p3() {
    result_2_i_221_1_fu_98650_p3 = (!brmerge_demorgan_i_2_257_reg_128977.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_257_reg_128977.read()[0].to_bool())? result_221_1_reg_128983.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_221_2_0_s_fu_98727_p3() {
    result_2_i_221_2_0_s_fu_98727_p3 = (!brmerge_demorgan_i_2_261_fu_98722_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_261_fu_98722_p2.read()[0].to_bool())? result_2_i_221_2_fu_98714_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_221_2_2_fu_98862_p3() {
    result_2_i_221_2_2_fu_98862_p3 = (!brmerge_demorgan_i_2_262_fu_98858_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_262_fu_98858_p2.read()[0].to_bool())? result_221_2_2_reg_129019.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_221_2_fu_98714_p3() {
    result_2_i_221_2_fu_98714_p3 = (!brmerge_demorgan_i_2_260_fu_98699_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_260_fu_98699_p2.read()[0].to_bool())? result_221_2_fu_98708_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_221_fu_98755_p3() {
    result_2_i_221_fu_98755_p3 = (!tmp_13_220_0_2_reg_125590.read()[0].is_01())? sc_lv<9>(): ((tmp_13_220_0_2_reg_125590.read()[0].to_bool())? tmp_17_221_fu_98749_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_222_0_0_s_fu_98766_p3() {
    result_2_i_222_0_0_s_fu_98766_p3 = (!brmerge_demorgan_i_2_263_fu_98762_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_263_fu_98762_p2.read()[0].to_bool())? result_2_i_221_fu_98755_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_222_0_2_c_fu_98797_p1() {
    result_2_i_222_0_2_c_fu_98797_p1 = esl_sext<11,9>(result_2_i_222_0_2_fu_98789_p3.read());
}

void conv_3x3_strm::thread_result_2_i_222_0_2_fu_98789_p3() {
    result_2_i_222_0_2_fu_98789_p3 = (!brmerge_demorgan_i_2_264_fu_98774_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_264_fu_98774_p2.read()[0].to_bool())? result_222_0_2_fu_98783_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_222_1_0_s_fu_98943_p3() {
    result_2_i_222_1_0_s_fu_98943_p3 = (!brmerge_demorgan_i_2_266_fu_98939_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_266_fu_98939_p2.read()[0].to_bool())? result_2_i_222_1_fu_98933_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_222_1_2_fu_98974_p3() {
    result_2_i_222_1_2_fu_98974_p3 = (!brmerge_demorgan_i_2_267_fu_98951_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_267_fu_98951_p2.read()[0].to_bool())? result_222_1_2_fu_98968_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_222_1_fu_98933_p3() {
    result_2_i_222_1_fu_98933_p3 = (!brmerge_demorgan_i_2_265_reg_129024.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_265_reg_129024.read()[0].to_bool())? result_222_1_reg_129030.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_222_2_0_s_fu_99010_p3() {
    result_2_i_222_2_0_s_fu_99010_p3 = (!brmerge_demorgan_i_2_269_fu_99005_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_269_fu_99005_p2.read()[0].to_bool())? result_2_i_222_2_fu_98997_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_222_2_2_fu_99145_p3() {
    result_2_i_222_2_2_fu_99145_p3 = (!brmerge_demorgan_i_2_270_fu_99141_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_270_fu_99141_p2.read()[0].to_bool())? result_222_2_2_reg_129066.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_222_2_fu_98997_p3() {
    result_2_i_222_2_fu_98997_p3 = (!brmerge_demorgan_i_2_268_fu_98982_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_268_fu_98982_p2.read()[0].to_bool())? result_222_2_fu_98991_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_222_fu_99038_p3() {
    result_2_i_222_fu_99038_p3 = (!tmp_13_221_0_2_reg_125659.read()[0].is_01())? sc_lv<9>(): ((tmp_13_221_0_2_reg_125659.read()[0].to_bool())? tmp_17_222_fu_99032_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_223_0_0_s_fu_99049_p3() {
    result_2_i_223_0_0_s_fu_99049_p3 = (!brmerge_demorgan_i_2_271_fu_99045_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_271_fu_99045_p2.read()[0].to_bool())? result_2_i_222_fu_99038_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_223_0_2_c_fu_99080_p1() {
    result_2_i_223_0_2_c_fu_99080_p1 = esl_sext<11,9>(result_2_i_223_0_2_fu_99072_p3.read());
}

void conv_3x3_strm::thread_result_2_i_223_0_2_fu_99072_p3() {
    result_2_i_223_0_2_fu_99072_p3 = (!brmerge_demorgan_i_2_272_fu_99057_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_272_fu_99057_p2.read()[0].to_bool())? result_223_0_2_fu_99066_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_223_1_0_s_fu_99226_p3() {
    result_2_i_223_1_0_s_fu_99226_p3 = (!brmerge_demorgan_i_2_274_fu_99222_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_274_fu_99222_p2.read()[0].to_bool())? result_2_i_223_1_fu_99216_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_223_1_2_fu_99257_p3() {
    result_2_i_223_1_2_fu_99257_p3 = (!brmerge_demorgan_i_2_275_fu_99234_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_275_fu_99234_p2.read()[0].to_bool())? result_223_1_2_fu_99251_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_223_1_fu_99216_p3() {
    result_2_i_223_1_fu_99216_p3 = (!brmerge_demorgan_i_2_273_reg_129071.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_273_reg_129071.read()[0].to_bool())? result_223_1_reg_129077.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_223_2_0_s_fu_99293_p3() {
    result_2_i_223_2_0_s_fu_99293_p3 = (!brmerge_demorgan_i_2_277_fu_99288_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_277_fu_99288_p2.read()[0].to_bool())? result_2_i_223_2_fu_99280_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_223_2_2_fu_99428_p3() {
    result_2_i_223_2_2_fu_99428_p3 = (!brmerge_demorgan_i_2_278_fu_99424_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_278_fu_99424_p2.read()[0].to_bool())? result_223_2_2_reg_129113.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_223_2_fu_99280_p3() {
    result_2_i_223_2_fu_99280_p3 = (!brmerge_demorgan_i_2_276_fu_99265_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_276_fu_99265_p2.read()[0].to_bool())? result_223_2_fu_99274_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_223_fu_99321_p3() {
    result_2_i_223_fu_99321_p3 = (!tmp_13_222_0_2_reg_125674.read()[0].is_01())? sc_lv<9>(): ((tmp_13_222_0_2_reg_125674.read()[0].to_bool())? tmp_17_223_fu_99315_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_224_0_0_s_fu_99332_p3() {
    result_2_i_224_0_0_s_fu_99332_p3 = (!brmerge_demorgan_i_2_279_fu_99328_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_279_fu_99328_p2.read()[0].to_bool())? result_2_i_223_fu_99321_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_224_0_2_c_fu_99363_p1() {
    result_2_i_224_0_2_c_fu_99363_p1 = esl_sext<11,9>(result_2_i_224_0_2_fu_99355_p3.read());
}

void conv_3x3_strm::thread_result_2_i_224_0_2_fu_99355_p3() {
    result_2_i_224_0_2_fu_99355_p3 = (!brmerge_demorgan_i_2_280_fu_99340_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_280_fu_99340_p2.read()[0].to_bool())? result_224_0_2_fu_99349_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_224_1_0_s_fu_99509_p3() {
    result_2_i_224_1_0_s_fu_99509_p3 = (!brmerge_demorgan_i_2_282_fu_99505_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_282_fu_99505_p2.read()[0].to_bool())? result_2_i_224_1_fu_99499_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_224_1_2_fu_99540_p3() {
    result_2_i_224_1_2_fu_99540_p3 = (!brmerge_demorgan_i_2_283_fu_99517_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_283_fu_99517_p2.read()[0].to_bool())? result_224_1_2_fu_99534_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_224_1_fu_99499_p3() {
    result_2_i_224_1_fu_99499_p3 = (!brmerge_demorgan_i_2_281_reg_129118.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_281_reg_129118.read()[0].to_bool())? result_224_1_reg_129124.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_224_2_0_s_fu_99576_p3() {
    result_2_i_224_2_0_s_fu_99576_p3 = (!brmerge_demorgan_i_2_285_fu_99571_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_285_fu_99571_p2.read()[0].to_bool())? result_2_i_224_2_fu_99563_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_224_2_2_fu_99711_p3() {
    result_2_i_224_2_2_fu_99711_p3 = (!brmerge_demorgan_i_2_286_fu_99707_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_286_fu_99707_p2.read()[0].to_bool())? result_224_2_2_reg_129160.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_224_2_fu_99563_p3() {
    result_2_i_224_2_fu_99563_p3 = (!brmerge_demorgan_i_2_284_fu_99548_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_284_fu_99548_p2.read()[0].to_bool())? result_224_2_fu_99557_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_224_fu_99604_p3() {
    result_2_i_224_fu_99604_p3 = (!tmp_13_223_0_2_reg_125750.read()[0].is_01())? sc_lv<9>(): ((tmp_13_223_0_2_reg_125750.read()[0].to_bool())? tmp_17_224_fu_99598_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_225_0_0_s_fu_99615_p3() {
    result_2_i_225_0_0_s_fu_99615_p3 = (!brmerge_demorgan_i_2_287_fu_99611_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_287_fu_99611_p2.read()[0].to_bool())? result_2_i_224_fu_99604_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_225_0_2_c_fu_99646_p1() {
    result_2_i_225_0_2_c_fu_99646_p1 = esl_sext<11,9>(result_2_i_225_0_2_fu_99638_p3.read());
}

void conv_3x3_strm::thread_result_2_i_225_0_2_fu_99638_p3() {
    result_2_i_225_0_2_fu_99638_p3 = (!brmerge_demorgan_i_2_288_fu_99623_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_288_fu_99623_p2.read()[0].to_bool())? result_225_0_2_fu_99632_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_225_1_0_s_fu_99792_p3() {
    result_2_i_225_1_0_s_fu_99792_p3 = (!brmerge_demorgan_i_2_290_fu_99788_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_290_fu_99788_p2.read()[0].to_bool())? result_2_i_225_1_fu_99782_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_225_1_2_fu_99823_p3() {
    result_2_i_225_1_2_fu_99823_p3 = (!brmerge_demorgan_i_2_291_fu_99800_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_291_fu_99800_p2.read()[0].to_bool())? result_225_1_2_fu_99817_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_225_1_fu_99782_p3() {
    result_2_i_225_1_fu_99782_p3 = (!brmerge_demorgan_i_2_289_reg_129165.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_289_reg_129165.read()[0].to_bool())? result_225_1_reg_129171.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_225_2_0_s_fu_99859_p3() {
    result_2_i_225_2_0_s_fu_99859_p3 = (!brmerge_demorgan_i_2_293_fu_99854_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_293_fu_99854_p2.read()[0].to_bool())? result_2_i_225_2_fu_99846_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_225_2_2_fu_99994_p3() {
    result_2_i_225_2_2_fu_99994_p3 = (!brmerge_demorgan_i_2_294_fu_99990_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_294_fu_99990_p2.read()[0].to_bool())? result_225_2_2_reg_129207.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_225_2_fu_99846_p3() {
    result_2_i_225_2_fu_99846_p3 = (!brmerge_demorgan_i_2_292_fu_99831_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_292_fu_99831_p2.read()[0].to_bool())? result_225_2_fu_99840_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_225_fu_99887_p3() {
    result_2_i_225_fu_99887_p3 = (!tmp_13_224_0_2_reg_125819.read()[0].is_01())? sc_lv<9>(): ((tmp_13_224_0_2_reg_125819.read()[0].to_bool())? tmp_17_225_fu_99881_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_226_0_0_s_fu_99898_p3() {
    result_2_i_226_0_0_s_fu_99898_p3 = (!brmerge_demorgan_i_2_295_fu_99894_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_295_fu_99894_p2.read()[0].to_bool())? result_2_i_225_fu_99887_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_226_0_2_c_fu_99929_p1() {
    result_2_i_226_0_2_c_fu_99929_p1 = esl_sext<11,9>(result_2_i_226_0_2_fu_99921_p3.read());
}

void conv_3x3_strm::thread_result_2_i_226_0_2_fu_99921_p3() {
    result_2_i_226_0_2_fu_99921_p3 = (!brmerge_demorgan_i_2_296_fu_99906_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_296_fu_99906_p2.read()[0].to_bool())? result_226_0_2_fu_99915_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_226_1_0_s_fu_100075_p3() {
    result_2_i_226_1_0_s_fu_100075_p3 = (!brmerge_demorgan_i_2_298_fu_100071_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_298_fu_100071_p2.read()[0].to_bool())? result_2_i_226_1_fu_100065_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_226_1_2_fu_100106_p3() {
    result_2_i_226_1_2_fu_100106_p3 = (!brmerge_demorgan_i_2_299_fu_100083_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_299_fu_100083_p2.read()[0].to_bool())? result_226_1_2_fu_100100_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_226_1_fu_100065_p3() {
    result_2_i_226_1_fu_100065_p3 = (!brmerge_demorgan_i_2_297_reg_129212.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_297_reg_129212.read()[0].to_bool())? result_226_1_reg_129218.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_226_2_0_s_fu_100142_p3() {
    result_2_i_226_2_0_s_fu_100142_p3 = (!brmerge_demorgan_i_2_301_fu_100137_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_301_fu_100137_p2.read()[0].to_bool())? result_2_i_226_2_fu_100129_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_226_2_2_fu_100277_p3() {
    result_2_i_226_2_2_fu_100277_p3 = (!brmerge_demorgan_i_2_302_fu_100273_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_302_fu_100273_p2.read()[0].to_bool())? result_226_2_2_reg_129254.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_226_2_fu_100129_p3() {
    result_2_i_226_2_fu_100129_p3 = (!brmerge_demorgan_i_2_300_fu_100114_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_300_fu_100114_p2.read()[0].to_bool())? result_226_2_fu_100123_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_226_fu_100170_p3() {
    result_2_i_226_fu_100170_p3 = (!tmp_13_225_0_2_reg_125888.read()[0].is_01())? sc_lv<9>(): ((tmp_13_225_0_2_reg_125888.read()[0].to_bool())? tmp_17_226_fu_100164_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_227_0_0_s_fu_100181_p3() {
    result_2_i_227_0_0_s_fu_100181_p3 = (!brmerge_demorgan_i_2_303_fu_100177_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_303_fu_100177_p2.read()[0].to_bool())? result_2_i_226_fu_100170_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_227_0_2_c_fu_100212_p1() {
    result_2_i_227_0_2_c_fu_100212_p1 = esl_sext<11,9>(result_2_i_227_0_2_fu_100204_p3.read());
}

void conv_3x3_strm::thread_result_2_i_227_0_2_fu_100204_p3() {
    result_2_i_227_0_2_fu_100204_p3 = (!brmerge_demorgan_i_2_304_fu_100189_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_304_fu_100189_p2.read()[0].to_bool())? result_227_0_2_fu_100198_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_227_1_0_s_fu_100358_p3() {
    result_2_i_227_1_0_s_fu_100358_p3 = (!brmerge_demorgan_i_2_306_fu_100354_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_306_fu_100354_p2.read()[0].to_bool())? result_2_i_227_1_fu_100348_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_227_1_2_fu_100389_p3() {
    result_2_i_227_1_2_fu_100389_p3 = (!brmerge_demorgan_i_2_307_fu_100366_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_307_fu_100366_p2.read()[0].to_bool())? result_227_1_2_fu_100383_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_227_1_fu_100348_p3() {
    result_2_i_227_1_fu_100348_p3 = (!brmerge_demorgan_i_2_305_reg_129259.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_305_reg_129259.read()[0].to_bool())? result_227_1_reg_129265.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_227_2_0_s_fu_100425_p3() {
    result_2_i_227_2_0_s_fu_100425_p3 = (!brmerge_demorgan_i_2_309_fu_100420_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_309_fu_100420_p2.read()[0].to_bool())? result_2_i_227_2_fu_100412_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_227_2_2_fu_100560_p3() {
    result_2_i_227_2_2_fu_100560_p3 = (!brmerge_demorgan_i_2_310_fu_100556_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_310_fu_100556_p2.read()[0].to_bool())? result_227_2_2_reg_129301.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_227_2_fu_100412_p3() {
    result_2_i_227_2_fu_100412_p3 = (!brmerge_demorgan_i_2_308_fu_100397_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_308_fu_100397_p2.read()[0].to_bool())? result_227_2_fu_100406_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_227_fu_100453_p3() {
    result_2_i_227_fu_100453_p3 = (!tmp_13_226_0_2_reg_125903.read()[0].is_01())? sc_lv<9>(): ((tmp_13_226_0_2_reg_125903.read()[0].to_bool())? tmp_17_227_fu_100447_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_228_0_0_s_fu_100464_p3() {
    result_2_i_228_0_0_s_fu_100464_p3 = (!brmerge_demorgan_i_2_311_fu_100460_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_311_fu_100460_p2.read()[0].to_bool())? result_2_i_227_fu_100453_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_228_0_2_c_fu_100495_p1() {
    result_2_i_228_0_2_c_fu_100495_p1 = esl_sext<11,9>(result_2_i_228_0_2_fu_100487_p3.read());
}

void conv_3x3_strm::thread_result_2_i_228_0_2_fu_100487_p3() {
    result_2_i_228_0_2_fu_100487_p3 = (!brmerge_demorgan_i_2_312_fu_100472_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_312_fu_100472_p2.read()[0].to_bool())? result_228_0_2_fu_100481_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_228_1_0_s_fu_100641_p3() {
    result_2_i_228_1_0_s_fu_100641_p3 = (!brmerge_demorgan_i_2_314_fu_100637_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_314_fu_100637_p2.read()[0].to_bool())? result_2_i_228_1_fu_100631_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_228_1_2_fu_100672_p3() {
    result_2_i_228_1_2_fu_100672_p3 = (!brmerge_demorgan_i_2_315_fu_100649_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_315_fu_100649_p2.read()[0].to_bool())? result_228_1_2_fu_100666_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_228_1_fu_100631_p3() {
    result_2_i_228_1_fu_100631_p3 = (!brmerge_demorgan_i_2_313_reg_129306.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_313_reg_129306.read()[0].to_bool())? result_228_1_reg_129312.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_228_2_0_s_fu_100708_p3() {
    result_2_i_228_2_0_s_fu_100708_p3 = (!brmerge_demorgan_i_2_317_fu_100703_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_317_fu_100703_p2.read()[0].to_bool())? result_2_i_228_2_fu_100695_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_228_2_2_fu_100843_p3() {
    result_2_i_228_2_2_fu_100843_p3 = (!brmerge_demorgan_i_2_318_fu_100839_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_318_fu_100839_p2.read()[0].to_bool())? result_228_2_2_reg_129348.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_228_2_fu_100695_p3() {
    result_2_i_228_2_fu_100695_p3 = (!brmerge_demorgan_i_2_316_fu_100680_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_316_fu_100680_p2.read()[0].to_bool())? result_228_2_fu_100689_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_228_fu_100736_p3() {
    result_2_i_228_fu_100736_p3 = (!tmp_13_227_0_2_reg_125979.read()[0].is_01())? sc_lv<9>(): ((tmp_13_227_0_2_reg_125979.read()[0].to_bool())? tmp_17_228_fu_100730_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_229_0_0_s_fu_100747_p3() {
    result_2_i_229_0_0_s_fu_100747_p3 = (!brmerge_demorgan_i_2_319_fu_100743_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_319_fu_100743_p2.read()[0].to_bool())? result_2_i_228_fu_100736_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_229_0_2_c_fu_100778_p1() {
    result_2_i_229_0_2_c_fu_100778_p1 = esl_sext<11,9>(result_2_i_229_0_2_fu_100770_p3.read());
}

void conv_3x3_strm::thread_result_2_i_229_0_2_fu_100770_p3() {
    result_2_i_229_0_2_fu_100770_p3 = (!brmerge_demorgan_i_2_320_fu_100755_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_320_fu_100755_p2.read()[0].to_bool())? result_229_0_2_fu_100764_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_229_1_0_s_fu_100924_p3() {
    result_2_i_229_1_0_s_fu_100924_p3 = (!brmerge_demorgan_i_2_322_fu_100920_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_322_fu_100920_p2.read()[0].to_bool())? result_2_i_229_1_fu_100914_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_229_1_2_fu_100955_p3() {
    result_2_i_229_1_2_fu_100955_p3 = (!brmerge_demorgan_i_2_323_fu_100932_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_323_fu_100932_p2.read()[0].to_bool())? result_229_1_2_fu_100949_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_229_1_fu_100914_p3() {
    result_2_i_229_1_fu_100914_p3 = (!brmerge_demorgan_i_2_321_reg_129353.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_321_reg_129353.read()[0].to_bool())? result_229_1_reg_129359.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_229_2_0_s_fu_100991_p3() {
    result_2_i_229_2_0_s_fu_100991_p3 = (!brmerge_demorgan_i_2_325_fu_100986_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_325_fu_100986_p2.read()[0].to_bool())? result_2_i_229_2_fu_100978_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_229_2_2_fu_101126_p3() {
    result_2_i_229_2_2_fu_101126_p3 = (!brmerge_demorgan_i_2_326_fu_101122_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_326_fu_101122_p2.read()[0].to_bool())? result_229_2_2_reg_129395.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_229_2_fu_100978_p3() {
    result_2_i_229_2_fu_100978_p3 = (!brmerge_demorgan_i_2_324_fu_100963_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_324_fu_100963_p2.read()[0].to_bool())? result_229_2_fu_100972_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_229_fu_101019_p3() {
    result_2_i_229_fu_101019_p3 = (!tmp_13_228_0_2_reg_126048.read()[0].is_01())? sc_lv<9>(): ((tmp_13_228_0_2_reg_126048.read()[0].to_bool())? tmp_17_229_fu_101013_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_22_0_0_s_fu_42166_p3() {
    result_2_i_22_0_0_s_fu_42166_p3 = (!brmerge_demorgan_i_2_23_fu_42162_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_23_fu_42162_p2.read()[0].to_bool())? result_2_i_21_fu_42155_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_22_0_2_ca_fu_42197_p1() {
    result_2_i_22_0_2_ca_fu_42197_p1 = esl_sext<11,9>(result_2_i_22_0_2_fu_42189_p3.read());
}

void conv_3x3_strm::thread_result_2_i_22_0_2_fu_42189_p3() {
    result_2_i_22_0_2_fu_42189_p3 = (!brmerge_demorgan_i_2_24_fu_42174_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_24_fu_42174_p2.read()[0].to_bool())? result_22_0_2_fu_42183_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_22_1_0_s_fu_42343_p3() {
    result_2_i_22_1_0_s_fu_42343_p3 = (!brmerge_demorgan_i_2_26_fu_42339_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_26_fu_42339_p2.read()[0].to_bool())? result_2_i_22_1_fu_42333_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_22_1_2_fu_42374_p3() {
    result_2_i_22_1_2_fu_42374_p3 = (!brmerge_demorgan_i_2_27_fu_42351_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_27_fu_42351_p2.read()[0].to_bool())? result_22_1_2_fu_42368_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_22_1_fu_42333_p3() {
    result_2_i_22_1_fu_42333_p3 = (!brmerge_demorgan_i_2_25_reg_113037.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_25_reg_113037.read()[0].to_bool())? result_22_1_reg_113043.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_22_2_0_s_fu_42410_p3() {
    result_2_i_22_2_0_s_fu_42410_p3 = (!brmerge_demorgan_i_2_29_fu_42405_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_29_fu_42405_p2.read()[0].to_bool())? result_2_i_22_2_fu_42397_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_22_2_2_fu_42545_p3() {
    result_2_i_22_2_2_fu_42545_p3 = (!brmerge_demorgan_i_2_30_fu_42541_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_30_fu_42541_p2.read()[0].to_bool())? result_22_2_2_reg_113121.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_22_2_fu_42397_p3() {
    result_2_i_22_2_fu_42397_p3 = (!brmerge_demorgan_i_2_28_fu_42382_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_28_fu_42382_p2.read()[0].to_bool())? result_22_2_fu_42391_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_22_fu_42438_p3() {
    result_2_i_22_fu_42438_p3 = (!tmp_13_21_0_2_reg_112540.read()[0].is_01())? sc_lv<9>(): ((tmp_13_21_0_2_reg_112540.read()[0].to_bool())? tmp_17_22_fu_42432_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_230_0_0_s_fu_101030_p3() {
    result_2_i_230_0_0_s_fu_101030_p3 = (!brmerge_demorgan_i_2_327_fu_101026_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_327_fu_101026_p2.read()[0].to_bool())? result_2_i_229_fu_101019_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_230_0_2_c_fu_101061_p1() {
    result_2_i_230_0_2_c_fu_101061_p1 = esl_sext<11,9>(result_2_i_230_0_2_fu_101053_p3.read());
}

void conv_3x3_strm::thread_result_2_i_230_0_2_fu_101053_p3() {
    result_2_i_230_0_2_fu_101053_p3 = (!brmerge_demorgan_i_2_328_fu_101038_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_328_fu_101038_p2.read()[0].to_bool())? result_230_0_2_fu_101047_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_230_1_0_s_fu_101207_p3() {
    result_2_i_230_1_0_s_fu_101207_p3 = (!brmerge_demorgan_i_2_330_fu_101203_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_330_fu_101203_p2.read()[0].to_bool())? result_2_i_230_1_fu_101197_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_230_1_2_fu_101238_p3() {
    result_2_i_230_1_2_fu_101238_p3 = (!brmerge_demorgan_i_2_331_fu_101215_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_331_fu_101215_p2.read()[0].to_bool())? result_230_1_2_fu_101232_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_230_1_fu_101197_p3() {
    result_2_i_230_1_fu_101197_p3 = (!brmerge_demorgan_i_2_329_reg_129400.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_329_reg_129400.read()[0].to_bool())? result_230_1_reg_129406.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_230_2_0_s_fu_101274_p3() {
    result_2_i_230_2_0_s_fu_101274_p3 = (!brmerge_demorgan_i_2_333_fu_101269_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_333_fu_101269_p2.read()[0].to_bool())? result_2_i_230_2_fu_101261_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_230_2_2_fu_101409_p3() {
    result_2_i_230_2_2_fu_101409_p3 = (!brmerge_demorgan_i_2_334_fu_101405_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_334_fu_101405_p2.read()[0].to_bool())? result_230_2_2_reg_129442.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_230_2_fu_101261_p3() {
    result_2_i_230_2_fu_101261_p3 = (!brmerge_demorgan_i_2_332_fu_101246_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_332_fu_101246_p2.read()[0].to_bool())? result_230_2_fu_101255_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_230_fu_101302_p3() {
    result_2_i_230_fu_101302_p3 = (!tmp_13_229_0_2_reg_126117.read()[0].is_01())? sc_lv<9>(): ((tmp_13_229_0_2_reg_126117.read()[0].to_bool())? tmp_17_230_fu_101296_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_231_0_0_s_fu_101313_p3() {
    result_2_i_231_0_0_s_fu_101313_p3 = (!brmerge_demorgan_i_2_335_fu_101309_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_335_fu_101309_p2.read()[0].to_bool())? result_2_i_230_fu_101302_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_231_0_2_c_fu_101344_p1() {
    result_2_i_231_0_2_c_fu_101344_p1 = esl_sext<11,9>(result_2_i_231_0_2_fu_101336_p3.read());
}

void conv_3x3_strm::thread_result_2_i_231_0_2_fu_101336_p3() {
    result_2_i_231_0_2_fu_101336_p3 = (!brmerge_demorgan_i_2_336_fu_101321_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_336_fu_101321_p2.read()[0].to_bool())? result_231_0_2_fu_101330_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_231_1_0_s_fu_101490_p3() {
    result_2_i_231_1_0_s_fu_101490_p3 = (!brmerge_demorgan_i_2_338_fu_101486_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_338_fu_101486_p2.read()[0].to_bool())? result_2_i_231_1_fu_101480_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_231_1_2_fu_101521_p3() {
    result_2_i_231_1_2_fu_101521_p3 = (!brmerge_demorgan_i_2_339_fu_101498_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_339_fu_101498_p2.read()[0].to_bool())? result_231_1_2_fu_101515_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_231_1_fu_101480_p3() {
    result_2_i_231_1_fu_101480_p3 = (!brmerge_demorgan_i_2_337_reg_129447.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_337_reg_129447.read()[0].to_bool())? result_231_1_reg_129453.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_231_2_0_s_fu_101557_p3() {
    result_2_i_231_2_0_s_fu_101557_p3 = (!brmerge_demorgan_i_2_341_fu_101552_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_341_fu_101552_p2.read()[0].to_bool())? result_2_i_231_2_fu_101544_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_231_2_2_fu_101692_p3() {
    result_2_i_231_2_2_fu_101692_p3 = (!brmerge_demorgan_i_2_342_fu_101688_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_342_fu_101688_p2.read()[0].to_bool())? result_231_2_2_reg_129489.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_231_2_fu_101544_p3() {
    result_2_i_231_2_fu_101544_p3 = (!brmerge_demorgan_i_2_340_fu_101529_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_340_fu_101529_p2.read()[0].to_bool())? result_231_2_fu_101538_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_231_fu_101585_p3() {
    result_2_i_231_fu_101585_p3 = (!tmp_13_230_0_2_reg_126132.read()[0].is_01())? sc_lv<9>(): ((tmp_13_230_0_2_reg_126132.read()[0].to_bool())? tmp_17_231_fu_101579_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_232_0_0_s_fu_101596_p3() {
    result_2_i_232_0_0_s_fu_101596_p3 = (!brmerge_demorgan_i_2_343_fu_101592_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_343_fu_101592_p2.read()[0].to_bool())? result_2_i_231_fu_101585_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_232_0_2_c_fu_101627_p1() {
    result_2_i_232_0_2_c_fu_101627_p1 = esl_sext<11,9>(result_2_i_232_0_2_fu_101619_p3.read());
}

void conv_3x3_strm::thread_result_2_i_232_0_2_fu_101619_p3() {
    result_2_i_232_0_2_fu_101619_p3 = (!brmerge_demorgan_i_2_344_fu_101604_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_344_fu_101604_p2.read()[0].to_bool())? result_232_0_2_fu_101613_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_232_1_0_s_fu_101773_p3() {
    result_2_i_232_1_0_s_fu_101773_p3 = (!brmerge_demorgan_i_2_346_fu_101769_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_346_fu_101769_p2.read()[0].to_bool())? result_2_i_232_1_fu_101763_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_232_1_2_fu_101804_p3() {
    result_2_i_232_1_2_fu_101804_p3 = (!brmerge_demorgan_i_2_347_fu_101781_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_347_fu_101781_p2.read()[0].to_bool())? result_232_1_2_fu_101798_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_232_1_fu_101763_p3() {
    result_2_i_232_1_fu_101763_p3 = (!brmerge_demorgan_i_2_345_reg_129494.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_345_reg_129494.read()[0].to_bool())? result_232_1_reg_129500.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_232_2_0_s_fu_101840_p3() {
    result_2_i_232_2_0_s_fu_101840_p3 = (!brmerge_demorgan_i_2_349_fu_101835_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_349_fu_101835_p2.read()[0].to_bool())? result_2_i_232_2_fu_101827_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_232_2_2_fu_101975_p3() {
    result_2_i_232_2_2_fu_101975_p3 = (!brmerge_demorgan_i_2_350_fu_101971_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_350_fu_101971_p2.read()[0].to_bool())? result_232_2_2_reg_129536.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_232_2_fu_101827_p3() {
    result_2_i_232_2_fu_101827_p3 = (!brmerge_demorgan_i_2_348_fu_101812_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_348_fu_101812_p2.read()[0].to_bool())? result_232_2_fu_101821_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_232_fu_101868_p3() {
    result_2_i_232_fu_101868_p3 = (!tmp_13_231_0_2_reg_126208.read()[0].is_01())? sc_lv<9>(): ((tmp_13_231_0_2_reg_126208.read()[0].to_bool())? tmp_17_232_fu_101862_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_233_0_0_s_fu_101879_p3() {
    result_2_i_233_0_0_s_fu_101879_p3 = (!brmerge_demorgan_i_2_351_fu_101875_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_351_fu_101875_p2.read()[0].to_bool())? result_2_i_232_fu_101868_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_233_0_2_c_fu_101910_p1() {
    result_2_i_233_0_2_c_fu_101910_p1 = esl_sext<11,9>(result_2_i_233_0_2_fu_101902_p3.read());
}

void conv_3x3_strm::thread_result_2_i_233_0_2_fu_101902_p3() {
    result_2_i_233_0_2_fu_101902_p3 = (!brmerge_demorgan_i_2_352_fu_101887_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_352_fu_101887_p2.read()[0].to_bool())? result_233_0_2_fu_101896_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_233_1_0_s_fu_102056_p3() {
    result_2_i_233_1_0_s_fu_102056_p3 = (!brmerge_demorgan_i_2_354_fu_102052_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_354_fu_102052_p2.read()[0].to_bool())? result_2_i_233_1_fu_102046_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_233_1_2_fu_102087_p3() {
    result_2_i_233_1_2_fu_102087_p3 = (!brmerge_demorgan_i_2_355_fu_102064_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_355_fu_102064_p2.read()[0].to_bool())? result_233_1_2_fu_102081_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_233_1_fu_102046_p3() {
    result_2_i_233_1_fu_102046_p3 = (!brmerge_demorgan_i_2_353_reg_129541.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_353_reg_129541.read()[0].to_bool())? result_233_1_reg_129547.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_233_2_0_s_fu_102123_p3() {
    result_2_i_233_2_0_s_fu_102123_p3 = (!brmerge_demorgan_i_2_357_fu_102118_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_357_fu_102118_p2.read()[0].to_bool())? result_2_i_233_2_fu_102110_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_233_2_2_fu_102258_p3() {
    result_2_i_233_2_2_fu_102258_p3 = (!brmerge_demorgan_i_2_358_fu_102254_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_358_fu_102254_p2.read()[0].to_bool())? result_233_2_2_reg_129583.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_233_2_fu_102110_p3() {
    result_2_i_233_2_fu_102110_p3 = (!brmerge_demorgan_i_2_356_fu_102095_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_356_fu_102095_p2.read()[0].to_bool())? result_233_2_fu_102104_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_233_fu_102151_p3() {
    result_2_i_233_fu_102151_p3 = (!tmp_13_232_0_2_reg_126277.read()[0].is_01())? sc_lv<9>(): ((tmp_13_232_0_2_reg_126277.read()[0].to_bool())? tmp_17_233_fu_102145_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_234_0_0_s_fu_102162_p3() {
    result_2_i_234_0_0_s_fu_102162_p3 = (!brmerge_demorgan_i_2_359_fu_102158_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_359_fu_102158_p2.read()[0].to_bool())? result_2_i_233_fu_102151_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_234_0_2_c_fu_102193_p1() {
    result_2_i_234_0_2_c_fu_102193_p1 = esl_sext<11,9>(result_2_i_234_0_2_fu_102185_p3.read());
}

void conv_3x3_strm::thread_result_2_i_234_0_2_fu_102185_p3() {
    result_2_i_234_0_2_fu_102185_p3 = (!brmerge_demorgan_i_2_360_fu_102170_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_360_fu_102170_p2.read()[0].to_bool())? result_234_0_2_fu_102179_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_234_1_0_s_fu_102339_p3() {
    result_2_i_234_1_0_s_fu_102339_p3 = (!brmerge_demorgan_i_2_362_fu_102335_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_362_fu_102335_p2.read()[0].to_bool())? result_2_i_234_1_fu_102329_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_234_1_2_fu_102370_p3() {
    result_2_i_234_1_2_fu_102370_p3 = (!brmerge_demorgan_i_2_363_fu_102347_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_363_fu_102347_p2.read()[0].to_bool())? result_234_1_2_fu_102364_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_234_1_fu_102329_p3() {
    result_2_i_234_1_fu_102329_p3 = (!brmerge_demorgan_i_2_361_reg_129588.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_361_reg_129588.read()[0].to_bool())? result_234_1_reg_129594.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_234_2_0_s_fu_102406_p3() {
    result_2_i_234_2_0_s_fu_102406_p3 = (!brmerge_demorgan_i_2_365_fu_102401_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_365_fu_102401_p2.read()[0].to_bool())? result_2_i_234_2_fu_102393_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_234_2_2_fu_102541_p3() {
    result_2_i_234_2_2_fu_102541_p3 = (!brmerge_demorgan_i_2_366_fu_102537_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_366_fu_102537_p2.read()[0].to_bool())? result_234_2_2_reg_129630.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_234_2_fu_102393_p3() {
    result_2_i_234_2_fu_102393_p3 = (!brmerge_demorgan_i_2_364_fu_102378_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_364_fu_102378_p2.read()[0].to_bool())? result_234_2_fu_102387_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_234_fu_102434_p3() {
    result_2_i_234_fu_102434_p3 = (!tmp_13_233_0_2_reg_126346.read()[0].is_01())? sc_lv<9>(): ((tmp_13_233_0_2_reg_126346.read()[0].to_bool())? tmp_17_234_fu_102428_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_235_0_0_s_fu_102445_p3() {
    result_2_i_235_0_0_s_fu_102445_p3 = (!brmerge_demorgan_i_2_367_fu_102441_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_367_fu_102441_p2.read()[0].to_bool())? result_2_i_234_fu_102434_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_235_0_2_c_fu_102476_p1() {
    result_2_i_235_0_2_c_fu_102476_p1 = esl_sext<11,9>(result_2_i_235_0_2_fu_102468_p3.read());
}

void conv_3x3_strm::thread_result_2_i_235_0_2_fu_102468_p3() {
    result_2_i_235_0_2_fu_102468_p3 = (!brmerge_demorgan_i_2_368_fu_102453_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_368_fu_102453_p2.read()[0].to_bool())? result_235_0_2_fu_102462_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_235_1_0_s_fu_102622_p3() {
    result_2_i_235_1_0_s_fu_102622_p3 = (!brmerge_demorgan_i_2_370_fu_102618_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_370_fu_102618_p2.read()[0].to_bool())? result_2_i_235_1_fu_102612_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_235_1_2_fu_102653_p3() {
    result_2_i_235_1_2_fu_102653_p3 = (!brmerge_demorgan_i_2_371_fu_102630_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_371_fu_102630_p2.read()[0].to_bool())? result_235_1_2_fu_102647_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_235_1_fu_102612_p3() {
    result_2_i_235_1_fu_102612_p3 = (!brmerge_demorgan_i_2_369_reg_129635.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_369_reg_129635.read()[0].to_bool())? result_235_1_reg_129641.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_235_2_0_s_fu_102689_p3() {
    result_2_i_235_2_0_s_fu_102689_p3 = (!brmerge_demorgan_i_2_373_fu_102684_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_373_fu_102684_p2.read()[0].to_bool())? result_2_i_235_2_fu_102676_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_235_2_2_fu_102824_p3() {
    result_2_i_235_2_2_fu_102824_p3 = (!brmerge_demorgan_i_2_374_fu_102820_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_374_fu_102820_p2.read()[0].to_bool())? result_235_2_2_reg_129677.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_235_2_fu_102676_p3() {
    result_2_i_235_2_fu_102676_p3 = (!brmerge_demorgan_i_2_372_fu_102661_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_372_fu_102661_p2.read()[0].to_bool())? result_235_2_fu_102670_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_235_fu_102717_p3() {
    result_2_i_235_fu_102717_p3 = (!tmp_13_234_0_2_reg_126361.read()[0].is_01())? sc_lv<9>(): ((tmp_13_234_0_2_reg_126361.read()[0].to_bool())? tmp_17_235_fu_102711_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_236_0_0_s_fu_102728_p3() {
    result_2_i_236_0_0_s_fu_102728_p3 = (!brmerge_demorgan_i_2_375_fu_102724_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_375_fu_102724_p2.read()[0].to_bool())? result_2_i_235_fu_102717_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_236_0_2_c_fu_102759_p1() {
    result_2_i_236_0_2_c_fu_102759_p1 = esl_sext<11,9>(result_2_i_236_0_2_fu_102751_p3.read());
}

void conv_3x3_strm::thread_result_2_i_236_0_2_fu_102751_p3() {
    result_2_i_236_0_2_fu_102751_p3 = (!brmerge_demorgan_i_2_376_fu_102736_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_376_fu_102736_p2.read()[0].to_bool())? result_236_0_2_fu_102745_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_236_1_0_s_fu_102905_p3() {
    result_2_i_236_1_0_s_fu_102905_p3 = (!brmerge_demorgan_i_2_378_fu_102901_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_378_fu_102901_p2.read()[0].to_bool())? result_2_i_236_1_fu_102895_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_236_1_2_fu_102936_p3() {
    result_2_i_236_1_2_fu_102936_p3 = (!brmerge_demorgan_i_2_379_fu_102913_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_379_fu_102913_p2.read()[0].to_bool())? result_236_1_2_fu_102930_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_236_1_fu_102895_p3() {
    result_2_i_236_1_fu_102895_p3 = (!brmerge_demorgan_i_2_377_reg_129682.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_377_reg_129682.read()[0].to_bool())? result_236_1_reg_129688.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_236_2_0_s_fu_102972_p3() {
    result_2_i_236_2_0_s_fu_102972_p3 = (!brmerge_demorgan_i_2_381_fu_102967_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_381_fu_102967_p2.read()[0].to_bool())? result_2_i_236_2_fu_102959_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_236_2_2_fu_103107_p3() {
    result_2_i_236_2_2_fu_103107_p3 = (!brmerge_demorgan_i_2_382_fu_103103_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_382_fu_103103_p2.read()[0].to_bool())? result_236_2_2_reg_129724.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_236_2_fu_102959_p3() {
    result_2_i_236_2_fu_102959_p3 = (!brmerge_demorgan_i_2_380_fu_102944_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_380_fu_102944_p2.read()[0].to_bool())? result_236_2_fu_102953_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_236_fu_103000_p3() {
    result_2_i_236_fu_103000_p3 = (!tmp_13_235_0_2_reg_126437.read()[0].is_01())? sc_lv<9>(): ((tmp_13_235_0_2_reg_126437.read()[0].to_bool())? tmp_17_236_fu_102994_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_237_0_0_s_fu_103011_p3() {
    result_2_i_237_0_0_s_fu_103011_p3 = (!brmerge_demorgan_i_2_383_fu_103007_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_383_fu_103007_p2.read()[0].to_bool())? result_2_i_236_fu_103000_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_237_0_2_c_fu_103042_p1() {
    result_2_i_237_0_2_c_fu_103042_p1 = esl_sext<11,9>(result_2_i_237_0_2_fu_103034_p3.read());
}

void conv_3x3_strm::thread_result_2_i_237_0_2_fu_103034_p3() {
    result_2_i_237_0_2_fu_103034_p3 = (!brmerge_demorgan_i_2_384_fu_103019_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_384_fu_103019_p2.read()[0].to_bool())? result_237_0_2_fu_103028_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_237_1_0_s_fu_103188_p3() {
    result_2_i_237_1_0_s_fu_103188_p3 = (!brmerge_demorgan_i_2_386_fu_103184_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_386_fu_103184_p2.read()[0].to_bool())? result_2_i_237_1_fu_103178_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_237_1_2_fu_103219_p3() {
    result_2_i_237_1_2_fu_103219_p3 = (!brmerge_demorgan_i_2_387_fu_103196_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_387_fu_103196_p2.read()[0].to_bool())? result_237_1_2_fu_103213_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_237_1_fu_103178_p3() {
    result_2_i_237_1_fu_103178_p3 = (!brmerge_demorgan_i_2_385_reg_129729.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_385_reg_129729.read()[0].to_bool())? result_237_1_reg_129735.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_237_2_0_s_fu_103255_p3() {
    result_2_i_237_2_0_s_fu_103255_p3 = (!brmerge_demorgan_i_2_389_fu_103250_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_389_fu_103250_p2.read()[0].to_bool())? result_2_i_237_2_fu_103242_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_237_2_2_fu_103390_p3() {
    result_2_i_237_2_2_fu_103390_p3 = (!brmerge_demorgan_i_2_390_fu_103386_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_390_fu_103386_p2.read()[0].to_bool())? result_237_2_2_reg_129771.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_237_2_fu_103242_p3() {
    result_2_i_237_2_fu_103242_p3 = (!brmerge_demorgan_i_2_388_fu_103227_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_388_fu_103227_p2.read()[0].to_bool())? result_237_2_fu_103236_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_237_fu_103283_p3() {
    result_2_i_237_fu_103283_p3 = (!tmp_13_236_0_2_reg_126506.read()[0].is_01())? sc_lv<9>(): ((tmp_13_236_0_2_reg_126506.read()[0].to_bool())? tmp_17_237_fu_103277_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_238_0_0_s_fu_103294_p3() {
    result_2_i_238_0_0_s_fu_103294_p3 = (!brmerge_demorgan_i_2_391_fu_103290_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_391_fu_103290_p2.read()[0].to_bool())? result_2_i_237_fu_103283_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_238_0_2_c_fu_103325_p1() {
    result_2_i_238_0_2_c_fu_103325_p1 = esl_sext<11,9>(result_2_i_238_0_2_fu_103317_p3.read());
}

void conv_3x3_strm::thread_result_2_i_238_0_2_fu_103317_p3() {
    result_2_i_238_0_2_fu_103317_p3 = (!brmerge_demorgan_i_2_392_fu_103302_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_392_fu_103302_p2.read()[0].to_bool())? result_238_0_2_fu_103311_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_238_1_0_s_fu_103471_p3() {
    result_2_i_238_1_0_s_fu_103471_p3 = (!brmerge_demorgan_i_2_394_fu_103467_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_394_fu_103467_p2.read()[0].to_bool())? result_2_i_238_1_fu_103461_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_238_1_2_fu_103502_p3() {
    result_2_i_238_1_2_fu_103502_p3 = (!brmerge_demorgan_i_2_395_fu_103479_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_395_fu_103479_p2.read()[0].to_bool())? result_238_1_2_fu_103496_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_238_1_fu_103461_p3() {
    result_2_i_238_1_fu_103461_p3 = (!brmerge_demorgan_i_2_393_reg_129776.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_393_reg_129776.read()[0].to_bool())? result_238_1_reg_129782.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_238_2_0_s_fu_103538_p3() {
    result_2_i_238_2_0_s_fu_103538_p3 = (!brmerge_demorgan_i_2_397_fu_103533_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_397_fu_103533_p2.read()[0].to_bool())? result_2_i_238_2_fu_103525_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_238_2_2_fu_103673_p3() {
    result_2_i_238_2_2_fu_103673_p3 = (!brmerge_demorgan_i_2_398_fu_103669_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_398_fu_103669_p2.read()[0].to_bool())? result_238_2_2_reg_129818.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_238_2_fu_103525_p3() {
    result_2_i_238_2_fu_103525_p3 = (!brmerge_demorgan_i_2_396_fu_103510_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_396_fu_103510_p2.read()[0].to_bool())? result_238_2_fu_103519_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_238_fu_103566_p3() {
    result_2_i_238_fu_103566_p3 = (!tmp_13_237_0_2_reg_126575.read()[0].is_01())? sc_lv<9>(): ((tmp_13_237_0_2_reg_126575.read()[0].to_bool())? tmp_17_238_fu_103560_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_239_0_0_s_fu_103577_p3() {
    result_2_i_239_0_0_s_fu_103577_p3 = (!brmerge_demorgan_i_2_399_fu_103573_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_399_fu_103573_p2.read()[0].to_bool())? result_2_i_238_fu_103566_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_239_0_2_c_fu_103608_p1() {
    result_2_i_239_0_2_c_fu_103608_p1 = esl_sext<11,9>(result_2_i_239_0_2_fu_103600_p3.read());
}

void conv_3x3_strm::thread_result_2_i_239_0_2_fu_103600_p3() {
    result_2_i_239_0_2_fu_103600_p3 = (!brmerge_demorgan_i_2_400_fu_103585_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_400_fu_103585_p2.read()[0].to_bool())? result_239_0_2_fu_103594_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_239_1_0_s_fu_103754_p3() {
    result_2_i_239_1_0_s_fu_103754_p3 = (!brmerge_demorgan_i_2_402_fu_103750_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_402_fu_103750_p2.read()[0].to_bool())? result_2_i_239_1_fu_103744_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_239_1_2_fu_103785_p3() {
    result_2_i_239_1_2_fu_103785_p3 = (!brmerge_demorgan_i_2_403_fu_103762_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_403_fu_103762_p2.read()[0].to_bool())? result_239_1_2_fu_103779_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_239_1_fu_103744_p3() {
    result_2_i_239_1_fu_103744_p3 = (!brmerge_demorgan_i_2_401_reg_129823.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_401_reg_129823.read()[0].to_bool())? result_239_1_reg_129829.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_239_2_0_s_fu_103821_p3() {
    result_2_i_239_2_0_s_fu_103821_p3 = (!brmerge_demorgan_i_2_405_fu_103816_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_405_fu_103816_p2.read()[0].to_bool())? result_2_i_239_2_fu_103808_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_239_2_2_fu_103956_p3() {
    result_2_i_239_2_2_fu_103956_p3 = (!brmerge_demorgan_i_2_406_fu_103952_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_406_fu_103952_p2.read()[0].to_bool())? result_239_2_2_reg_129865.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_239_2_fu_103808_p3() {
    result_2_i_239_2_fu_103808_p3 = (!brmerge_demorgan_i_2_404_fu_103793_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_404_fu_103793_p2.read()[0].to_bool())? result_239_2_fu_103802_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_239_fu_103849_p3() {
    result_2_i_239_fu_103849_p3 = (!tmp_13_238_0_2_reg_126590.read()[0].is_01())? sc_lv<9>(): ((tmp_13_238_0_2_reg_126590.read()[0].to_bool())? tmp_17_239_fu_103843_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_23_0_0_s_fu_42449_p3() {
    result_2_i_23_0_0_s_fu_42449_p3 = (!brmerge_demorgan_i_2_31_fu_42445_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_31_fu_42445_p2.read()[0].to_bool())? result_2_i_22_fu_42438_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_23_0_2_ca_fu_42480_p1() {
    result_2_i_23_0_2_ca_fu_42480_p1 = esl_sext<11,9>(result_2_i_23_0_2_fu_42472_p3.read());
}

void conv_3x3_strm::thread_result_2_i_23_0_2_fu_42472_p3() {
    result_2_i_23_0_2_fu_42472_p3 = (!brmerge_demorgan_i_2_32_fu_42457_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_32_fu_42457_p2.read()[0].to_bool())? result_23_0_2_fu_42466_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_23_1_0_s_fu_42626_p3() {
    result_2_i_23_1_0_s_fu_42626_p3 = (!brmerge_demorgan_i_2_34_fu_42622_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_34_fu_42622_p2.read()[0].to_bool())? result_2_i_23_1_fu_42616_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_23_1_2_fu_42657_p3() {
    result_2_i_23_1_2_fu_42657_p3 = (!brmerge_demorgan_i_2_35_fu_42634_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_35_fu_42634_p2.read()[0].to_bool())? result_23_1_2_fu_42651_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_23_1_fu_42616_p3() {
    result_2_i_23_1_fu_42616_p3 = (!brmerge_demorgan_i_2_33_reg_113126.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_33_reg_113126.read()[0].to_bool())? result_23_1_reg_113132.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_23_2_0_s_fu_42693_p3() {
    result_2_i_23_2_0_s_fu_42693_p3 = (!brmerge_demorgan_i_2_37_fu_42688_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_37_fu_42688_p2.read()[0].to_bool())? result_2_i_23_2_fu_42680_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_23_2_2_fu_42828_p3() {
    result_2_i_23_2_2_fu_42828_p3 = (!brmerge_demorgan_i_2_38_fu_42824_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_38_fu_42824_p2.read()[0].to_bool())? result_23_2_2_reg_113209.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_23_2_fu_42680_p3() {
    result_2_i_23_2_fu_42680_p3 = (!brmerge_demorgan_i_2_36_fu_42665_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_36_fu_42665_p2.read()[0].to_bool())? result_23_2_fu_42674_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_23_fu_42721_p3() {
    result_2_i_23_fu_42721_p3 = (!tmp_13_22_0_2_reg_112555.read()[0].is_01())? sc_lv<9>(): ((tmp_13_22_0_2_reg_112555.read()[0].to_bool())? tmp_17_23_fu_42715_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_240_0_0_s_fu_103860_p3() {
    result_2_i_240_0_0_s_fu_103860_p3 = (!brmerge_demorgan_i_2_407_fu_103856_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_407_fu_103856_p2.read()[0].to_bool())? result_2_i_239_fu_103849_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_240_0_2_c_fu_103891_p1() {
    result_2_i_240_0_2_c_fu_103891_p1 = esl_sext<11,9>(result_2_i_240_0_2_fu_103883_p3.read());
}

void conv_3x3_strm::thread_result_2_i_240_0_2_fu_103883_p3() {
    result_2_i_240_0_2_fu_103883_p3 = (!brmerge_demorgan_i_2_408_fu_103868_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_408_fu_103868_p2.read()[0].to_bool())? result_240_0_2_fu_103877_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_240_1_0_s_fu_104037_p3() {
    result_2_i_240_1_0_s_fu_104037_p3 = (!brmerge_demorgan_i_2_410_fu_104033_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_410_fu_104033_p2.read()[0].to_bool())? result_2_i_240_1_fu_104027_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_240_1_2_fu_104068_p3() {
    result_2_i_240_1_2_fu_104068_p3 = (!brmerge_demorgan_i_2_411_fu_104045_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_411_fu_104045_p2.read()[0].to_bool())? result_240_1_2_fu_104062_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_240_1_fu_104027_p3() {
    result_2_i_240_1_fu_104027_p3 = (!brmerge_demorgan_i_2_409_reg_129870.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_409_reg_129870.read()[0].to_bool())? result_240_1_reg_129876.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_240_2_0_s_fu_104104_p3() {
    result_2_i_240_2_0_s_fu_104104_p3 = (!brmerge_demorgan_i_2_413_fu_104099_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_413_fu_104099_p2.read()[0].to_bool())? result_2_i_240_2_fu_104091_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_240_2_2_fu_104239_p3() {
    result_2_i_240_2_2_fu_104239_p3 = (!brmerge_demorgan_i_2_414_fu_104235_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_414_fu_104235_p2.read()[0].to_bool())? result_240_2_2_reg_129912.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_240_2_fu_104091_p3() {
    result_2_i_240_2_fu_104091_p3 = (!brmerge_demorgan_i_2_412_fu_104076_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_412_fu_104076_p2.read()[0].to_bool())? result_240_2_fu_104085_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_240_fu_104132_p3() {
    result_2_i_240_fu_104132_p3 = (!tmp_13_239_0_2_reg_126666.read()[0].is_01())? sc_lv<9>(): ((tmp_13_239_0_2_reg_126666.read()[0].to_bool())? tmp_17_240_fu_104126_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_241_0_0_s_fu_104143_p3() {
    result_2_i_241_0_0_s_fu_104143_p3 = (!brmerge_demorgan_i_2_415_fu_104139_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_415_fu_104139_p2.read()[0].to_bool())? result_2_i_240_fu_104132_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_241_0_2_c_fu_104174_p1() {
    result_2_i_241_0_2_c_fu_104174_p1 = esl_sext<11,9>(result_2_i_241_0_2_fu_104166_p3.read());
}

void conv_3x3_strm::thread_result_2_i_241_0_2_fu_104166_p3() {
    result_2_i_241_0_2_fu_104166_p3 = (!brmerge_demorgan_i_2_416_fu_104151_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_416_fu_104151_p2.read()[0].to_bool())? result_241_0_2_fu_104160_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_241_1_0_s_fu_104320_p3() {
    result_2_i_241_1_0_s_fu_104320_p3 = (!brmerge_demorgan_i_2_418_fu_104316_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_418_fu_104316_p2.read()[0].to_bool())? result_2_i_241_1_fu_104310_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_241_1_2_fu_104351_p3() {
    result_2_i_241_1_2_fu_104351_p3 = (!brmerge_demorgan_i_2_419_fu_104328_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_419_fu_104328_p2.read()[0].to_bool())? result_241_1_2_fu_104345_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_241_1_fu_104310_p3() {
    result_2_i_241_1_fu_104310_p3 = (!brmerge_demorgan_i_2_417_reg_129917.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_417_reg_129917.read()[0].to_bool())? result_241_1_reg_129923.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_241_2_0_s_fu_104387_p3() {
    result_2_i_241_2_0_s_fu_104387_p3 = (!brmerge_demorgan_i_2_421_fu_104382_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_421_fu_104382_p2.read()[0].to_bool())? result_2_i_241_2_fu_104374_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_241_2_2_fu_104522_p3() {
    result_2_i_241_2_2_fu_104522_p3 = (!brmerge_demorgan_i_2_422_fu_104518_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_422_fu_104518_p2.read()[0].to_bool())? result_241_2_2_reg_129959.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_241_2_fu_104374_p3() {
    result_2_i_241_2_fu_104374_p3 = (!brmerge_demorgan_i_2_420_fu_104359_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_420_fu_104359_p2.read()[0].to_bool())? result_241_2_fu_104368_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_241_fu_104415_p3() {
    result_2_i_241_fu_104415_p3 = (!tmp_13_240_0_2_reg_126735.read()[0].is_01())? sc_lv<9>(): ((tmp_13_240_0_2_reg_126735.read()[0].to_bool())? tmp_17_241_fu_104409_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_242_0_0_s_fu_104426_p3() {
    result_2_i_242_0_0_s_fu_104426_p3 = (!brmerge_demorgan_i_2_423_fu_104422_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_423_fu_104422_p2.read()[0].to_bool())? result_2_i_241_fu_104415_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_242_0_2_c_fu_104457_p1() {
    result_2_i_242_0_2_c_fu_104457_p1 = esl_sext<11,9>(result_2_i_242_0_2_fu_104449_p3.read());
}

void conv_3x3_strm::thread_result_2_i_242_0_2_fu_104449_p3() {
    result_2_i_242_0_2_fu_104449_p3 = (!brmerge_demorgan_i_2_424_fu_104434_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_424_fu_104434_p2.read()[0].to_bool())? result_242_0_2_fu_104443_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_242_1_0_s_fu_104603_p3() {
    result_2_i_242_1_0_s_fu_104603_p3 = (!brmerge_demorgan_i_2_426_fu_104599_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_426_fu_104599_p2.read()[0].to_bool())? result_2_i_242_1_fu_104593_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_242_1_2_fu_104634_p3() {
    result_2_i_242_1_2_fu_104634_p3 = (!brmerge_demorgan_i_2_427_fu_104611_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_427_fu_104611_p2.read()[0].to_bool())? result_242_1_2_fu_104628_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_242_1_fu_104593_p3() {
    result_2_i_242_1_fu_104593_p3 = (!brmerge_demorgan_i_2_425_reg_129964.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_425_reg_129964.read()[0].to_bool())? result_242_1_reg_129970.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_242_2_0_s_fu_104670_p3() {
    result_2_i_242_2_0_s_fu_104670_p3 = (!brmerge_demorgan_i_2_429_fu_104665_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_429_fu_104665_p2.read()[0].to_bool())? result_2_i_242_2_fu_104657_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_242_2_2_fu_104805_p3() {
    result_2_i_242_2_2_fu_104805_p3 = (!brmerge_demorgan_i_2_430_fu_104801_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_430_fu_104801_p2.read()[0].to_bool())? result_242_2_2_reg_130006.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_242_2_fu_104657_p3() {
    result_2_i_242_2_fu_104657_p3 = (!brmerge_demorgan_i_2_428_fu_104642_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_428_fu_104642_p2.read()[0].to_bool())? result_242_2_fu_104651_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_242_fu_104698_p3() {
    result_2_i_242_fu_104698_p3 = (!tmp_13_241_0_2_reg_126804.read()[0].is_01())? sc_lv<9>(): ((tmp_13_241_0_2_reg_126804.read()[0].to_bool())? tmp_17_242_fu_104692_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_243_0_0_s_fu_104709_p3() {
    result_2_i_243_0_0_s_fu_104709_p3 = (!brmerge_demorgan_i_2_431_fu_104705_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_431_fu_104705_p2.read()[0].to_bool())? result_2_i_242_fu_104698_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_243_0_2_c_fu_104740_p1() {
    result_2_i_243_0_2_c_fu_104740_p1 = esl_sext<11,9>(result_2_i_243_0_2_fu_104732_p3.read());
}

void conv_3x3_strm::thread_result_2_i_243_0_2_fu_104732_p3() {
    result_2_i_243_0_2_fu_104732_p3 = (!brmerge_demorgan_i_2_432_fu_104717_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_432_fu_104717_p2.read()[0].to_bool())? result_243_0_2_fu_104726_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_243_1_0_s_fu_104886_p3() {
    result_2_i_243_1_0_s_fu_104886_p3 = (!brmerge_demorgan_i_2_434_fu_104882_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_434_fu_104882_p2.read()[0].to_bool())? result_2_i_243_1_fu_104876_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_243_1_2_fu_104917_p3() {
    result_2_i_243_1_2_fu_104917_p3 = (!brmerge_demorgan_i_2_435_fu_104894_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_435_fu_104894_p2.read()[0].to_bool())? result_243_1_2_fu_104911_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_243_1_fu_104876_p3() {
    result_2_i_243_1_fu_104876_p3 = (!brmerge_demorgan_i_2_433_reg_130011.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_433_reg_130011.read()[0].to_bool())? result_243_1_reg_130017.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_243_2_0_s_fu_104953_p3() {
    result_2_i_243_2_0_s_fu_104953_p3 = (!brmerge_demorgan_i_2_437_fu_104948_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_437_fu_104948_p2.read()[0].to_bool())? result_2_i_243_2_fu_104940_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_243_2_2_fu_105088_p3() {
    result_2_i_243_2_2_fu_105088_p3 = (!brmerge_demorgan_i_2_438_fu_105084_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_438_fu_105084_p2.read()[0].to_bool())? result_243_2_2_reg_130053.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_243_2_fu_104940_p3() {
    result_2_i_243_2_fu_104940_p3 = (!brmerge_demorgan_i_2_436_fu_104925_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_436_fu_104925_p2.read()[0].to_bool())? result_243_2_fu_104934_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_243_fu_104981_p3() {
    result_2_i_243_fu_104981_p3 = (!tmp_13_242_0_2_reg_126819.read()[0].is_01())? sc_lv<9>(): ((tmp_13_242_0_2_reg_126819.read()[0].to_bool())? tmp_17_243_fu_104975_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_244_0_0_s_fu_104992_p3() {
    result_2_i_244_0_0_s_fu_104992_p3 = (!brmerge_demorgan_i_2_439_fu_104988_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_439_fu_104988_p2.read()[0].to_bool())? result_2_i_243_fu_104981_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_244_0_2_c_fu_105023_p1() {
    result_2_i_244_0_2_c_fu_105023_p1 = esl_sext<11,9>(result_2_i_244_0_2_fu_105015_p3.read());
}

void conv_3x3_strm::thread_result_2_i_244_0_2_fu_105015_p3() {
    result_2_i_244_0_2_fu_105015_p3 = (!brmerge_demorgan_i_2_440_fu_105000_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_440_fu_105000_p2.read()[0].to_bool())? result_244_0_2_fu_105009_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_244_1_0_s_fu_105169_p3() {
    result_2_i_244_1_0_s_fu_105169_p3 = (!brmerge_demorgan_i_2_442_fu_105165_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_442_fu_105165_p2.read()[0].to_bool())? result_2_i_244_1_fu_105159_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_244_1_2_fu_105200_p3() {
    result_2_i_244_1_2_fu_105200_p3 = (!brmerge_demorgan_i_2_443_fu_105177_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_443_fu_105177_p2.read()[0].to_bool())? result_244_1_2_fu_105194_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_244_1_fu_105159_p3() {
    result_2_i_244_1_fu_105159_p3 = (!brmerge_demorgan_i_2_441_reg_130058.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_441_reg_130058.read()[0].to_bool())? result_244_1_reg_130064.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_244_2_0_s_fu_105236_p3() {
    result_2_i_244_2_0_s_fu_105236_p3 = (!brmerge_demorgan_i_2_445_fu_105231_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_445_fu_105231_p2.read()[0].to_bool())? result_2_i_244_2_fu_105223_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_244_2_2_fu_105371_p3() {
    result_2_i_244_2_2_fu_105371_p3 = (!brmerge_demorgan_i_2_446_fu_105367_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_446_fu_105367_p2.read()[0].to_bool())? result_244_2_2_reg_130100.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_244_2_fu_105223_p3() {
    result_2_i_244_2_fu_105223_p3 = (!brmerge_demorgan_i_2_444_fu_105208_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_444_fu_105208_p2.read()[0].to_bool())? result_244_2_fu_105217_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_244_fu_105264_p3() {
    result_2_i_244_fu_105264_p3 = (!tmp_13_243_0_2_reg_126895.read()[0].is_01())? sc_lv<9>(): ((tmp_13_243_0_2_reg_126895.read()[0].to_bool())? tmp_17_244_fu_105258_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_245_0_0_s_fu_105275_p3() {
    result_2_i_245_0_0_s_fu_105275_p3 = (!brmerge_demorgan_i_2_447_fu_105271_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_447_fu_105271_p2.read()[0].to_bool())? result_2_i_244_fu_105264_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_245_0_2_c_fu_105306_p1() {
    result_2_i_245_0_2_c_fu_105306_p1 = esl_sext<11,9>(result_2_i_245_0_2_fu_105298_p3.read());
}

void conv_3x3_strm::thread_result_2_i_245_0_2_fu_105298_p3() {
    result_2_i_245_0_2_fu_105298_p3 = (!brmerge_demorgan_i_2_448_fu_105283_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_448_fu_105283_p2.read()[0].to_bool())? result_245_0_2_fu_105292_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_245_1_0_s_fu_105452_p3() {
    result_2_i_245_1_0_s_fu_105452_p3 = (!brmerge_demorgan_i_2_450_fu_105448_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_450_fu_105448_p2.read()[0].to_bool())? result_2_i_245_1_fu_105442_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_245_1_2_fu_105483_p3() {
    result_2_i_245_1_2_fu_105483_p3 = (!brmerge_demorgan_i_2_451_fu_105460_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_451_fu_105460_p2.read()[0].to_bool())? result_245_1_2_fu_105477_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_245_1_fu_105442_p3() {
    result_2_i_245_1_fu_105442_p3 = (!brmerge_demorgan_i_2_449_reg_130105.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_449_reg_130105.read()[0].to_bool())? result_245_1_reg_130111.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_245_2_0_s_fu_105519_p3() {
    result_2_i_245_2_0_s_fu_105519_p3 = (!brmerge_demorgan_i_2_453_fu_105514_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_453_fu_105514_p2.read()[0].to_bool())? result_2_i_245_2_fu_105506_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_245_2_2_fu_105654_p3() {
    result_2_i_245_2_2_fu_105654_p3 = (!brmerge_demorgan_i_2_454_fu_105650_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_454_fu_105650_p2.read()[0].to_bool())? result_245_2_2_reg_130147.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_245_2_fu_105506_p3() {
    result_2_i_245_2_fu_105506_p3 = (!brmerge_demorgan_i_2_452_fu_105491_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_452_fu_105491_p2.read()[0].to_bool())? result_245_2_fu_105500_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_245_fu_105547_p3() {
    result_2_i_245_fu_105547_p3 = (!tmp_13_244_0_2_reg_126964.read()[0].is_01())? sc_lv<9>(): ((tmp_13_244_0_2_reg_126964.read()[0].to_bool())? tmp_17_245_fu_105541_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_246_0_0_s_fu_105558_p3() {
    result_2_i_246_0_0_s_fu_105558_p3 = (!brmerge_demorgan_i_2_455_fu_105554_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_455_fu_105554_p2.read()[0].to_bool())? result_2_i_245_fu_105547_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_246_0_2_c_fu_105589_p1() {
    result_2_i_246_0_2_c_fu_105589_p1 = esl_sext<11,9>(result_2_i_246_0_2_fu_105581_p3.read());
}

void conv_3x3_strm::thread_result_2_i_246_0_2_fu_105581_p3() {
    result_2_i_246_0_2_fu_105581_p3 = (!brmerge_demorgan_i_2_456_fu_105566_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_456_fu_105566_p2.read()[0].to_bool())? result_246_0_2_fu_105575_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_246_1_0_s_fu_105735_p3() {
    result_2_i_246_1_0_s_fu_105735_p3 = (!brmerge_demorgan_i_2_458_fu_105731_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_458_fu_105731_p2.read()[0].to_bool())? result_2_i_246_1_fu_105725_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_246_1_2_fu_105766_p3() {
    result_2_i_246_1_2_fu_105766_p3 = (!brmerge_demorgan_i_2_459_fu_105743_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_459_fu_105743_p2.read()[0].to_bool())? result_246_1_2_fu_105760_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_246_1_fu_105725_p3() {
    result_2_i_246_1_fu_105725_p3 = (!brmerge_demorgan_i_2_457_reg_130152.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_457_reg_130152.read()[0].to_bool())? result_246_1_reg_130158.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_246_2_0_s_fu_105802_p3() {
    result_2_i_246_2_0_s_fu_105802_p3 = (!brmerge_demorgan_i_2_461_fu_105797_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_461_fu_105797_p2.read()[0].to_bool())? result_2_i_246_2_fu_105789_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_246_2_2_fu_105937_p3() {
    result_2_i_246_2_2_fu_105937_p3 = (!brmerge_demorgan_i_2_462_fu_105933_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_462_fu_105933_p2.read()[0].to_bool())? result_246_2_2_reg_130194.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_246_2_fu_105789_p3() {
    result_2_i_246_2_fu_105789_p3 = (!brmerge_demorgan_i_2_460_fu_105774_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_460_fu_105774_p2.read()[0].to_bool())? result_246_2_fu_105783_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_246_fu_105830_p3() {
    result_2_i_246_fu_105830_p3 = (!tmp_13_245_0_2_reg_127033.read()[0].is_01())? sc_lv<9>(): ((tmp_13_245_0_2_reg_127033.read()[0].to_bool())? tmp_17_246_fu_105824_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_247_0_0_s_fu_105841_p3() {
    result_2_i_247_0_0_s_fu_105841_p3 = (!brmerge_demorgan_i_2_463_fu_105837_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_463_fu_105837_p2.read()[0].to_bool())? result_2_i_246_fu_105830_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_247_0_2_c_fu_105872_p1() {
    result_2_i_247_0_2_c_fu_105872_p1 = esl_sext<11,9>(result_2_i_247_0_2_fu_105864_p3.read());
}

void conv_3x3_strm::thread_result_2_i_247_0_2_fu_105864_p3() {
    result_2_i_247_0_2_fu_105864_p3 = (!brmerge_demorgan_i_2_464_fu_105849_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_464_fu_105849_p2.read()[0].to_bool())? result_247_0_2_fu_105858_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_247_1_0_s_fu_106018_p3() {
    result_2_i_247_1_0_s_fu_106018_p3 = (!brmerge_demorgan_i_2_466_fu_106014_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_466_fu_106014_p2.read()[0].to_bool())? result_2_i_247_1_fu_106008_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_247_1_2_fu_106049_p3() {
    result_2_i_247_1_2_fu_106049_p3 = (!brmerge_demorgan_i_2_467_fu_106026_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_467_fu_106026_p2.read()[0].to_bool())? result_247_1_2_fu_106043_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_247_1_fu_106008_p3() {
    result_2_i_247_1_fu_106008_p3 = (!brmerge_demorgan_i_2_465_reg_130199.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_465_reg_130199.read()[0].to_bool())? result_247_1_reg_130205.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_247_2_0_s_fu_106085_p3() {
    result_2_i_247_2_0_s_fu_106085_p3 = (!brmerge_demorgan_i_2_469_fu_106080_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_469_fu_106080_p2.read()[0].to_bool())? result_2_i_247_2_fu_106072_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_247_2_2_fu_106220_p3() {
    result_2_i_247_2_2_fu_106220_p3 = (!brmerge_demorgan_i_2_470_fu_106216_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_470_fu_106216_p2.read()[0].to_bool())? result_247_2_2_reg_130241.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_247_2_fu_106072_p3() {
    result_2_i_247_2_fu_106072_p3 = (!brmerge_demorgan_i_2_468_fu_106057_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_468_fu_106057_p2.read()[0].to_bool())? result_247_2_fu_106066_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_247_fu_106113_p3() {
    result_2_i_247_fu_106113_p3 = (!tmp_13_246_0_2_reg_127048.read()[0].is_01())? sc_lv<9>(): ((tmp_13_246_0_2_reg_127048.read()[0].to_bool())? tmp_17_247_fu_106107_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_248_0_0_s_fu_106124_p3() {
    result_2_i_248_0_0_s_fu_106124_p3 = (!brmerge_demorgan_i_2_471_fu_106120_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_471_fu_106120_p2.read()[0].to_bool())? result_2_i_247_fu_106113_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_248_0_2_c_fu_106155_p1() {
    result_2_i_248_0_2_c_fu_106155_p1 = esl_sext<11,9>(result_2_i_248_0_2_fu_106147_p3.read());
}

void conv_3x3_strm::thread_result_2_i_248_0_2_fu_106147_p3() {
    result_2_i_248_0_2_fu_106147_p3 = (!brmerge_demorgan_i_2_472_fu_106132_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_472_fu_106132_p2.read()[0].to_bool())? result_248_0_2_fu_106141_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_248_1_0_s_fu_106301_p3() {
    result_2_i_248_1_0_s_fu_106301_p3 = (!brmerge_demorgan_i_2_474_fu_106297_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_474_fu_106297_p2.read()[0].to_bool())? result_2_i_248_1_fu_106291_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_248_1_2_fu_106332_p3() {
    result_2_i_248_1_2_fu_106332_p3 = (!brmerge_demorgan_i_2_475_fu_106309_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_475_fu_106309_p2.read()[0].to_bool())? result_248_1_2_fu_106326_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_248_1_fu_106291_p3() {
    result_2_i_248_1_fu_106291_p3 = (!brmerge_demorgan_i_2_473_reg_130246.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_473_reg_130246.read()[0].to_bool())? result_248_1_reg_130252.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_248_2_0_s_fu_106368_p3() {
    result_2_i_248_2_0_s_fu_106368_p3 = (!brmerge_demorgan_i_2_477_fu_106363_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_477_fu_106363_p2.read()[0].to_bool())? result_2_i_248_2_fu_106355_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_248_2_2_fu_106503_p3() {
    result_2_i_248_2_2_fu_106503_p3 = (!brmerge_demorgan_i_2_478_fu_106499_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_478_fu_106499_p2.read()[0].to_bool())? result_248_2_2_reg_130288.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_248_2_fu_106355_p3() {
    result_2_i_248_2_fu_106355_p3 = (!brmerge_demorgan_i_2_476_fu_106340_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_476_fu_106340_p2.read()[0].to_bool())? result_248_2_fu_106349_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_248_fu_106396_p3() {
    result_2_i_248_fu_106396_p3 = (!tmp_13_247_0_2_reg_127124.read()[0].is_01())? sc_lv<9>(): ((tmp_13_247_0_2_reg_127124.read()[0].to_bool())? tmp_17_248_fu_106390_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_249_0_0_s_fu_106407_p3() {
    result_2_i_249_0_0_s_fu_106407_p3 = (!brmerge_demorgan_i_2_479_fu_106403_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_479_fu_106403_p2.read()[0].to_bool())? result_2_i_248_fu_106396_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_249_0_2_c_fu_106438_p1() {
    result_2_i_249_0_2_c_fu_106438_p1 = esl_sext<11,9>(result_2_i_249_0_2_fu_106430_p3.read());
}

void conv_3x3_strm::thread_result_2_i_249_0_2_fu_106430_p3() {
    result_2_i_249_0_2_fu_106430_p3 = (!brmerge_demorgan_i_2_480_fu_106415_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_480_fu_106415_p2.read()[0].to_bool())? result_249_0_2_fu_106424_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_249_1_0_s_fu_106584_p3() {
    result_2_i_249_1_0_s_fu_106584_p3 = (!brmerge_demorgan_i_2_482_fu_106580_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_482_fu_106580_p2.read()[0].to_bool())? result_2_i_249_1_fu_106574_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_249_1_2_fu_106615_p3() {
    result_2_i_249_1_2_fu_106615_p3 = (!brmerge_demorgan_i_2_483_fu_106592_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_483_fu_106592_p2.read()[0].to_bool())? result_249_1_2_fu_106609_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_249_1_fu_106574_p3() {
    result_2_i_249_1_fu_106574_p3 = (!brmerge_demorgan_i_2_481_reg_130293.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_481_reg_130293.read()[0].to_bool())? result_249_1_reg_130299.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_249_2_0_s_fu_106651_p3() {
    result_2_i_249_2_0_s_fu_106651_p3 = (!brmerge_demorgan_i_2_485_fu_106646_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_485_fu_106646_p2.read()[0].to_bool())? result_2_i_249_2_fu_106638_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_249_2_2_fu_106786_p3() {
    result_2_i_249_2_2_fu_106786_p3 = (!brmerge_demorgan_i_2_486_fu_106782_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_486_fu_106782_p2.read()[0].to_bool())? result_249_2_2_reg_130335.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_249_2_fu_106638_p3() {
    result_2_i_249_2_fu_106638_p3 = (!brmerge_demorgan_i_2_484_fu_106623_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_484_fu_106623_p2.read()[0].to_bool())? result_249_2_fu_106632_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_249_fu_106679_p3() {
    result_2_i_249_fu_106679_p3 = (!tmp_13_248_0_2_reg_127193.read()[0].is_01())? sc_lv<9>(): ((tmp_13_248_0_2_reg_127193.read()[0].to_bool())? tmp_17_249_fu_106673_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_24_0_0_s_fu_42732_p3() {
    result_2_i_24_0_0_s_fu_42732_p3 = (!brmerge_demorgan_i_2_39_fu_42728_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_39_fu_42728_p2.read()[0].to_bool())? result_2_i_23_fu_42721_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_24_0_2_ca_fu_42763_p1() {
    result_2_i_24_0_2_ca_fu_42763_p1 = esl_sext<11,9>(result_2_i_24_0_2_fu_42755_p3.read());
}

void conv_3x3_strm::thread_result_2_i_24_0_2_fu_42755_p3() {
    result_2_i_24_0_2_fu_42755_p3 = (!brmerge_demorgan_i_2_40_fu_42740_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_40_fu_42740_p2.read()[0].to_bool())? result_24_0_2_fu_42749_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_24_1_0_s_fu_42909_p3() {
    result_2_i_24_1_0_s_fu_42909_p3 = (!brmerge_demorgan_i_2_42_fu_42905_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_42_fu_42905_p2.read()[0].to_bool())? result_2_i_24_1_fu_42899_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_24_1_2_fu_42940_p3() {
    result_2_i_24_1_2_fu_42940_p3 = (!brmerge_demorgan_i_2_43_fu_42917_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_43_fu_42917_p2.read()[0].to_bool())? result_24_1_2_fu_42934_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_24_1_fu_42899_p3() {
    result_2_i_24_1_fu_42899_p3 = (!brmerge_demorgan_i_2_41_reg_113214.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_41_reg_113214.read()[0].to_bool())? result_24_1_reg_113220.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_24_2_0_s_fu_42976_p3() {
    result_2_i_24_2_0_s_fu_42976_p3 = (!brmerge_demorgan_i_2_45_fu_42971_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_45_fu_42971_p2.read()[0].to_bool())? result_2_i_24_2_fu_42963_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_24_2_2_fu_43111_p3() {
    result_2_i_24_2_2_fu_43111_p3 = (!brmerge_demorgan_i_2_46_fu_43107_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_46_fu_43107_p2.read()[0].to_bool())? result_24_2_2_reg_113297.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_24_2_fu_42963_p3() {
    result_2_i_24_2_fu_42963_p3 = (!brmerge_demorgan_i_2_44_fu_42948_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_44_fu_42948_p2.read()[0].to_bool())? result_24_2_fu_42957_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_24_fu_43004_p3() {
    result_2_i_24_fu_43004_p3 = (!tmp_13_23_0_2_reg_112643.read()[0].is_01())? sc_lv<9>(): ((tmp_13_23_0_2_reg_112643.read()[0].to_bool())? tmp_17_24_fu_42998_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_250_0_0_s_fu_106690_p3() {
    result_2_i_250_0_0_s_fu_106690_p3 = (!brmerge_demorgan_i_2_487_fu_106686_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_487_fu_106686_p2.read()[0].to_bool())? result_2_i_249_fu_106679_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_250_0_2_c_fu_106721_p1() {
    result_2_i_250_0_2_c_fu_106721_p1 = esl_sext<11,9>(result_2_i_250_0_2_fu_106713_p3.read());
}

void conv_3x3_strm::thread_result_2_i_250_0_2_fu_106713_p3() {
    result_2_i_250_0_2_fu_106713_p3 = (!brmerge_demorgan_i_2_488_fu_106698_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_488_fu_106698_p2.read()[0].to_bool())? result_250_0_2_fu_106707_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_250_1_0_s_fu_106867_p3() {
    result_2_i_250_1_0_s_fu_106867_p3 = (!brmerge_demorgan_i_2_490_fu_106863_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_490_fu_106863_p2.read()[0].to_bool())? result_2_i_250_1_fu_106857_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_250_1_2_fu_106898_p3() {
    result_2_i_250_1_2_fu_106898_p3 = (!brmerge_demorgan_i_2_491_fu_106875_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_491_fu_106875_p2.read()[0].to_bool())? result_250_1_2_fu_106892_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_250_1_fu_106857_p3() {
    result_2_i_250_1_fu_106857_p3 = (!brmerge_demorgan_i_2_489_reg_130340.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_489_reg_130340.read()[0].to_bool())? result_250_1_reg_130346.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_250_2_0_s_fu_106934_p3() {
    result_2_i_250_2_0_s_fu_106934_p3 = (!brmerge_demorgan_i_2_493_fu_106929_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_493_fu_106929_p2.read()[0].to_bool())? result_2_i_250_2_fu_106921_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_250_2_2_fu_107069_p3() {
    result_2_i_250_2_2_fu_107069_p3 = (!brmerge_demorgan_i_2_494_fu_107065_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_494_fu_107065_p2.read()[0].to_bool())? result_250_2_2_reg_130382.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_250_2_fu_106921_p3() {
    result_2_i_250_2_fu_106921_p3 = (!brmerge_demorgan_i_2_492_fu_106906_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_492_fu_106906_p2.read()[0].to_bool())? result_250_2_fu_106915_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_250_fu_106962_p3() {
    result_2_i_250_fu_106962_p3 = (!tmp_13_249_0_2_reg_127262.read()[0].is_01())? sc_lv<9>(): ((tmp_13_249_0_2_reg_127262.read()[0].to_bool())? tmp_17_250_fu_106956_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_251_0_0_s_fu_106973_p3() {
    result_2_i_251_0_0_s_fu_106973_p3 = (!brmerge_demorgan_i_2_495_fu_106969_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_495_fu_106969_p2.read()[0].to_bool())? result_2_i_250_fu_106962_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_251_0_2_c_fu_107004_p1() {
    result_2_i_251_0_2_c_fu_107004_p1 = esl_sext<11,9>(result_2_i_251_0_2_fu_106996_p3.read());
}

void conv_3x3_strm::thread_result_2_i_251_0_2_fu_106996_p3() {
    result_2_i_251_0_2_fu_106996_p3 = (!brmerge_demorgan_i_2_496_fu_106981_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_496_fu_106981_p2.read()[0].to_bool())? result_251_0_2_fu_106990_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_251_1_0_s_fu_107150_p3() {
    result_2_i_251_1_0_s_fu_107150_p3 = (!brmerge_demorgan_i_2_498_fu_107146_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_498_fu_107146_p2.read()[0].to_bool())? result_2_i_251_1_fu_107140_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_251_1_2_fu_107181_p3() {
    result_2_i_251_1_2_fu_107181_p3 = (!brmerge_demorgan_i_2_499_fu_107158_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_499_fu_107158_p2.read()[0].to_bool())? result_251_1_2_fu_107175_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_251_1_fu_107140_p3() {
    result_2_i_251_1_fu_107140_p3 = (!brmerge_demorgan_i_2_497_reg_130387.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_497_reg_130387.read()[0].to_bool())? result_251_1_reg_130393.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_251_2_0_s_fu_107217_p3() {
    result_2_i_251_2_0_s_fu_107217_p3 = (!brmerge_demorgan_i_2_501_fu_107212_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_501_fu_107212_p2.read()[0].to_bool())? result_2_i_251_2_fu_107204_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_251_2_2_fu_107352_p3() {
    result_2_i_251_2_2_fu_107352_p3 = (!brmerge_demorgan_i_2_502_fu_107348_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_502_fu_107348_p2.read()[0].to_bool())? result_251_2_2_reg_130429.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_251_2_fu_107204_p3() {
    result_2_i_251_2_fu_107204_p3 = (!brmerge_demorgan_i_2_500_fu_107189_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_500_fu_107189_p2.read()[0].to_bool())? result_251_2_fu_107198_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_251_fu_107245_p3() {
    result_2_i_251_fu_107245_p3 = (!tmp_13_250_0_2_reg_127277.read()[0].is_01())? sc_lv<9>(): ((tmp_13_250_0_2_reg_127277.read()[0].to_bool())? tmp_17_251_fu_107239_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_252_0_0_s_fu_107256_p3() {
    result_2_i_252_0_0_s_fu_107256_p3 = (!brmerge_demorgan_i_2_503_fu_107252_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_503_fu_107252_p2.read()[0].to_bool())? result_2_i_251_fu_107245_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_252_0_2_c_fu_107287_p1() {
    result_2_i_252_0_2_c_fu_107287_p1 = esl_sext<11,9>(result_2_i_252_0_2_fu_107279_p3.read());
}

void conv_3x3_strm::thread_result_2_i_252_0_2_fu_107279_p3() {
    result_2_i_252_0_2_fu_107279_p3 = (!brmerge_demorgan_i_2_504_fu_107264_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_504_fu_107264_p2.read()[0].to_bool())? result_252_0_2_fu_107273_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_252_1_0_s_fu_107433_p3() {
    result_2_i_252_1_0_s_fu_107433_p3 = (!brmerge_demorgan_i_2_506_fu_107429_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_506_fu_107429_p2.read()[0].to_bool())? result_2_i_252_1_fu_107423_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_252_1_2_fu_107464_p3() {
    result_2_i_252_1_2_fu_107464_p3 = (!brmerge_demorgan_i_2_507_fu_107441_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_507_fu_107441_p2.read()[0].to_bool())? result_252_1_2_fu_107458_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_252_1_fu_107423_p3() {
    result_2_i_252_1_fu_107423_p3 = (!brmerge_demorgan_i_2_505_reg_130434.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_505_reg_130434.read()[0].to_bool())? result_252_1_reg_130440.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_252_2_0_s_fu_107500_p3() {
    result_2_i_252_2_0_s_fu_107500_p3 = (!brmerge_demorgan_i_2_509_fu_107495_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_509_fu_107495_p2.read()[0].to_bool())? result_2_i_252_2_fu_107487_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_252_2_2_fu_107635_p3() {
    result_2_i_252_2_2_fu_107635_p3 = (!brmerge_demorgan_i_2_510_fu_107631_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_510_fu_107631_p2.read()[0].to_bool())? result_252_2_2_reg_130476.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_252_2_fu_107487_p3() {
    result_2_i_252_2_fu_107487_p3 = (!brmerge_demorgan_i_2_508_fu_107472_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_508_fu_107472_p2.read()[0].to_bool())? result_252_2_fu_107481_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_252_fu_107528_p3() {
    result_2_i_252_fu_107528_p3 = (!tmp_13_251_0_2_reg_127353.read()[0].is_01())? sc_lv<9>(): ((tmp_13_251_0_2_reg_127353.read()[0].to_bool())? tmp_17_252_fu_107522_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_253_0_0_s_fu_107539_p3() {
    result_2_i_253_0_0_s_fu_107539_p3 = (!brmerge_demorgan_i_2_511_fu_107535_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_511_fu_107535_p2.read()[0].to_bool())? result_2_i_252_fu_107528_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_253_0_2_c_fu_107570_p1() {
    result_2_i_253_0_2_c_fu_107570_p1 = esl_sext<11,9>(result_2_i_253_0_2_fu_107562_p3.read());
}

void conv_3x3_strm::thread_result_2_i_253_0_2_fu_107562_p3() {
    result_2_i_253_0_2_fu_107562_p3 = (!brmerge_demorgan_i_2_512_fu_107547_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_512_fu_107547_p2.read()[0].to_bool())? result_253_0_2_fu_107556_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_253_1_0_s_fu_107716_p3() {
    result_2_i_253_1_0_s_fu_107716_p3 = (!brmerge_demorgan_i_2_514_fu_107712_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_514_fu_107712_p2.read()[0].to_bool())? result_2_i_253_1_fu_107706_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_253_1_2_fu_107747_p3() {
    result_2_i_253_1_2_fu_107747_p3 = (!brmerge_demorgan_i_2_515_fu_107724_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_515_fu_107724_p2.read()[0].to_bool())? result_253_1_2_fu_107741_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_253_1_fu_107706_p3() {
    result_2_i_253_1_fu_107706_p3 = (!brmerge_demorgan_i_2_513_reg_130481.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_513_reg_130481.read()[0].to_bool())? result_253_1_reg_130487.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_253_2_0_s_fu_107783_p3() {
    result_2_i_253_2_0_s_fu_107783_p3 = (!brmerge_demorgan_i_2_517_fu_107778_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_517_fu_107778_p2.read()[0].to_bool())? result_2_i_253_2_fu_107770_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_253_2_2_fu_107918_p3() {
    result_2_i_253_2_2_fu_107918_p3 = (!brmerge_demorgan_i_2_518_fu_107914_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_518_fu_107914_p2.read()[0].to_bool())? result_253_2_2_reg_130523.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_253_2_fu_107770_p3() {
    result_2_i_253_2_fu_107770_p3 = (!brmerge_demorgan_i_2_516_fu_107755_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_516_fu_107755_p2.read()[0].to_bool())? result_253_2_fu_107764_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_253_fu_107811_p3() {
    result_2_i_253_fu_107811_p3 = (!tmp_13_252_0_2_reg_127422.read()[0].is_01())? sc_lv<9>(): ((tmp_13_252_0_2_reg_127422.read()[0].to_bool())? tmp_17_253_fu_107805_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_254_0_0_s_fu_107822_p3() {
    result_2_i_254_0_0_s_fu_107822_p3 = (!brmerge_demorgan_i_2_519_fu_107818_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_519_fu_107818_p2.read()[0].to_bool())? result_2_i_253_fu_107811_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_254_0_2_c_fu_107853_p1() {
    result_2_i_254_0_2_c_fu_107853_p1 = esl_sext<11,9>(result_2_i_254_0_2_fu_107845_p3.read());
}

void conv_3x3_strm::thread_result_2_i_254_0_2_fu_107845_p3() {
    result_2_i_254_0_2_fu_107845_p3 = (!brmerge_demorgan_i_2_520_fu_107830_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_520_fu_107830_p2.read()[0].to_bool())? result_254_0_2_fu_107839_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_254_1_0_s_fu_107999_p3() {
    result_2_i_254_1_0_s_fu_107999_p3 = (!brmerge_demorgan_i_2_522_fu_107995_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_522_fu_107995_p2.read()[0].to_bool())? result_2_i_254_1_fu_107989_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_254_1_2_fu_108030_p3() {
    result_2_i_254_1_2_fu_108030_p3 = (!brmerge_demorgan_i_2_523_fu_108007_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_523_fu_108007_p2.read()[0].to_bool())? result_254_1_2_fu_108024_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_254_1_fu_107989_p3() {
    result_2_i_254_1_fu_107989_p3 = (!brmerge_demorgan_i_2_521_reg_130528.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_521_reg_130528.read()[0].to_bool())? result_254_1_reg_130534.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_254_2_0_s_fu_108066_p3() {
    result_2_i_254_2_0_s_fu_108066_p3 = (!brmerge_demorgan_i_2_525_fu_108061_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_525_fu_108061_p2.read()[0].to_bool())? result_2_i_254_2_fu_108053_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_254_2_2_fu_108202_p3() {
    result_2_i_254_2_2_fu_108202_p3 = (!brmerge_demorgan_i_2_526_fu_108198_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_526_fu_108198_p2.read()[0].to_bool())? result_254_2_2_reg_130569.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_254_2_fu_108053_p3() {
    result_2_i_254_2_fu_108053_p3 = (!brmerge_demorgan_i_2_524_fu_108038_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_524_fu_108038_p2.read()[0].to_bool())? result_254_2_fu_108047_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_254_fu_108094_p3() {
    result_2_i_254_fu_108094_p3 = (!tmp_13_253_0_2_reg_127491.read()[0].is_01())? sc_lv<9>(): ((tmp_13_253_0_2_reg_127491.read()[0].to_bool())? tmp_17_254_fu_108088_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_255_0_0_s_fu_108105_p3() {
    result_2_i_255_0_0_s_fu_108105_p3 = (!brmerge_demorgan_i_2_527_fu_108101_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_527_fu_108101_p2.read()[0].to_bool())? result_2_i_254_fu_108094_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_255_0_2_c_fu_108136_p1() {
    result_2_i_255_0_2_c_fu_108136_p1 = esl_sext<11,9>(result_2_i_255_0_2_fu_108128_p3.read());
}

void conv_3x3_strm::thread_result_2_i_255_0_2_fu_108128_p3() {
    result_2_i_255_0_2_fu_108128_p3 = (!brmerge_demorgan_i_2_528_fu_108113_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_528_fu_108113_p2.read()[0].to_bool())? result_255_0_2_fu_108122_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_255_1_0_s_fu_108283_p3() {
    result_2_i_255_1_0_s_fu_108283_p3 = (!brmerge_demorgan_i_2_530_fu_108279_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_530_fu_108279_p2.read()[0].to_bool())? result_2_i_255_1_fu_108273_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_255_1_2_fu_108314_p3() {
    result_2_i_255_1_2_fu_108314_p3 = (!brmerge_demorgan_i_2_531_fu_108291_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_531_fu_108291_p2.read()[0].to_bool())? result_255_1_2_fu_108308_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_255_1_fu_108273_p3() {
    result_2_i_255_1_fu_108273_p3 = (!brmerge_demorgan_i_2_529_reg_130574.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_529_reg_130574.read()[0].to_bool())? result_255_1_reg_130580.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_255_2_0_s_fu_108350_p3() {
    result_2_i_255_2_0_s_fu_108350_p3 = (!brmerge_demorgan_i_2_533_fu_108345_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_533_fu_108345_p2.read()[0].to_bool())? result_2_i_255_2_fu_108337_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_255_2_2_fu_108384_p3() {
    result_2_i_255_2_2_fu_108384_p3 = (!brmerge_demorgan_i_2_534_fu_108380_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_534_fu_108380_p2.read()[0].to_bool())? result_255_2_2_reg_130605.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_255_2_fu_108337_p3() {
    result_2_i_255_2_fu_108337_p3 = (!brmerge_demorgan_i_2_532_fu_108322_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_532_fu_108322_p2.read()[0].to_bool())? result_255_2_fu_108331_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_25_0_0_s_fu_43015_p3() {
    result_2_i_25_0_0_s_fu_43015_p3 = (!brmerge_demorgan_i_2_47_fu_43011_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_47_fu_43011_p2.read()[0].to_bool())? result_2_i_24_fu_43004_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_25_0_2_ca_fu_43046_p1() {
    result_2_i_25_0_2_ca_fu_43046_p1 = esl_sext<11,9>(result_2_i_25_0_2_fu_43038_p3.read());
}

void conv_3x3_strm::thread_result_2_i_25_0_2_fu_43038_p3() {
    result_2_i_25_0_2_fu_43038_p3 = (!brmerge_demorgan_i_2_48_fu_43023_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_48_fu_43023_p2.read()[0].to_bool())? result_25_0_2_fu_43032_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_25_1_0_s_fu_43192_p3() {
    result_2_i_25_1_0_s_fu_43192_p3 = (!brmerge_demorgan_i_2_50_fu_43188_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_50_fu_43188_p2.read()[0].to_bool())? result_2_i_25_1_fu_43182_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_25_1_2_fu_43223_p3() {
    result_2_i_25_1_2_fu_43223_p3 = (!brmerge_demorgan_i_2_51_fu_43200_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_51_fu_43200_p2.read()[0].to_bool())? result_25_1_2_fu_43217_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_25_1_fu_43182_p3() {
    result_2_i_25_1_fu_43182_p3 = (!brmerge_demorgan_i_2_49_reg_113302.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_49_reg_113302.read()[0].to_bool())? result_25_1_reg_113308.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_25_2_0_s_fu_43259_p3() {
    result_2_i_25_2_0_s_fu_43259_p3 = (!brmerge_demorgan_i_2_53_fu_43254_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_53_fu_43254_p2.read()[0].to_bool())? result_2_i_25_2_fu_43246_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_25_2_2_fu_43394_p3() {
    result_2_i_25_2_2_fu_43394_p3 = (!brmerge_demorgan_i_2_54_fu_43390_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_54_fu_43390_p2.read()[0].to_bool())? result_25_2_2_reg_113386.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_25_2_fu_43246_p3() {
    result_2_i_25_2_fu_43246_p3 = (!brmerge_demorgan_i_2_52_fu_43231_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_52_fu_43231_p2.read()[0].to_bool())? result_25_2_fu_43240_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_25_fu_43287_p3() {
    result_2_i_25_fu_43287_p3 = (!tmp_13_24_0_2_reg_112724.read()[0].is_01())? sc_lv<9>(): ((tmp_13_24_0_2_reg_112724.read()[0].to_bool())? tmp_17_25_fu_43281_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_26_0_0_s_fu_43298_p3() {
    result_2_i_26_0_0_s_fu_43298_p3 = (!brmerge_demorgan_i_2_55_fu_43294_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_55_fu_43294_p2.read()[0].to_bool())? result_2_i_25_fu_43287_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_26_0_2_ca_fu_43329_p1() {
    result_2_i_26_0_2_ca_fu_43329_p1 = esl_sext<11,9>(result_2_i_26_0_2_fu_43321_p3.read());
}

void conv_3x3_strm::thread_result_2_i_26_0_2_fu_43321_p3() {
    result_2_i_26_0_2_fu_43321_p3 = (!brmerge_demorgan_i_2_56_fu_43306_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_56_fu_43306_p2.read()[0].to_bool())? result_26_0_2_fu_43315_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_26_1_0_s_fu_43475_p3() {
    result_2_i_26_1_0_s_fu_43475_p3 = (!brmerge_demorgan_i_2_58_fu_43471_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_58_fu_43471_p2.read()[0].to_bool())? result_2_i_26_1_fu_43465_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_26_1_2_fu_43506_p3() {
    result_2_i_26_1_2_fu_43506_p3 = (!brmerge_demorgan_i_2_59_fu_43483_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_59_fu_43483_p2.read()[0].to_bool())? result_26_1_2_fu_43500_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_26_1_fu_43465_p3() {
    result_2_i_26_1_fu_43465_p3 = (!brmerge_demorgan_i_2_57_reg_113391.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_57_reg_113391.read()[0].to_bool())? result_26_1_reg_113397.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_26_2_0_s_fu_43542_p3() {
    result_2_i_26_2_0_s_fu_43542_p3 = (!brmerge_demorgan_i_2_61_fu_43537_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_61_fu_43537_p2.read()[0].to_bool())? result_2_i_26_2_fu_43529_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_26_2_2_fu_43677_p3() {
    result_2_i_26_2_2_fu_43677_p3 = (!brmerge_demorgan_i_2_62_fu_43673_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_62_fu_43673_p2.read()[0].to_bool())? result_26_2_2_reg_113474.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_26_2_fu_43529_p3() {
    result_2_i_26_2_fu_43529_p3 = (!brmerge_demorgan_i_2_60_fu_43514_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_60_fu_43514_p2.read()[0].to_bool())? result_26_2_fu_43523_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_26_fu_43570_p3() {
    result_2_i_26_fu_43570_p3 = (!tmp_13_25_0_2_reg_112805.read()[0].is_01())? sc_lv<9>(): ((tmp_13_25_0_2_reg_112805.read()[0].to_bool())? tmp_17_26_fu_43564_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_27_0_0_s_fu_43581_p3() {
    result_2_i_27_0_0_s_fu_43581_p3 = (!brmerge_demorgan_i_2_63_fu_43577_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_63_fu_43577_p2.read()[0].to_bool())? result_2_i_26_fu_43570_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_27_0_2_ca_fu_43612_p1() {
    result_2_i_27_0_2_ca_fu_43612_p1 = esl_sext<11,9>(result_2_i_27_0_2_fu_43604_p3.read());
}

void conv_3x3_strm::thread_result_2_i_27_0_2_fu_43604_p3() {
    result_2_i_27_0_2_fu_43604_p3 = (!brmerge_demorgan_i_2_64_fu_43589_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_64_fu_43589_p2.read()[0].to_bool())? result_27_0_2_fu_43598_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_27_1_0_s_fu_43758_p3() {
    result_2_i_27_1_0_s_fu_43758_p3 = (!brmerge_demorgan_i_2_66_fu_43754_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_66_fu_43754_p2.read()[0].to_bool())? result_2_i_27_1_fu_43748_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_27_1_2_fu_43789_p3() {
    result_2_i_27_1_2_fu_43789_p3 = (!brmerge_demorgan_i_2_67_fu_43766_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_67_fu_43766_p2.read()[0].to_bool())? result_27_1_2_fu_43783_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_27_1_fu_43748_p3() {
    result_2_i_27_1_fu_43748_p3 = (!brmerge_demorgan_i_2_65_reg_113479.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_65_reg_113479.read()[0].to_bool())? result_27_1_reg_113485.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_27_2_0_s_fu_43825_p3() {
    result_2_i_27_2_0_s_fu_43825_p3 = (!brmerge_demorgan_i_2_69_fu_43820_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_69_fu_43820_p2.read()[0].to_bool())? result_2_i_27_2_fu_43812_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_27_2_2_fu_43960_p3() {
    result_2_i_27_2_2_fu_43960_p3 = (!brmerge_demorgan_i_2_70_fu_43956_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_70_fu_43956_p2.read()[0].to_bool())? result_27_2_2_reg_113562.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_27_2_fu_43812_p3() {
    result_2_i_27_2_fu_43812_p3 = (!brmerge_demorgan_i_2_68_fu_43797_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_68_fu_43797_p2.read()[0].to_bool())? result_27_2_fu_43806_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_27_fu_43853_p3() {
    result_2_i_27_fu_43853_p3 = (!tmp_13_26_0_2_reg_112820.read()[0].is_01())? sc_lv<9>(): ((tmp_13_26_0_2_reg_112820.read()[0].to_bool())? tmp_17_27_fu_43847_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_28_0_0_s_fu_43864_p3() {
    result_2_i_28_0_0_s_fu_43864_p3 = (!brmerge_demorgan_i_2_71_fu_43860_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_71_fu_43860_p2.read()[0].to_bool())? result_2_i_27_fu_43853_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_28_0_2_ca_fu_43895_p1() {
    result_2_i_28_0_2_ca_fu_43895_p1 = esl_sext<11,9>(result_2_i_28_0_2_fu_43887_p3.read());
}

void conv_3x3_strm::thread_result_2_i_28_0_2_fu_43887_p3() {
    result_2_i_28_0_2_fu_43887_p3 = (!brmerge_demorgan_i_2_72_fu_43872_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_72_fu_43872_p2.read()[0].to_bool())? result_28_0_2_fu_43881_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_28_1_0_s_fu_44041_p3() {
    result_2_i_28_1_0_s_fu_44041_p3 = (!brmerge_demorgan_i_2_74_fu_44037_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_74_fu_44037_p2.read()[0].to_bool())? result_2_i_28_1_fu_44031_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_28_1_2_fu_44072_p3() {
    result_2_i_28_1_2_fu_44072_p3 = (!brmerge_demorgan_i_2_75_fu_44049_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_75_fu_44049_p2.read()[0].to_bool())? result_28_1_2_fu_44066_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_28_1_fu_44031_p3() {
    result_2_i_28_1_fu_44031_p3 = (!brmerge_demorgan_i_2_73_reg_113567.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_73_reg_113567.read()[0].to_bool())? result_28_1_reg_113573.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_28_2_0_s_fu_44108_p3() {
    result_2_i_28_2_0_s_fu_44108_p3 = (!brmerge_demorgan_i_2_77_fu_44103_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_77_fu_44103_p2.read()[0].to_bool())? result_2_i_28_2_fu_44095_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_28_2_2_fu_44243_p3() {
    result_2_i_28_2_2_fu_44243_p3 = (!brmerge_demorgan_i_2_78_fu_44239_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_78_fu_44239_p2.read()[0].to_bool())? result_28_2_2_reg_113651.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_28_2_fu_44095_p3() {
    result_2_i_28_2_fu_44095_p3 = (!brmerge_demorgan_i_2_76_fu_44080_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_76_fu_44080_p2.read()[0].to_bool())? result_28_2_fu_44089_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_28_fu_44136_p3() {
    result_2_i_28_fu_44136_p3 = (!tmp_13_27_0_2_reg_112908.read()[0].is_01())? sc_lv<9>(): ((tmp_13_27_0_2_reg_112908.read()[0].to_bool())? tmp_17_28_fu_44130_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_29_0_0_s_fu_44147_p3() {
    result_2_i_29_0_0_s_fu_44147_p3 = (!brmerge_demorgan_i_2_79_fu_44143_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_79_fu_44143_p2.read()[0].to_bool())? result_2_i_28_fu_44136_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_29_0_2_ca_fu_44178_p1() {
    result_2_i_29_0_2_ca_fu_44178_p1 = esl_sext<11,9>(result_2_i_29_0_2_fu_44170_p3.read());
}

void conv_3x3_strm::thread_result_2_i_29_0_2_fu_44170_p3() {
    result_2_i_29_0_2_fu_44170_p3 = (!brmerge_demorgan_i_2_80_fu_44155_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_80_fu_44155_p2.read()[0].to_bool())? result_29_0_2_fu_44164_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_29_1_0_s_fu_44324_p3() {
    result_2_i_29_1_0_s_fu_44324_p3 = (!brmerge_demorgan_i_2_82_fu_44320_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_82_fu_44320_p2.read()[0].to_bool())? result_2_i_29_1_fu_44314_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_29_1_2_fu_44355_p3() {
    result_2_i_29_1_2_fu_44355_p3 = (!brmerge_demorgan_i_2_83_fu_44332_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_83_fu_44332_p2.read()[0].to_bool())? result_29_1_2_fu_44349_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_29_1_fu_44314_p3() {
    result_2_i_29_1_fu_44314_p3 = (!brmerge_demorgan_i_2_81_reg_113656.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_81_reg_113656.read()[0].to_bool())? result_29_1_reg_113662.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_29_2_0_s_fu_44391_p3() {
    result_2_i_29_2_0_s_fu_44391_p3 = (!brmerge_demorgan_i_2_85_fu_44386_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_85_fu_44386_p2.read()[0].to_bool())? result_2_i_29_2_fu_44378_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_29_2_2_fu_44526_p3() {
    result_2_i_29_2_2_fu_44526_p3 = (!brmerge_demorgan_i_2_86_fu_44522_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_86_fu_44522_p2.read()[0].to_bool())? result_29_2_2_reg_113739.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_29_2_fu_44378_p3() {
    result_2_i_29_2_fu_44378_p3 = (!brmerge_demorgan_i_2_84_fu_44363_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_84_fu_44363_p2.read()[0].to_bool())? result_29_2_fu_44372_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_29_fu_44419_p3() {
    result_2_i_29_fu_44419_p3 = (!tmp_13_28_0_2_reg_112989.read()[0].is_01())? sc_lv<9>(): ((tmp_13_28_0_2_reg_112989.read()[0].to_bool())? tmp_17_29_fu_44413_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_2_0_0_s_fu_36506_p3() {
    result_2_i_2_0_0_s_fu_36506_p3 = (!brmerge_demorgan_i_2_fu_36502_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_fu_36502_p2.read()[0].to_bool())? result_2_i_2_fu_36495_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_2_0_2_cas_fu_36537_p1() {
    result_2_i_2_0_2_cas_fu_36537_p1 = esl_sext<11,9>(result_2_i_2_0_2_fu_36529_p3.read());
}

void conv_3x3_strm::thread_result_2_i_2_0_2_fu_36529_p3() {
    result_2_i_2_0_2_fu_36529_p3 = (!brmerge_demorgan_i_2_3_fu_36514_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_2_3_fu_36514_p2.read()[0].to_bool())? result_2_0_2_fu_36523_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_2_1_0_s_fu_36683_p3() {
    result_2_i_2_1_0_s_fu_36683_p3 = (!brmerge_demorgan_i_2_4_fu_36679_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_4_fu_36679_p2.read()[0].to_bool())? result_2_i_2_1_fu_36673_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_2_1_2_fu_36714_p3() {
    result_2_i_2_1_2_fu_36714_p3 = (!brmerge_demorgan_i_2_5_fu_36691_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_5_fu_36691_p2.read()[0].to_bool())? result_2_1_2_fu_36708_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_2_1_fu_36673_p3() {
    result_2_i_2_1_fu_36673_p3 = (!brmerge_demorgan_i_2_1_reg_111278.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_1_reg_111278.read()[0].to_bool())? result_2_1_reg_111284.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_2_2_0_s_fu_36750_p3() {
    result_2_i_2_2_0_s_fu_36750_p3 = (!brmerge_demorgan_i_2_6_fu_36745_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_6_fu_36745_p2.read()[0].to_bool())? result_2_i_2_2_fu_36737_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_2_2_2_fu_36885_p3() {
    result_2_i_2_2_2_fu_36885_p3 = (!brmerge_demorgan_i_2_7_fu_36881_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_7_fu_36881_p2.read()[0].to_bool())? result_2_2_2_reg_111354.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_2_2_fu_36737_p3() {
    result_2_i_2_2_fu_36737_p3 = (!brmerge_demorgan_i_2_2_fu_36722_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_2_2_fu_36722_p2.read()[0].to_bool())? result_2_2_fu_36731_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_2_fu_36495_p3() {
    result_2_i_2_fu_36495_p3 = (!tmp_13_0_0_2_reg_111102.read()[0].is_01())? sc_lv<9>(): ((tmp_13_0_0_2_reg_111102.read()[0].to_bool())? tmp_17_2_fu_36489_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_30_0_0_s_fu_44430_p3() {
    result_2_i_30_0_0_s_fu_44430_p3 = (!brmerge_demorgan_i_3_8_fu_44426_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_8_fu_44426_p2.read()[0].to_bool())? result_2_i_29_fu_44419_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_30_0_2_ca_fu_44461_p1() {
    result_2_i_30_0_2_ca_fu_44461_p1 = esl_sext<11,9>(result_2_i_30_0_2_fu_44453_p3.read());
}

void conv_3x3_strm::thread_result_2_i_30_0_2_fu_44453_p3() {
    result_2_i_30_0_2_fu_44453_p3 = (!brmerge_demorgan_i_3_9_fu_44438_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_9_fu_44438_p2.read()[0].to_bool())? result_30_0_2_fu_44447_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_30_1_0_s_fu_44607_p3() {
    result_2_i_30_1_0_s_fu_44607_p3 = (!brmerge_demorgan_i_3_10_fu_44603_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_10_fu_44603_p2.read()[0].to_bool())? result_2_i_30_1_fu_44597_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_30_1_2_fu_44638_p3() {
    result_2_i_30_1_2_fu_44638_p3 = (!brmerge_demorgan_i_3_11_fu_44615_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_11_fu_44615_p2.read()[0].to_bool())? result_30_1_2_fu_44632_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_30_1_fu_44597_p3() {
    result_2_i_30_1_fu_44597_p3 = (!brmerge_demorgan_i_3_87_reg_113744.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_87_reg_113744.read()[0].to_bool())? result_30_1_reg_113750.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_30_2_0_s_fu_44674_p3() {
    result_2_i_30_2_0_s_fu_44674_p3 = (!brmerge_demorgan_i_3_13_fu_44669_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_13_fu_44669_p2.read()[0].to_bool())? result_2_i_30_2_fu_44661_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_30_2_2_fu_44809_p3() {
    result_2_i_30_2_2_fu_44809_p3 = (!brmerge_demorgan_i_3_14_fu_44805_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_14_fu_44805_p2.read()[0].to_bool())? result_30_2_2_reg_113827.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_30_2_fu_44661_p3() {
    result_2_i_30_2_fu_44661_p3 = (!brmerge_demorgan_i_3_12_fu_44646_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_12_fu_44646_p2.read()[0].to_bool())? result_30_2_fu_44655_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_30_fu_44702_p3() {
    result_2_i_30_fu_44702_p3 = (!tmp_13_29_0_2_reg_113070.read()[0].is_01())? sc_lv<9>(): ((tmp_13_29_0_2_reg_113070.read()[0].to_bool())? tmp_17_30_fu_44696_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_31_0_0_s_fu_44713_p3() {
    result_2_i_31_0_0_s_fu_44713_p3 = (!brmerge_demorgan_i_3_15_fu_44709_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_15_fu_44709_p2.read()[0].to_bool())? result_2_i_30_fu_44702_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_31_0_2_ca_fu_44744_p1() {
    result_2_i_31_0_2_ca_fu_44744_p1 = esl_sext<11,9>(result_2_i_31_0_2_fu_44736_p3.read());
}

void conv_3x3_strm::thread_result_2_i_31_0_2_fu_44736_p3() {
    result_2_i_31_0_2_fu_44736_p3 = (!brmerge_demorgan_i_3_16_fu_44721_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_16_fu_44721_p2.read()[0].to_bool())? result_31_0_2_fu_44730_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_31_1_0_s_fu_44890_p3() {
    result_2_i_31_1_0_s_fu_44890_p3 = (!brmerge_demorgan_i_3_18_fu_44886_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_18_fu_44886_p2.read()[0].to_bool())? result_2_i_31_1_fu_44880_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_31_1_2_fu_44921_p3() {
    result_2_i_31_1_2_fu_44921_p3 = (!brmerge_demorgan_i_3_19_fu_44898_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_19_fu_44898_p2.read()[0].to_bool())? result_31_1_2_fu_44915_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_31_1_fu_44880_p3() {
    result_2_i_31_1_fu_44880_p3 = (!brmerge_demorgan_i_3_17_reg_113832.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_17_reg_113832.read()[0].to_bool())? result_31_1_reg_113838.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_31_2_0_s_fu_44957_p3() {
    result_2_i_31_2_0_s_fu_44957_p3 = (!brmerge_demorgan_i_3_21_fu_44952_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_21_fu_44952_p2.read()[0].to_bool())? result_2_i_31_2_fu_44944_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_31_2_2_fu_45092_p3() {
    result_2_i_31_2_2_fu_45092_p3 = (!brmerge_demorgan_i_3_22_fu_45088_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_22_fu_45088_p2.read()[0].to_bool())? result_31_2_2_reg_113916.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_31_2_fu_44944_p3() {
    result_2_i_31_2_fu_44944_p3 = (!brmerge_demorgan_i_3_20_fu_44929_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_20_fu_44929_p2.read()[0].to_bool())? result_31_2_fu_44938_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_31_fu_44985_p3() {
    result_2_i_31_fu_44985_p3 = (!tmp_13_30_0_2_reg_113085.read()[0].is_01())? sc_lv<9>(): ((tmp_13_30_0_2_reg_113085.read()[0].to_bool())? tmp_17_31_fu_44979_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_32_0_0_s_fu_44996_p3() {
    result_2_i_32_0_0_s_fu_44996_p3 = (!brmerge_demorgan_i_3_23_fu_44992_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_23_fu_44992_p2.read()[0].to_bool())? result_2_i_31_fu_44985_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_32_0_2_ca_fu_45027_p1() {
    result_2_i_32_0_2_ca_fu_45027_p1 = esl_sext<11,9>(result_2_i_32_0_2_fu_45019_p3.read());
}

void conv_3x3_strm::thread_result_2_i_32_0_2_fu_45019_p3() {
    result_2_i_32_0_2_fu_45019_p3 = (!brmerge_demorgan_i_3_24_fu_45004_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_24_fu_45004_p2.read()[0].to_bool())? result_32_0_2_fu_45013_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_32_1_0_s_fu_45173_p3() {
    result_2_i_32_1_0_s_fu_45173_p3 = (!brmerge_demorgan_i_3_26_fu_45169_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_26_fu_45169_p2.read()[0].to_bool())? result_2_i_32_1_fu_45163_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_32_1_2_fu_45204_p3() {
    result_2_i_32_1_2_fu_45204_p3 = (!brmerge_demorgan_i_3_27_fu_45181_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_27_fu_45181_p2.read()[0].to_bool())? result_32_1_2_fu_45198_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_32_1_fu_45163_p3() {
    result_2_i_32_1_fu_45163_p3 = (!brmerge_demorgan_i_3_25_reg_113921.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_25_reg_113921.read()[0].to_bool())? result_32_1_reg_113927.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_32_2_0_s_fu_45240_p3() {
    result_2_i_32_2_0_s_fu_45240_p3 = (!brmerge_demorgan_i_3_29_fu_45235_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_29_fu_45235_p2.read()[0].to_bool())? result_2_i_32_2_fu_45227_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_32_2_2_fu_45375_p3() {
    result_2_i_32_2_2_fu_45375_p3 = (!brmerge_demorgan_i_3_30_fu_45371_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_30_fu_45371_p2.read()[0].to_bool())? result_32_2_2_reg_114004.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_32_2_fu_45227_p3() {
    result_2_i_32_2_fu_45227_p3 = (!brmerge_demorgan_i_3_28_fu_45212_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_28_fu_45212_p2.read()[0].to_bool())? result_32_2_fu_45221_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_32_fu_45268_p3() {
    result_2_i_32_fu_45268_p3 = (!tmp_13_31_0_2_reg_113173.read()[0].is_01())? sc_lv<9>(): ((tmp_13_31_0_2_reg_113173.read()[0].to_bool())? tmp_17_32_fu_45262_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_33_0_0_s_fu_45279_p3() {
    result_2_i_33_0_0_s_fu_45279_p3 = (!brmerge_demorgan_i_3_31_fu_45275_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_31_fu_45275_p2.read()[0].to_bool())? result_2_i_32_fu_45268_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_33_0_2_ca_fu_45310_p1() {
    result_2_i_33_0_2_ca_fu_45310_p1 = esl_sext<11,9>(result_2_i_33_0_2_fu_45302_p3.read());
}

void conv_3x3_strm::thread_result_2_i_33_0_2_fu_45302_p3() {
    result_2_i_33_0_2_fu_45302_p3 = (!brmerge_demorgan_i_3_32_fu_45287_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_32_fu_45287_p2.read()[0].to_bool())? result_33_0_2_fu_45296_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_33_1_0_s_fu_45456_p3() {
    result_2_i_33_1_0_s_fu_45456_p3 = (!brmerge_demorgan_i_3_34_fu_45452_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_34_fu_45452_p2.read()[0].to_bool())? result_2_i_33_1_fu_45446_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_33_1_2_fu_45487_p3() {
    result_2_i_33_1_2_fu_45487_p3 = (!brmerge_demorgan_i_3_35_fu_45464_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_35_fu_45464_p2.read()[0].to_bool())? result_33_1_2_fu_45481_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_33_1_fu_45446_p3() {
    result_2_i_33_1_fu_45446_p3 = (!brmerge_demorgan_i_3_33_reg_114009.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_33_reg_114009.read()[0].to_bool())? result_33_1_reg_114015.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_33_2_0_s_fu_45523_p3() {
    result_2_i_33_2_0_s_fu_45523_p3 = (!brmerge_demorgan_i_3_37_fu_45518_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_37_fu_45518_p2.read()[0].to_bool())? result_2_i_33_2_fu_45510_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_33_2_2_fu_45658_p3() {
    result_2_i_33_2_2_fu_45658_p3 = (!brmerge_demorgan_i_3_38_fu_45654_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_38_fu_45654_p2.read()[0].to_bool())? result_33_2_2_reg_114092.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_33_2_fu_45510_p3() {
    result_2_i_33_2_fu_45510_p3 = (!brmerge_demorgan_i_3_36_fu_45495_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_36_fu_45495_p2.read()[0].to_bool())? result_33_2_fu_45504_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_33_fu_45551_p3() {
    result_2_i_33_fu_45551_p3 = (!tmp_13_32_0_2_reg_113254.read()[0].is_01())? sc_lv<9>(): ((tmp_13_32_0_2_reg_113254.read()[0].to_bool())? tmp_17_33_fu_45545_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_34_0_0_s_fu_45562_p3() {
    result_2_i_34_0_0_s_fu_45562_p3 = (!brmerge_demorgan_i_3_39_fu_45558_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_39_fu_45558_p2.read()[0].to_bool())? result_2_i_33_fu_45551_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_34_0_2_ca_fu_45593_p1() {
    result_2_i_34_0_2_ca_fu_45593_p1 = esl_sext<11,9>(result_2_i_34_0_2_fu_45585_p3.read());
}

void conv_3x3_strm::thread_result_2_i_34_0_2_fu_45585_p3() {
    result_2_i_34_0_2_fu_45585_p3 = (!brmerge_demorgan_i_3_40_fu_45570_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_40_fu_45570_p2.read()[0].to_bool())? result_34_0_2_fu_45579_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_34_1_0_s_fu_45739_p3() {
    result_2_i_34_1_0_s_fu_45739_p3 = (!brmerge_demorgan_i_3_42_fu_45735_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_42_fu_45735_p2.read()[0].to_bool())? result_2_i_34_1_fu_45729_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_34_1_2_fu_45770_p3() {
    result_2_i_34_1_2_fu_45770_p3 = (!brmerge_demorgan_i_3_43_fu_45747_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_43_fu_45747_p2.read()[0].to_bool())? result_34_1_2_fu_45764_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_34_1_fu_45729_p3() {
    result_2_i_34_1_fu_45729_p3 = (!brmerge_demorgan_i_3_41_reg_114097.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_41_reg_114097.read()[0].to_bool())? result_34_1_reg_114103.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_34_2_0_s_fu_45806_p3() {
    result_2_i_34_2_0_s_fu_45806_p3 = (!brmerge_demorgan_i_3_45_fu_45801_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_45_fu_45801_p2.read()[0].to_bool())? result_2_i_34_2_fu_45793_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_34_2_2_fu_45941_p3() {
    result_2_i_34_2_2_fu_45941_p3 = (!brmerge_demorgan_i_3_46_fu_45937_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_46_fu_45937_p2.read()[0].to_bool())? result_34_2_2_reg_114181.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_34_2_fu_45793_p3() {
    result_2_i_34_2_fu_45793_p3 = (!brmerge_demorgan_i_3_44_fu_45778_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_44_fu_45778_p2.read()[0].to_bool())? result_34_2_fu_45787_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_34_fu_45834_p3() {
    result_2_i_34_fu_45834_p3 = (!tmp_13_33_0_2_reg_113335.read()[0].is_01())? sc_lv<9>(): ((tmp_13_33_0_2_reg_113335.read()[0].to_bool())? tmp_17_34_fu_45828_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_35_0_0_s_fu_45845_p3() {
    result_2_i_35_0_0_s_fu_45845_p3 = (!brmerge_demorgan_i_3_47_fu_45841_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_47_fu_45841_p2.read()[0].to_bool())? result_2_i_34_fu_45834_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_35_0_2_ca_fu_45876_p1() {
    result_2_i_35_0_2_ca_fu_45876_p1 = esl_sext<11,9>(result_2_i_35_0_2_fu_45868_p3.read());
}

void conv_3x3_strm::thread_result_2_i_35_0_2_fu_45868_p3() {
    result_2_i_35_0_2_fu_45868_p3 = (!brmerge_demorgan_i_3_48_fu_45853_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_48_fu_45853_p2.read()[0].to_bool())? result_35_0_2_fu_45862_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_35_1_0_s_fu_46022_p3() {
    result_2_i_35_1_0_s_fu_46022_p3 = (!brmerge_demorgan_i_3_50_fu_46018_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_50_fu_46018_p2.read()[0].to_bool())? result_2_i_35_1_fu_46012_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_35_1_2_fu_46053_p3() {
    result_2_i_35_1_2_fu_46053_p3 = (!brmerge_demorgan_i_3_51_fu_46030_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_51_fu_46030_p2.read()[0].to_bool())? result_35_1_2_fu_46047_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_35_1_fu_46012_p3() {
    result_2_i_35_1_fu_46012_p3 = (!brmerge_demorgan_i_3_49_reg_114186.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_49_reg_114186.read()[0].to_bool())? result_35_1_reg_114192.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_35_2_0_s_fu_46089_p3() {
    result_2_i_35_2_0_s_fu_46089_p3 = (!brmerge_demorgan_i_3_53_fu_46084_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_53_fu_46084_p2.read()[0].to_bool())? result_2_i_35_2_fu_46076_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_35_2_2_fu_46224_p3() {
    result_2_i_35_2_2_fu_46224_p3 = (!brmerge_demorgan_i_3_54_fu_46220_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_54_fu_46220_p2.read()[0].to_bool())? result_35_2_2_reg_114269.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_35_2_fu_46076_p3() {
    result_2_i_35_2_fu_46076_p3 = (!brmerge_demorgan_i_3_52_fu_46061_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_52_fu_46061_p2.read()[0].to_bool())? result_35_2_fu_46070_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_35_fu_46117_p3() {
    result_2_i_35_fu_46117_p3 = (!tmp_13_34_0_2_reg_113350.read()[0].is_01())? sc_lv<9>(): ((tmp_13_34_0_2_reg_113350.read()[0].to_bool())? tmp_17_35_fu_46111_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_36_0_0_s_fu_46128_p3() {
    result_2_i_36_0_0_s_fu_46128_p3 = (!brmerge_demorgan_i_3_55_fu_46124_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_55_fu_46124_p2.read()[0].to_bool())? result_2_i_35_fu_46117_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_36_0_2_ca_fu_46159_p1() {
    result_2_i_36_0_2_ca_fu_46159_p1 = esl_sext<11,9>(result_2_i_36_0_2_fu_46151_p3.read());
}

void conv_3x3_strm::thread_result_2_i_36_0_2_fu_46151_p3() {
    result_2_i_36_0_2_fu_46151_p3 = (!brmerge_demorgan_i_3_56_fu_46136_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_56_fu_46136_p2.read()[0].to_bool())? result_36_0_2_fu_46145_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_36_1_0_s_fu_46305_p3() {
    result_2_i_36_1_0_s_fu_46305_p3 = (!brmerge_demorgan_i_3_58_fu_46301_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_58_fu_46301_p2.read()[0].to_bool())? result_2_i_36_1_fu_46295_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_36_1_2_fu_46336_p3() {
    result_2_i_36_1_2_fu_46336_p3 = (!brmerge_demorgan_i_3_59_fu_46313_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_59_fu_46313_p2.read()[0].to_bool())? result_36_1_2_fu_46330_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_36_1_fu_46295_p3() {
    result_2_i_36_1_fu_46295_p3 = (!brmerge_demorgan_i_3_57_reg_114274.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_57_reg_114274.read()[0].to_bool())? result_36_1_reg_114280.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_36_2_0_s_fu_46372_p3() {
    result_2_i_36_2_0_s_fu_46372_p3 = (!brmerge_demorgan_i_3_61_fu_46367_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_61_fu_46367_p2.read()[0].to_bool())? result_2_i_36_2_fu_46359_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_36_2_2_fu_46507_p3() {
    result_2_i_36_2_2_fu_46507_p3 = (!brmerge_demorgan_i_3_62_fu_46503_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_62_fu_46503_p2.read()[0].to_bool())? result_36_2_2_reg_114357.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_36_2_fu_46359_p3() {
    result_2_i_36_2_fu_46359_p3 = (!brmerge_demorgan_i_3_60_fu_46344_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_60_fu_46344_p2.read()[0].to_bool())? result_36_2_fu_46353_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_36_fu_46400_p3() {
    result_2_i_36_fu_46400_p3 = (!tmp_13_35_0_2_reg_113438.read()[0].is_01())? sc_lv<9>(): ((tmp_13_35_0_2_reg_113438.read()[0].to_bool())? tmp_17_36_fu_46394_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_37_0_0_s_fu_46411_p3() {
    result_2_i_37_0_0_s_fu_46411_p3 = (!brmerge_demorgan_i_3_63_fu_46407_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_63_fu_46407_p2.read()[0].to_bool())? result_2_i_36_fu_46400_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_37_0_2_ca_fu_46442_p1() {
    result_2_i_37_0_2_ca_fu_46442_p1 = esl_sext<11,9>(result_2_i_37_0_2_fu_46434_p3.read());
}

void conv_3x3_strm::thread_result_2_i_37_0_2_fu_46434_p3() {
    result_2_i_37_0_2_fu_46434_p3 = (!brmerge_demorgan_i_3_64_fu_46419_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_64_fu_46419_p2.read()[0].to_bool())? result_37_0_2_fu_46428_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_37_1_0_s_fu_46588_p3() {
    result_2_i_37_1_0_s_fu_46588_p3 = (!brmerge_demorgan_i_3_66_fu_46584_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_66_fu_46584_p2.read()[0].to_bool())? result_2_i_37_1_fu_46578_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_37_1_2_fu_46619_p3() {
    result_2_i_37_1_2_fu_46619_p3 = (!brmerge_demorgan_i_3_67_fu_46596_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_67_fu_46596_p2.read()[0].to_bool())? result_37_1_2_fu_46613_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_37_1_fu_46578_p3() {
    result_2_i_37_1_fu_46578_p3 = (!brmerge_demorgan_i_3_65_reg_114362.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_65_reg_114362.read()[0].to_bool())? result_37_1_reg_114368.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_37_2_0_s_fu_46655_p3() {
    result_2_i_37_2_0_s_fu_46655_p3 = (!brmerge_demorgan_i_3_69_fu_46650_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_69_fu_46650_p2.read()[0].to_bool())? result_2_i_37_2_fu_46642_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_37_2_2_fu_46790_p3() {
    result_2_i_37_2_2_fu_46790_p3 = (!brmerge_demorgan_i_3_70_fu_46786_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_70_fu_46786_p2.read()[0].to_bool())? result_37_2_2_reg_114446.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_37_2_fu_46642_p3() {
    result_2_i_37_2_fu_46642_p3 = (!brmerge_demorgan_i_3_68_fu_46627_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_68_fu_46627_p2.read()[0].to_bool())? result_37_2_fu_46636_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_37_fu_46683_p3() {
    result_2_i_37_fu_46683_p3 = (!tmp_13_36_0_2_reg_113519.read()[0].is_01())? sc_lv<9>(): ((tmp_13_36_0_2_reg_113519.read()[0].to_bool())? tmp_17_37_fu_46677_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_38_0_0_s_fu_46694_p3() {
    result_2_i_38_0_0_s_fu_46694_p3 = (!brmerge_demorgan_i_3_71_fu_46690_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_71_fu_46690_p2.read()[0].to_bool())? result_2_i_37_fu_46683_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_38_0_2_ca_fu_46725_p1() {
    result_2_i_38_0_2_ca_fu_46725_p1 = esl_sext<11,9>(result_2_i_38_0_2_fu_46717_p3.read());
}

void conv_3x3_strm::thread_result_2_i_38_0_2_fu_46717_p3() {
    result_2_i_38_0_2_fu_46717_p3 = (!brmerge_demorgan_i_3_72_fu_46702_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_72_fu_46702_p2.read()[0].to_bool())? result_38_0_2_fu_46711_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_38_1_0_s_fu_46871_p3() {
    result_2_i_38_1_0_s_fu_46871_p3 = (!brmerge_demorgan_i_3_74_fu_46867_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_74_fu_46867_p2.read()[0].to_bool())? result_2_i_38_1_fu_46861_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_38_1_2_fu_46902_p3() {
    result_2_i_38_1_2_fu_46902_p3 = (!brmerge_demorgan_i_3_75_fu_46879_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_75_fu_46879_p2.read()[0].to_bool())? result_38_1_2_fu_46896_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_38_1_fu_46861_p3() {
    result_2_i_38_1_fu_46861_p3 = (!brmerge_demorgan_i_3_73_reg_114451.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_73_reg_114451.read()[0].to_bool())? result_38_1_reg_114457.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_38_2_0_s_fu_46938_p3() {
    result_2_i_38_2_0_s_fu_46938_p3 = (!brmerge_demorgan_i_3_77_fu_46933_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_77_fu_46933_p2.read()[0].to_bool())? result_2_i_38_2_fu_46925_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_38_2_2_fu_47073_p3() {
    result_2_i_38_2_2_fu_47073_p3 = (!brmerge_demorgan_i_3_78_fu_47069_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_78_fu_47069_p2.read()[0].to_bool())? result_38_2_2_reg_114534.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_38_2_fu_46925_p3() {
    result_2_i_38_2_fu_46925_p3 = (!brmerge_demorgan_i_3_76_fu_46910_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_76_fu_46910_p2.read()[0].to_bool())? result_38_2_fu_46919_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_38_fu_46966_p3() {
    result_2_i_38_fu_46966_p3 = (!tmp_13_37_0_2_reg_113600.read()[0].is_01())? sc_lv<9>(): ((tmp_13_37_0_2_reg_113600.read()[0].to_bool())? tmp_17_38_fu_46960_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_39_0_0_s_fu_46977_p3() {
    result_2_i_39_0_0_s_fu_46977_p3 = (!brmerge_demorgan_i_3_79_fu_46973_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_79_fu_46973_p2.read()[0].to_bool())? result_2_i_38_fu_46966_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_39_0_2_ca_fu_47008_p1() {
    result_2_i_39_0_2_ca_fu_47008_p1 = esl_sext<11,9>(result_2_i_39_0_2_fu_47000_p3.read());
}

void conv_3x3_strm::thread_result_2_i_39_0_2_fu_47000_p3() {
    result_2_i_39_0_2_fu_47000_p3 = (!brmerge_demorgan_i_3_80_fu_46985_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_80_fu_46985_p2.read()[0].to_bool())? result_39_0_2_fu_46994_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_39_1_0_s_fu_47154_p3() {
    result_2_i_39_1_0_s_fu_47154_p3 = (!brmerge_demorgan_i_3_82_fu_47150_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_82_fu_47150_p2.read()[0].to_bool())? result_2_i_39_1_fu_47144_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_39_1_2_fu_47185_p3() {
    result_2_i_39_1_2_fu_47185_p3 = (!brmerge_demorgan_i_3_83_fu_47162_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_83_fu_47162_p2.read()[0].to_bool())? result_39_1_2_fu_47179_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_39_1_fu_47144_p3() {
    result_2_i_39_1_fu_47144_p3 = (!brmerge_demorgan_i_3_81_reg_114539.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_81_reg_114539.read()[0].to_bool())? result_39_1_reg_114545.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_39_2_0_s_fu_47221_p3() {
    result_2_i_39_2_0_s_fu_47221_p3 = (!brmerge_demorgan_i_3_85_fu_47216_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_85_fu_47216_p2.read()[0].to_bool())? result_2_i_39_2_fu_47208_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_39_2_2_fu_47356_p3() {
    result_2_i_39_2_2_fu_47356_p3 = (!brmerge_demorgan_i_3_86_fu_47352_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_86_fu_47352_p2.read()[0].to_bool())? result_39_2_2_reg_114622.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_39_2_fu_47208_p3() {
    result_2_i_39_2_fu_47208_p3 = (!brmerge_demorgan_i_3_84_fu_47193_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_84_fu_47193_p2.read()[0].to_bool())? result_39_2_fu_47202_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_39_fu_47249_p3() {
    result_2_i_39_fu_47249_p3 = (!tmp_13_38_0_2_reg_113615.read()[0].is_01())? sc_lv<9>(): ((tmp_13_38_0_2_reg_113615.read()[0].to_bool())? tmp_17_39_fu_47243_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_3_0_0_s_fu_36789_p3() {
    result_2_i_3_0_0_s_fu_36789_p3 = (!brmerge_demorgan_i_3_fu_36785_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_fu_36785_p2.read()[0].to_bool())? result_2_i_3_fu_36778_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_3_0_2_cas_fu_36820_p1() {
    result_2_i_3_0_2_cas_fu_36820_p1 = esl_sext<11,9>(result_2_i_3_0_2_fu_36812_p3.read());
}

void conv_3x3_strm::thread_result_2_i_3_0_2_fu_36812_p3() {
    result_2_i_3_0_2_fu_36812_p3 = (!brmerge_demorgan_i_3_3_fu_36797_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_3_3_fu_36797_p2.read()[0].to_bool())? result_3_0_2_fu_36806_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_3_1_0_s_fu_36966_p3() {
    result_2_i_3_1_0_s_fu_36966_p3 = (!brmerge_demorgan_i_3_4_fu_36962_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_4_fu_36962_p2.read()[0].to_bool())? result_2_i_3_1_fu_36956_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_3_1_2_fu_36997_p3() {
    result_2_i_3_1_2_fu_36997_p3 = (!brmerge_demorgan_i_3_5_fu_36974_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_5_fu_36974_p2.read()[0].to_bool())? result_3_1_2_fu_36991_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_3_1_fu_36956_p3() {
    result_2_i_3_1_fu_36956_p3 = (!brmerge_demorgan_i_3_1_reg_111359.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_1_reg_111359.read()[0].to_bool())? result_3_1_reg_111365.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_3_2_0_s_fu_37033_p3() {
    result_2_i_3_2_0_s_fu_37033_p3 = (!brmerge_demorgan_i_3_6_fu_37028_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_6_fu_37028_p2.read()[0].to_bool())? result_2_i_3_2_fu_37020_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_3_2_2_fu_37168_p3() {
    result_2_i_3_2_2_fu_37168_p3 = (!brmerge_demorgan_i_3_7_fu_37164_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_7_fu_37164_p2.read()[0].to_bool())? result_3_2_2_reg_111442.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_3_2_fu_37020_p3() {
    result_2_i_3_2_fu_37020_p3 = (!brmerge_demorgan_i_3_2_fu_37005_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_3_2_fu_37005_p2.read()[0].to_bool())? result_3_2_fu_37014_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_3_fu_36778_p3() {
    result_2_i_3_fu_36778_p3 = (!tmp_13_1_0_2_reg_111118.read()[0].is_01())? sc_lv<9>(): ((tmp_13_1_0_2_reg_111118.read()[0].to_bool())? tmp_17_3_fu_36772_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_40_0_0_s_fu_47260_p3() {
    result_2_i_40_0_0_s_fu_47260_p3 = (!brmerge_demorgan_i_4_8_fu_47256_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_8_fu_47256_p2.read()[0].to_bool())? result_2_i_39_fu_47249_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_40_0_2_ca_fu_47291_p1() {
    result_2_i_40_0_2_ca_fu_47291_p1 = esl_sext<11,9>(result_2_i_40_0_2_fu_47283_p3.read());
}

void conv_3x3_strm::thread_result_2_i_40_0_2_fu_47283_p3() {
    result_2_i_40_0_2_fu_47283_p3 = (!brmerge_demorgan_i_4_9_fu_47268_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_9_fu_47268_p2.read()[0].to_bool())? result_40_0_2_fu_47277_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_40_1_0_s_fu_47437_p3() {
    result_2_i_40_1_0_s_fu_47437_p3 = (!brmerge_demorgan_i_4_10_fu_47433_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_10_fu_47433_p2.read()[0].to_bool())? result_2_i_40_1_fu_47427_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_40_1_2_fu_47468_p3() {
    result_2_i_40_1_2_fu_47468_p3 = (!brmerge_demorgan_i_4_11_fu_47445_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_11_fu_47445_p2.read()[0].to_bool())? result_40_1_2_fu_47462_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_40_1_fu_47427_p3() {
    result_2_i_40_1_fu_47427_p3 = (!brmerge_demorgan_i_4_87_reg_114627.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_87_reg_114627.read()[0].to_bool())? result_40_1_reg_114633.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_40_2_0_s_fu_47504_p3() {
    result_2_i_40_2_0_s_fu_47504_p3 = (!brmerge_demorgan_i_4_13_fu_47499_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_13_fu_47499_p2.read()[0].to_bool())? result_2_i_40_2_fu_47491_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_40_2_2_fu_47639_p3() {
    result_2_i_40_2_2_fu_47639_p3 = (!brmerge_demorgan_i_4_14_fu_47635_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_14_fu_47635_p2.read()[0].to_bool())? result_40_2_2_reg_114711.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_40_2_fu_47491_p3() {
    result_2_i_40_2_fu_47491_p3 = (!brmerge_demorgan_i_4_12_fu_47476_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_12_fu_47476_p2.read()[0].to_bool())? result_40_2_fu_47485_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_40_fu_47532_p3() {
    result_2_i_40_fu_47532_p3 = (!tmp_13_39_0_2_reg_113703.read()[0].is_01())? sc_lv<9>(): ((tmp_13_39_0_2_reg_113703.read()[0].to_bool())? tmp_17_40_fu_47526_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_41_0_0_s_fu_47543_p3() {
    result_2_i_41_0_0_s_fu_47543_p3 = (!brmerge_demorgan_i_4_15_fu_47539_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_15_fu_47539_p2.read()[0].to_bool())? result_2_i_40_fu_47532_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_41_0_2_ca_fu_47574_p1() {
    result_2_i_41_0_2_ca_fu_47574_p1 = esl_sext<11,9>(result_2_i_41_0_2_fu_47566_p3.read());
}

void conv_3x3_strm::thread_result_2_i_41_0_2_fu_47566_p3() {
    result_2_i_41_0_2_fu_47566_p3 = (!brmerge_demorgan_i_4_16_fu_47551_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_16_fu_47551_p2.read()[0].to_bool())? result_41_0_2_fu_47560_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_41_1_0_s_fu_47720_p3() {
    result_2_i_41_1_0_s_fu_47720_p3 = (!brmerge_demorgan_i_4_18_fu_47716_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_18_fu_47716_p2.read()[0].to_bool())? result_2_i_41_1_fu_47710_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_41_1_2_fu_47751_p3() {
    result_2_i_41_1_2_fu_47751_p3 = (!brmerge_demorgan_i_4_19_fu_47728_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_19_fu_47728_p2.read()[0].to_bool())? result_41_1_2_fu_47745_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_41_1_fu_47710_p3() {
    result_2_i_41_1_fu_47710_p3 = (!brmerge_demorgan_i_4_17_reg_114716.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_17_reg_114716.read()[0].to_bool())? result_41_1_reg_114722.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_41_2_0_s_fu_47787_p3() {
    result_2_i_41_2_0_s_fu_47787_p3 = (!brmerge_demorgan_i_4_21_fu_47782_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_21_fu_47782_p2.read()[0].to_bool())? result_2_i_41_2_fu_47774_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_41_2_2_fu_47922_p3() {
    result_2_i_41_2_2_fu_47922_p3 = (!brmerge_demorgan_i_4_22_fu_47918_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_22_fu_47918_p2.read()[0].to_bool())? result_41_2_2_reg_114799.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_41_2_fu_47774_p3() {
    result_2_i_41_2_fu_47774_p3 = (!brmerge_demorgan_i_4_20_fu_47759_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_20_fu_47759_p2.read()[0].to_bool())? result_41_2_fu_47768_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_41_fu_47815_p3() {
    result_2_i_41_fu_47815_p3 = (!tmp_13_40_0_2_reg_113784.read()[0].is_01())? sc_lv<9>(): ((tmp_13_40_0_2_reg_113784.read()[0].to_bool())? tmp_17_41_fu_47809_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_42_0_0_s_fu_47826_p3() {
    result_2_i_42_0_0_s_fu_47826_p3 = (!brmerge_demorgan_i_4_23_fu_47822_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_23_fu_47822_p2.read()[0].to_bool())? result_2_i_41_fu_47815_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_42_0_2_ca_fu_47857_p1() {
    result_2_i_42_0_2_ca_fu_47857_p1 = esl_sext<11,9>(result_2_i_42_0_2_fu_47849_p3.read());
}

void conv_3x3_strm::thread_result_2_i_42_0_2_fu_47849_p3() {
    result_2_i_42_0_2_fu_47849_p3 = (!brmerge_demorgan_i_4_24_fu_47834_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_24_fu_47834_p2.read()[0].to_bool())? result_42_0_2_fu_47843_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_42_1_0_s_fu_48003_p3() {
    result_2_i_42_1_0_s_fu_48003_p3 = (!brmerge_demorgan_i_4_26_fu_47999_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_26_fu_47999_p2.read()[0].to_bool())? result_2_i_42_1_fu_47993_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_42_1_2_fu_48034_p3() {
    result_2_i_42_1_2_fu_48034_p3 = (!brmerge_demorgan_i_4_27_fu_48011_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_27_fu_48011_p2.read()[0].to_bool())? result_42_1_2_fu_48028_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_42_1_fu_47993_p3() {
    result_2_i_42_1_fu_47993_p3 = (!brmerge_demorgan_i_4_25_reg_114804.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_25_reg_114804.read()[0].to_bool())? result_42_1_reg_114810.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_42_2_0_s_fu_48070_p3() {
    result_2_i_42_2_0_s_fu_48070_p3 = (!brmerge_demorgan_i_4_29_fu_48065_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_29_fu_48065_p2.read()[0].to_bool())? result_2_i_42_2_fu_48057_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_42_2_2_fu_48205_p3() {
    result_2_i_42_2_2_fu_48205_p3 = (!brmerge_demorgan_i_4_30_fu_48201_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_30_fu_48201_p2.read()[0].to_bool())? result_42_2_2_reg_114887.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_42_2_fu_48057_p3() {
    result_2_i_42_2_fu_48057_p3 = (!brmerge_demorgan_i_4_28_fu_48042_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_28_fu_48042_p2.read()[0].to_bool())? result_42_2_fu_48051_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_42_fu_48098_p3() {
    result_2_i_42_fu_48098_p3 = (!tmp_13_41_0_2_reg_113865.read()[0].is_01())? sc_lv<9>(): ((tmp_13_41_0_2_reg_113865.read()[0].to_bool())? tmp_17_42_fu_48092_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_43_0_0_s_fu_48109_p3() {
    result_2_i_43_0_0_s_fu_48109_p3 = (!brmerge_demorgan_i_4_31_fu_48105_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_31_fu_48105_p2.read()[0].to_bool())? result_2_i_42_fu_48098_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_43_0_2_ca_fu_48140_p1() {
    result_2_i_43_0_2_ca_fu_48140_p1 = esl_sext<11,9>(result_2_i_43_0_2_fu_48132_p3.read());
}

void conv_3x3_strm::thread_result_2_i_43_0_2_fu_48132_p3() {
    result_2_i_43_0_2_fu_48132_p3 = (!brmerge_demorgan_i_4_32_fu_48117_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_32_fu_48117_p2.read()[0].to_bool())? result_43_0_2_fu_48126_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_43_1_0_s_fu_48286_p3() {
    result_2_i_43_1_0_s_fu_48286_p3 = (!brmerge_demorgan_i_4_34_fu_48282_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_34_fu_48282_p2.read()[0].to_bool())? result_2_i_43_1_fu_48276_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_43_1_2_fu_48317_p3() {
    result_2_i_43_1_2_fu_48317_p3 = (!brmerge_demorgan_i_4_35_fu_48294_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_35_fu_48294_p2.read()[0].to_bool())? result_43_1_2_fu_48311_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_43_1_fu_48276_p3() {
    result_2_i_43_1_fu_48276_p3 = (!brmerge_demorgan_i_4_33_reg_114892.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_33_reg_114892.read()[0].to_bool())? result_43_1_reg_114898.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_43_2_0_s_fu_48353_p3() {
    result_2_i_43_2_0_s_fu_48353_p3 = (!brmerge_demorgan_i_4_37_fu_48348_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_37_fu_48348_p2.read()[0].to_bool())? result_2_i_43_2_fu_48340_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_43_2_2_fu_48488_p3() {
    result_2_i_43_2_2_fu_48488_p3 = (!brmerge_demorgan_i_4_38_fu_48484_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_38_fu_48484_p2.read()[0].to_bool())? result_43_2_2_reg_114976.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_43_2_fu_48340_p3() {
    result_2_i_43_2_fu_48340_p3 = (!brmerge_demorgan_i_4_36_fu_48325_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_36_fu_48325_p2.read()[0].to_bool())? result_43_2_fu_48334_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_43_fu_48381_p3() {
    result_2_i_43_fu_48381_p3 = (!tmp_13_42_0_2_reg_113880.read()[0].is_01())? sc_lv<9>(): ((tmp_13_42_0_2_reg_113880.read()[0].to_bool())? tmp_17_43_fu_48375_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_44_0_0_s_fu_48392_p3() {
    result_2_i_44_0_0_s_fu_48392_p3 = (!brmerge_demorgan_i_4_39_fu_48388_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_39_fu_48388_p2.read()[0].to_bool())? result_2_i_43_fu_48381_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_44_0_2_ca_fu_48423_p1() {
    result_2_i_44_0_2_ca_fu_48423_p1 = esl_sext<11,9>(result_2_i_44_0_2_fu_48415_p3.read());
}

void conv_3x3_strm::thread_result_2_i_44_0_2_fu_48415_p3() {
    result_2_i_44_0_2_fu_48415_p3 = (!brmerge_demorgan_i_4_40_fu_48400_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_40_fu_48400_p2.read()[0].to_bool())? result_44_0_2_fu_48409_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_44_1_0_s_fu_48569_p3() {
    result_2_i_44_1_0_s_fu_48569_p3 = (!brmerge_demorgan_i_4_42_fu_48565_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_42_fu_48565_p2.read()[0].to_bool())? result_2_i_44_1_fu_48559_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_44_1_2_fu_48600_p3() {
    result_2_i_44_1_2_fu_48600_p3 = (!brmerge_demorgan_i_4_43_fu_48577_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_43_fu_48577_p2.read()[0].to_bool())? result_44_1_2_fu_48594_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_44_1_fu_48559_p3() {
    result_2_i_44_1_fu_48559_p3 = (!brmerge_demorgan_i_4_41_reg_114981.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_41_reg_114981.read()[0].to_bool())? result_44_1_reg_114987.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_44_2_0_s_fu_48636_p3() {
    result_2_i_44_2_0_s_fu_48636_p3 = (!brmerge_demorgan_i_4_45_fu_48631_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_45_fu_48631_p2.read()[0].to_bool())? result_2_i_44_2_fu_48623_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_44_2_2_fu_48771_p3() {
    result_2_i_44_2_2_fu_48771_p3 = (!brmerge_demorgan_i_4_46_fu_48767_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_46_fu_48767_p2.read()[0].to_bool())? result_44_2_2_reg_115064.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_44_2_fu_48623_p3() {
    result_2_i_44_2_fu_48623_p3 = (!brmerge_demorgan_i_4_44_fu_48608_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_44_fu_48608_p2.read()[0].to_bool())? result_44_2_fu_48617_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_44_fu_48664_p3() {
    result_2_i_44_fu_48664_p3 = (!tmp_13_43_0_2_reg_113968.read()[0].is_01())? sc_lv<9>(): ((tmp_13_43_0_2_reg_113968.read()[0].to_bool())? tmp_17_44_fu_48658_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_45_0_0_s_fu_48675_p3() {
    result_2_i_45_0_0_s_fu_48675_p3 = (!brmerge_demorgan_i_4_47_fu_48671_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_47_fu_48671_p2.read()[0].to_bool())? result_2_i_44_fu_48664_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_45_0_2_ca_fu_48706_p1() {
    result_2_i_45_0_2_ca_fu_48706_p1 = esl_sext<11,9>(result_2_i_45_0_2_fu_48698_p3.read());
}

void conv_3x3_strm::thread_result_2_i_45_0_2_fu_48698_p3() {
    result_2_i_45_0_2_fu_48698_p3 = (!brmerge_demorgan_i_4_48_fu_48683_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_48_fu_48683_p2.read()[0].to_bool())? result_45_0_2_fu_48692_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_45_1_0_s_fu_48852_p3() {
    result_2_i_45_1_0_s_fu_48852_p3 = (!brmerge_demorgan_i_4_50_fu_48848_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_50_fu_48848_p2.read()[0].to_bool())? result_2_i_45_1_fu_48842_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_45_1_2_fu_48883_p3() {
    result_2_i_45_1_2_fu_48883_p3 = (!brmerge_demorgan_i_4_51_fu_48860_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_51_fu_48860_p2.read()[0].to_bool())? result_45_1_2_fu_48877_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_45_1_fu_48842_p3() {
    result_2_i_45_1_fu_48842_p3 = (!brmerge_demorgan_i_4_49_reg_115069.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_49_reg_115069.read()[0].to_bool())? result_45_1_reg_115075.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_45_2_0_s_fu_48919_p3() {
    result_2_i_45_2_0_s_fu_48919_p3 = (!brmerge_demorgan_i_4_53_fu_48914_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_53_fu_48914_p2.read()[0].to_bool())? result_2_i_45_2_fu_48906_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_45_2_2_fu_49054_p3() {
    result_2_i_45_2_2_fu_49054_p3 = (!brmerge_demorgan_i_4_54_fu_49050_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_54_fu_49050_p2.read()[0].to_bool())? result_45_2_2_reg_115152.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_45_2_fu_48906_p3() {
    result_2_i_45_2_fu_48906_p3 = (!brmerge_demorgan_i_4_52_fu_48891_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_52_fu_48891_p2.read()[0].to_bool())? result_45_2_fu_48900_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_45_fu_48947_p3() {
    result_2_i_45_fu_48947_p3 = (!tmp_13_44_0_2_reg_114049.read()[0].is_01())? sc_lv<9>(): ((tmp_13_44_0_2_reg_114049.read()[0].to_bool())? tmp_17_45_fu_48941_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_46_0_0_s_fu_48958_p3() {
    result_2_i_46_0_0_s_fu_48958_p3 = (!brmerge_demorgan_i_4_55_fu_48954_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_55_fu_48954_p2.read()[0].to_bool())? result_2_i_45_fu_48947_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_46_0_2_ca_fu_48989_p1() {
    result_2_i_46_0_2_ca_fu_48989_p1 = esl_sext<11,9>(result_2_i_46_0_2_fu_48981_p3.read());
}

void conv_3x3_strm::thread_result_2_i_46_0_2_fu_48981_p3() {
    result_2_i_46_0_2_fu_48981_p3 = (!brmerge_demorgan_i_4_56_fu_48966_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_56_fu_48966_p2.read()[0].to_bool())? result_46_0_2_fu_48975_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_46_1_0_s_fu_49135_p3() {
    result_2_i_46_1_0_s_fu_49135_p3 = (!brmerge_demorgan_i_4_58_fu_49131_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_58_fu_49131_p2.read()[0].to_bool())? result_2_i_46_1_fu_49125_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_46_1_2_fu_49166_p3() {
    result_2_i_46_1_2_fu_49166_p3 = (!brmerge_demorgan_i_4_59_fu_49143_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_59_fu_49143_p2.read()[0].to_bool())? result_46_1_2_fu_49160_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_46_1_fu_49125_p3() {
    result_2_i_46_1_fu_49125_p3 = (!brmerge_demorgan_i_4_57_reg_115157.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_57_reg_115157.read()[0].to_bool())? result_46_1_reg_115163.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_46_2_0_s_fu_49202_p3() {
    result_2_i_46_2_0_s_fu_49202_p3 = (!brmerge_demorgan_i_4_61_fu_49197_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_61_fu_49197_p2.read()[0].to_bool())? result_2_i_46_2_fu_49189_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_46_2_2_fu_49337_p3() {
    result_2_i_46_2_2_fu_49337_p3 = (!brmerge_demorgan_i_4_62_fu_49333_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_62_fu_49333_p2.read()[0].to_bool())? result_46_2_2_reg_115241.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_46_2_fu_49189_p3() {
    result_2_i_46_2_fu_49189_p3 = (!brmerge_demorgan_i_4_60_fu_49174_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_60_fu_49174_p2.read()[0].to_bool())? result_46_2_fu_49183_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_46_fu_49230_p3() {
    result_2_i_46_fu_49230_p3 = (!tmp_13_45_0_2_reg_114130.read()[0].is_01())? sc_lv<9>(): ((tmp_13_45_0_2_reg_114130.read()[0].to_bool())? tmp_17_46_fu_49224_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_47_0_0_s_fu_49241_p3() {
    result_2_i_47_0_0_s_fu_49241_p3 = (!brmerge_demorgan_i_4_63_fu_49237_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_63_fu_49237_p2.read()[0].to_bool())? result_2_i_46_fu_49230_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_47_0_2_ca_fu_49272_p1() {
    result_2_i_47_0_2_ca_fu_49272_p1 = esl_sext<11,9>(result_2_i_47_0_2_fu_49264_p3.read());
}

void conv_3x3_strm::thread_result_2_i_47_0_2_fu_49264_p3() {
    result_2_i_47_0_2_fu_49264_p3 = (!brmerge_demorgan_i_4_64_fu_49249_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_64_fu_49249_p2.read()[0].to_bool())? result_47_0_2_fu_49258_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_47_1_0_s_fu_49418_p3() {
    result_2_i_47_1_0_s_fu_49418_p3 = (!brmerge_demorgan_i_4_66_fu_49414_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_66_fu_49414_p2.read()[0].to_bool())? result_2_i_47_1_fu_49408_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_47_1_2_fu_49449_p3() {
    result_2_i_47_1_2_fu_49449_p3 = (!brmerge_demorgan_i_4_67_fu_49426_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_67_fu_49426_p2.read()[0].to_bool())? result_47_1_2_fu_49443_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_47_1_fu_49408_p3() {
    result_2_i_47_1_fu_49408_p3 = (!brmerge_demorgan_i_4_65_reg_115246.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_65_reg_115246.read()[0].to_bool())? result_47_1_reg_115252.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_47_2_0_s_fu_49485_p3() {
    result_2_i_47_2_0_s_fu_49485_p3 = (!brmerge_demorgan_i_4_69_fu_49480_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_69_fu_49480_p2.read()[0].to_bool())? result_2_i_47_2_fu_49472_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_47_2_2_fu_49620_p3() {
    result_2_i_47_2_2_fu_49620_p3 = (!brmerge_demorgan_i_4_70_fu_49616_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_70_fu_49616_p2.read()[0].to_bool())? result_47_2_2_reg_115329.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_47_2_fu_49472_p3() {
    result_2_i_47_2_fu_49472_p3 = (!brmerge_demorgan_i_4_68_fu_49457_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_68_fu_49457_p2.read()[0].to_bool())? result_47_2_fu_49466_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_47_fu_49513_p3() {
    result_2_i_47_fu_49513_p3 = (!tmp_13_46_0_2_reg_114145.read()[0].is_01())? sc_lv<9>(): ((tmp_13_46_0_2_reg_114145.read()[0].to_bool())? tmp_17_47_fu_49507_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_48_0_0_s_fu_49524_p3() {
    result_2_i_48_0_0_s_fu_49524_p3 = (!brmerge_demorgan_i_4_71_fu_49520_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_71_fu_49520_p2.read()[0].to_bool())? result_2_i_47_fu_49513_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_48_0_2_ca_fu_49555_p1() {
    result_2_i_48_0_2_ca_fu_49555_p1 = esl_sext<11,9>(result_2_i_48_0_2_fu_49547_p3.read());
}

void conv_3x3_strm::thread_result_2_i_48_0_2_fu_49547_p3() {
    result_2_i_48_0_2_fu_49547_p3 = (!brmerge_demorgan_i_4_72_fu_49532_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_72_fu_49532_p2.read()[0].to_bool())? result_48_0_2_fu_49541_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_48_1_0_s_fu_49701_p3() {
    result_2_i_48_1_0_s_fu_49701_p3 = (!brmerge_demorgan_i_4_74_fu_49697_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_74_fu_49697_p2.read()[0].to_bool())? result_2_i_48_1_fu_49691_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_48_1_2_fu_49732_p3() {
    result_2_i_48_1_2_fu_49732_p3 = (!brmerge_demorgan_i_4_75_fu_49709_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_75_fu_49709_p2.read()[0].to_bool())? result_48_1_2_fu_49726_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_48_1_fu_49691_p3() {
    result_2_i_48_1_fu_49691_p3 = (!brmerge_demorgan_i_4_73_reg_115334.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_73_reg_115334.read()[0].to_bool())? result_48_1_reg_115340.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_48_2_0_s_fu_49768_p3() {
    result_2_i_48_2_0_s_fu_49768_p3 = (!brmerge_demorgan_i_4_77_fu_49763_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_77_fu_49763_p2.read()[0].to_bool())? result_2_i_48_2_fu_49755_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_48_2_2_fu_49903_p3() {
    result_2_i_48_2_2_fu_49903_p3 = (!brmerge_demorgan_i_4_78_fu_49899_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_78_fu_49899_p2.read()[0].to_bool())? result_48_2_2_reg_115417.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_48_2_fu_49755_p3() {
    result_2_i_48_2_fu_49755_p3 = (!brmerge_demorgan_i_4_76_fu_49740_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_76_fu_49740_p2.read()[0].to_bool())? result_48_2_fu_49749_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_48_fu_49796_p3() {
    result_2_i_48_fu_49796_p3 = (!tmp_13_47_0_2_reg_114233.read()[0].is_01())? sc_lv<9>(): ((tmp_13_47_0_2_reg_114233.read()[0].to_bool())? tmp_17_48_fu_49790_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_49_0_0_s_fu_49807_p3() {
    result_2_i_49_0_0_s_fu_49807_p3 = (!brmerge_demorgan_i_4_79_fu_49803_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_79_fu_49803_p2.read()[0].to_bool())? result_2_i_48_fu_49796_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_49_0_2_ca_fu_49838_p1() {
    result_2_i_49_0_2_ca_fu_49838_p1 = esl_sext<11,9>(result_2_i_49_0_2_fu_49830_p3.read());
}

void conv_3x3_strm::thread_result_2_i_49_0_2_fu_49830_p3() {
    result_2_i_49_0_2_fu_49830_p3 = (!brmerge_demorgan_i_4_80_fu_49815_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_80_fu_49815_p2.read()[0].to_bool())? result_49_0_2_fu_49824_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_49_1_0_s_fu_49984_p3() {
    result_2_i_49_1_0_s_fu_49984_p3 = (!brmerge_demorgan_i_4_82_fu_49980_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_82_fu_49980_p2.read()[0].to_bool())? result_2_i_49_1_fu_49974_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_49_1_2_fu_50015_p3() {
    result_2_i_49_1_2_fu_50015_p3 = (!brmerge_demorgan_i_4_83_fu_49992_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_83_fu_49992_p2.read()[0].to_bool())? result_49_1_2_fu_50009_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_49_1_fu_49974_p3() {
    result_2_i_49_1_fu_49974_p3 = (!brmerge_demorgan_i_4_81_reg_115422.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_81_reg_115422.read()[0].to_bool())? result_49_1_reg_115428.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_49_2_0_s_fu_50051_p3() {
    result_2_i_49_2_0_s_fu_50051_p3 = (!brmerge_demorgan_i_4_85_fu_50046_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_85_fu_50046_p2.read()[0].to_bool())? result_2_i_49_2_fu_50038_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_49_2_2_fu_50186_p3() {
    result_2_i_49_2_2_fu_50186_p3 = (!brmerge_demorgan_i_4_86_fu_50182_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_86_fu_50182_p2.read()[0].to_bool())? result_49_2_2_reg_115506.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_49_2_fu_50038_p3() {
    result_2_i_49_2_fu_50038_p3 = (!brmerge_demorgan_i_4_84_fu_50023_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_84_fu_50023_p2.read()[0].to_bool())? result_49_2_fu_50032_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_49_fu_50079_p3() {
    result_2_i_49_fu_50079_p3 = (!tmp_13_48_0_2_reg_114314.read()[0].is_01())? sc_lv<9>(): ((tmp_13_48_0_2_reg_114314.read()[0].to_bool())? tmp_17_49_fu_50073_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_4_0_0_s_fu_37072_p3() {
    result_2_i_4_0_0_s_fu_37072_p3 = (!brmerge_demorgan_i_4_fu_37068_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_fu_37068_p2.read()[0].to_bool())? result_2_i_4_fu_37061_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_4_0_2_cas_fu_37103_p1() {
    result_2_i_4_0_2_cas_fu_37103_p1 = esl_sext<11,9>(result_2_i_4_0_2_fu_37095_p3.read());
}

void conv_3x3_strm::thread_result_2_i_4_0_2_fu_37095_p3() {
    result_2_i_4_0_2_fu_37095_p3 = (!brmerge_demorgan_i_4_3_fu_37080_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_4_3_fu_37080_p2.read()[0].to_bool())? result_4_0_2_fu_37089_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_4_1_0_s_fu_37249_p3() {
    result_2_i_4_1_0_s_fu_37249_p3 = (!brmerge_demorgan_i_4_4_fu_37245_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_4_fu_37245_p2.read()[0].to_bool())? result_2_i_4_1_fu_37239_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_4_1_2_fu_37280_p3() {
    result_2_i_4_1_2_fu_37280_p3 = (!brmerge_demorgan_i_4_5_fu_37257_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_5_fu_37257_p2.read()[0].to_bool())? result_4_1_2_fu_37274_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_4_1_fu_37239_p3() {
    result_2_i_4_1_fu_37239_p3 = (!brmerge_demorgan_i_4_1_reg_111447.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_1_reg_111447.read()[0].to_bool())? result_4_1_reg_111453.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_4_2_0_s_fu_37316_p3() {
    result_2_i_4_2_0_s_fu_37316_p3 = (!brmerge_demorgan_i_4_6_fu_37311_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_6_fu_37311_p2.read()[0].to_bool())? result_2_i_4_2_fu_37303_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_4_2_2_fu_37451_p3() {
    result_2_i_4_2_2_fu_37451_p3 = (!brmerge_demorgan_i_4_7_fu_37447_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_7_fu_37447_p2.read()[0].to_bool())? result_4_2_2_reg_111531.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_4_2_fu_37303_p3() {
    result_2_i_4_2_fu_37303_p3 = (!brmerge_demorgan_i_4_2_fu_37288_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_4_2_fu_37288_p2.read()[0].to_bool())? result_4_2_fu_37297_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_4_fu_37061_p3() {
    result_2_i_4_fu_37061_p3 = (!tmp_13_2_0_2_reg_111242.read()[0].is_01())? sc_lv<9>(): ((tmp_13_2_0_2_reg_111242.read()[0].to_bool())? tmp_17_4_fu_37055_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_50_0_0_s_fu_50090_p3() {
    result_2_i_50_0_0_s_fu_50090_p3 = (!brmerge_demorgan_i_5_8_fu_50086_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_8_fu_50086_p2.read()[0].to_bool())? result_2_i_49_fu_50079_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_50_0_2_ca_fu_50121_p1() {
    result_2_i_50_0_2_ca_fu_50121_p1 = esl_sext<11,9>(result_2_i_50_0_2_fu_50113_p3.read());
}

void conv_3x3_strm::thread_result_2_i_50_0_2_fu_50113_p3() {
    result_2_i_50_0_2_fu_50113_p3 = (!brmerge_demorgan_i_5_9_fu_50098_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_9_fu_50098_p2.read()[0].to_bool())? result_50_0_2_fu_50107_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_50_1_0_s_fu_50267_p3() {
    result_2_i_50_1_0_s_fu_50267_p3 = (!brmerge_demorgan_i_5_10_fu_50263_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_10_fu_50263_p2.read()[0].to_bool())? result_2_i_50_1_fu_50257_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_50_1_2_fu_50298_p3() {
    result_2_i_50_1_2_fu_50298_p3 = (!brmerge_demorgan_i_5_11_fu_50275_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_11_fu_50275_p2.read()[0].to_bool())? result_50_1_2_fu_50292_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_50_1_fu_50257_p3() {
    result_2_i_50_1_fu_50257_p3 = (!brmerge_demorgan_i_5_87_reg_115511.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_87_reg_115511.read()[0].to_bool())? result_50_1_reg_115517.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_50_2_0_s_fu_50334_p3() {
    result_2_i_50_2_0_s_fu_50334_p3 = (!brmerge_demorgan_i_5_13_fu_50329_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_13_fu_50329_p2.read()[0].to_bool())? result_2_i_50_2_fu_50321_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_50_2_2_fu_50469_p3() {
    result_2_i_50_2_2_fu_50469_p3 = (!brmerge_demorgan_i_5_14_fu_50465_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_14_fu_50465_p2.read()[0].to_bool())? result_50_2_2_reg_115594.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_50_2_fu_50321_p3() {
    result_2_i_50_2_fu_50321_p3 = (!brmerge_demorgan_i_5_12_fu_50306_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_12_fu_50306_p2.read()[0].to_bool())? result_50_2_fu_50315_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_50_fu_50362_p3() {
    result_2_i_50_fu_50362_p3 = (!tmp_13_49_0_2_reg_114395.read()[0].is_01())? sc_lv<9>(): ((tmp_13_49_0_2_reg_114395.read()[0].to_bool())? tmp_17_50_fu_50356_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_51_0_0_s_fu_50373_p3() {
    result_2_i_51_0_0_s_fu_50373_p3 = (!brmerge_demorgan_i_5_15_fu_50369_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_15_fu_50369_p2.read()[0].to_bool())? result_2_i_50_fu_50362_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_51_0_2_ca_fu_50404_p1() {
    result_2_i_51_0_2_ca_fu_50404_p1 = esl_sext<11,9>(result_2_i_51_0_2_fu_50396_p3.read());
}

void conv_3x3_strm::thread_result_2_i_51_0_2_fu_50396_p3() {
    result_2_i_51_0_2_fu_50396_p3 = (!brmerge_demorgan_i_5_16_fu_50381_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_16_fu_50381_p2.read()[0].to_bool())? result_51_0_2_fu_50390_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_51_1_0_s_fu_50550_p3() {
    result_2_i_51_1_0_s_fu_50550_p3 = (!brmerge_demorgan_i_5_18_fu_50546_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_18_fu_50546_p2.read()[0].to_bool())? result_2_i_51_1_fu_50540_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_51_1_2_fu_50581_p3() {
    result_2_i_51_1_2_fu_50581_p3 = (!brmerge_demorgan_i_5_19_fu_50558_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_19_fu_50558_p2.read()[0].to_bool())? result_51_1_2_fu_50575_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_51_1_fu_50540_p3() {
    result_2_i_51_1_fu_50540_p3 = (!brmerge_demorgan_i_5_17_reg_115599.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_17_reg_115599.read()[0].to_bool())? result_51_1_reg_115605.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_51_2_0_s_fu_50617_p3() {
    result_2_i_51_2_0_s_fu_50617_p3 = (!brmerge_demorgan_i_5_21_fu_50612_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_21_fu_50612_p2.read()[0].to_bool())? result_2_i_51_2_fu_50604_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_51_2_2_fu_50752_p3() {
    result_2_i_51_2_2_fu_50752_p3 = (!brmerge_demorgan_i_5_22_fu_50748_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_22_fu_50748_p2.read()[0].to_bool())? result_51_2_2_reg_115682.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_51_2_fu_50604_p3() {
    result_2_i_51_2_fu_50604_p3 = (!brmerge_demorgan_i_5_20_fu_50589_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_20_fu_50589_p2.read()[0].to_bool())? result_51_2_fu_50598_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_51_fu_50645_p3() {
    result_2_i_51_fu_50645_p3 = (!tmp_13_50_0_2_reg_114410.read()[0].is_01())? sc_lv<9>(): ((tmp_13_50_0_2_reg_114410.read()[0].to_bool())? tmp_17_51_fu_50639_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_52_0_0_s_fu_50656_p3() {
    result_2_i_52_0_0_s_fu_50656_p3 = (!brmerge_demorgan_i_5_23_fu_50652_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_23_fu_50652_p2.read()[0].to_bool())? result_2_i_51_fu_50645_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_52_0_2_ca_fu_50687_p1() {
    result_2_i_52_0_2_ca_fu_50687_p1 = esl_sext<11,9>(result_2_i_52_0_2_fu_50679_p3.read());
}

void conv_3x3_strm::thread_result_2_i_52_0_2_fu_50679_p3() {
    result_2_i_52_0_2_fu_50679_p3 = (!brmerge_demorgan_i_5_24_fu_50664_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_24_fu_50664_p2.read()[0].to_bool())? result_52_0_2_fu_50673_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_52_1_0_s_fu_50833_p3() {
    result_2_i_52_1_0_s_fu_50833_p3 = (!brmerge_demorgan_i_5_26_fu_50829_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_26_fu_50829_p2.read()[0].to_bool())? result_2_i_52_1_fu_50823_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_52_1_2_fu_50864_p3() {
    result_2_i_52_1_2_fu_50864_p3 = (!brmerge_demorgan_i_5_27_fu_50841_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_27_fu_50841_p2.read()[0].to_bool())? result_52_1_2_fu_50858_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_52_1_fu_50823_p3() {
    result_2_i_52_1_fu_50823_p3 = (!brmerge_demorgan_i_5_25_reg_115687.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_25_reg_115687.read()[0].to_bool())? result_52_1_reg_115693.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_52_2_0_s_fu_50900_p3() {
    result_2_i_52_2_0_s_fu_50900_p3 = (!brmerge_demorgan_i_5_29_fu_50895_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_29_fu_50895_p2.read()[0].to_bool())? result_2_i_52_2_fu_50887_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_52_2_2_fu_51035_p3() {
    result_2_i_52_2_2_fu_51035_p3 = (!brmerge_demorgan_i_5_30_fu_51031_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_30_fu_51031_p2.read()[0].to_bool())? result_52_2_2_reg_115771.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_52_2_fu_50887_p3() {
    result_2_i_52_2_fu_50887_p3 = (!brmerge_demorgan_i_5_28_fu_50872_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_28_fu_50872_p2.read()[0].to_bool())? result_52_2_fu_50881_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_52_fu_50928_p3() {
    result_2_i_52_fu_50928_p3 = (!tmp_13_51_0_2_reg_114498.read()[0].is_01())? sc_lv<9>(): ((tmp_13_51_0_2_reg_114498.read()[0].to_bool())? tmp_17_52_fu_50922_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_53_0_0_s_fu_50939_p3() {
    result_2_i_53_0_0_s_fu_50939_p3 = (!brmerge_demorgan_i_5_31_fu_50935_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_31_fu_50935_p2.read()[0].to_bool())? result_2_i_52_fu_50928_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_53_0_2_ca_fu_50970_p1() {
    result_2_i_53_0_2_ca_fu_50970_p1 = esl_sext<11,9>(result_2_i_53_0_2_fu_50962_p3.read());
}

void conv_3x3_strm::thread_result_2_i_53_0_2_fu_50962_p3() {
    result_2_i_53_0_2_fu_50962_p3 = (!brmerge_demorgan_i_5_32_fu_50947_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_32_fu_50947_p2.read()[0].to_bool())? result_53_0_2_fu_50956_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_53_1_0_s_fu_51116_p3() {
    result_2_i_53_1_0_s_fu_51116_p3 = (!brmerge_demorgan_i_5_34_fu_51112_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_34_fu_51112_p2.read()[0].to_bool())? result_2_i_53_1_fu_51106_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_53_1_2_fu_51147_p3() {
    result_2_i_53_1_2_fu_51147_p3 = (!brmerge_demorgan_i_5_35_fu_51124_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_35_fu_51124_p2.read()[0].to_bool())? result_53_1_2_fu_51141_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_53_1_fu_51106_p3() {
    result_2_i_53_1_fu_51106_p3 = (!brmerge_demorgan_i_5_33_reg_115776.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_33_reg_115776.read()[0].to_bool())? result_53_1_reg_115782.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_53_2_0_s_fu_51183_p3() {
    result_2_i_53_2_0_s_fu_51183_p3 = (!brmerge_demorgan_i_5_37_fu_51178_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_37_fu_51178_p2.read()[0].to_bool())? result_2_i_53_2_fu_51170_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_53_2_2_fu_51318_p3() {
    result_2_i_53_2_2_fu_51318_p3 = (!brmerge_demorgan_i_5_38_fu_51314_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_38_fu_51314_p2.read()[0].to_bool())? result_53_2_2_reg_115859.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_53_2_fu_51170_p3() {
    result_2_i_53_2_fu_51170_p3 = (!brmerge_demorgan_i_5_36_fu_51155_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_36_fu_51155_p2.read()[0].to_bool())? result_53_2_fu_51164_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_53_fu_51211_p3() {
    result_2_i_53_fu_51211_p3 = (!tmp_13_52_0_2_reg_114579.read()[0].is_01())? sc_lv<9>(): ((tmp_13_52_0_2_reg_114579.read()[0].to_bool())? tmp_17_53_fu_51205_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_54_0_0_s_fu_51222_p3() {
    result_2_i_54_0_0_s_fu_51222_p3 = (!brmerge_demorgan_i_5_39_fu_51218_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_39_fu_51218_p2.read()[0].to_bool())? result_2_i_53_fu_51211_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_54_0_2_ca_fu_51253_p1() {
    result_2_i_54_0_2_ca_fu_51253_p1 = esl_sext<11,9>(result_2_i_54_0_2_fu_51245_p3.read());
}

void conv_3x3_strm::thread_result_2_i_54_0_2_fu_51245_p3() {
    result_2_i_54_0_2_fu_51245_p3 = (!brmerge_demorgan_i_5_40_fu_51230_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_40_fu_51230_p2.read()[0].to_bool())? result_54_0_2_fu_51239_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_54_1_0_s_fu_51399_p3() {
    result_2_i_54_1_0_s_fu_51399_p3 = (!brmerge_demorgan_i_5_42_fu_51395_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_42_fu_51395_p2.read()[0].to_bool())? result_2_i_54_1_fu_51389_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_54_1_2_fu_51430_p3() {
    result_2_i_54_1_2_fu_51430_p3 = (!brmerge_demorgan_i_5_43_fu_51407_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_43_fu_51407_p2.read()[0].to_bool())? result_54_1_2_fu_51424_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_54_1_fu_51389_p3() {
    result_2_i_54_1_fu_51389_p3 = (!brmerge_demorgan_i_5_41_reg_115864.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_41_reg_115864.read()[0].to_bool())? result_54_1_reg_115870.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_54_2_0_s_fu_51466_p3() {
    result_2_i_54_2_0_s_fu_51466_p3 = (!brmerge_demorgan_i_5_45_fu_51461_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_45_fu_51461_p2.read()[0].to_bool())? result_2_i_54_2_fu_51453_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_54_2_2_fu_51601_p3() {
    result_2_i_54_2_2_fu_51601_p3 = (!brmerge_demorgan_i_5_46_fu_51597_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_46_fu_51597_p2.read()[0].to_bool())? result_54_2_2_reg_115947.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_54_2_fu_51453_p3() {
    result_2_i_54_2_fu_51453_p3 = (!brmerge_demorgan_i_5_44_fu_51438_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_44_fu_51438_p2.read()[0].to_bool())? result_54_2_fu_51447_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_54_fu_51494_p3() {
    result_2_i_54_fu_51494_p3 = (!tmp_13_53_0_2_reg_114660.read()[0].is_01())? sc_lv<9>(): ((tmp_13_53_0_2_reg_114660.read()[0].to_bool())? tmp_17_54_fu_51488_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_55_0_0_s_fu_51505_p3() {
    result_2_i_55_0_0_s_fu_51505_p3 = (!brmerge_demorgan_i_5_47_fu_51501_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_47_fu_51501_p2.read()[0].to_bool())? result_2_i_54_fu_51494_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_55_0_2_ca_fu_51536_p1() {
    result_2_i_55_0_2_ca_fu_51536_p1 = esl_sext<11,9>(result_2_i_55_0_2_fu_51528_p3.read());
}

void conv_3x3_strm::thread_result_2_i_55_0_2_fu_51528_p3() {
    result_2_i_55_0_2_fu_51528_p3 = (!brmerge_demorgan_i_5_48_fu_51513_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_48_fu_51513_p2.read()[0].to_bool())? result_55_0_2_fu_51522_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_55_1_0_s_fu_51682_p3() {
    result_2_i_55_1_0_s_fu_51682_p3 = (!brmerge_demorgan_i_5_50_fu_51678_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_50_fu_51678_p2.read()[0].to_bool())? result_2_i_55_1_fu_51672_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_55_1_2_fu_51713_p3() {
    result_2_i_55_1_2_fu_51713_p3 = (!brmerge_demorgan_i_5_51_fu_51690_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_51_fu_51690_p2.read()[0].to_bool())? result_55_1_2_fu_51707_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_55_1_fu_51672_p3() {
    result_2_i_55_1_fu_51672_p3 = (!brmerge_demorgan_i_5_49_reg_115952.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_49_reg_115952.read()[0].to_bool())? result_55_1_reg_115958.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_55_2_0_s_fu_51749_p3() {
    result_2_i_55_2_0_s_fu_51749_p3 = (!brmerge_demorgan_i_5_53_fu_51744_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_53_fu_51744_p2.read()[0].to_bool())? result_2_i_55_2_fu_51736_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_55_2_2_fu_51884_p3() {
    result_2_i_55_2_2_fu_51884_p3 = (!brmerge_demorgan_i_5_54_fu_51880_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_54_fu_51880_p2.read()[0].to_bool())? result_55_2_2_reg_116036.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_55_2_fu_51736_p3() {
    result_2_i_55_2_fu_51736_p3 = (!brmerge_demorgan_i_5_52_fu_51721_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_52_fu_51721_p2.read()[0].to_bool())? result_55_2_fu_51730_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_55_fu_51777_p3() {
    result_2_i_55_fu_51777_p3 = (!tmp_13_54_0_2_reg_114675.read()[0].is_01())? sc_lv<9>(): ((tmp_13_54_0_2_reg_114675.read()[0].to_bool())? tmp_17_55_fu_51771_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_56_0_0_s_fu_51788_p3() {
    result_2_i_56_0_0_s_fu_51788_p3 = (!brmerge_demorgan_i_5_55_fu_51784_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_55_fu_51784_p2.read()[0].to_bool())? result_2_i_55_fu_51777_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_56_0_2_ca_fu_51819_p1() {
    result_2_i_56_0_2_ca_fu_51819_p1 = esl_sext<11,9>(result_2_i_56_0_2_fu_51811_p3.read());
}

void conv_3x3_strm::thread_result_2_i_56_0_2_fu_51811_p3() {
    result_2_i_56_0_2_fu_51811_p3 = (!brmerge_demorgan_i_5_56_fu_51796_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_56_fu_51796_p2.read()[0].to_bool())? result_56_0_2_fu_51805_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_56_1_0_s_fu_51965_p3() {
    result_2_i_56_1_0_s_fu_51965_p3 = (!brmerge_demorgan_i_5_58_fu_51961_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_58_fu_51961_p2.read()[0].to_bool())? result_2_i_56_1_fu_51955_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_56_1_2_fu_51996_p3() {
    result_2_i_56_1_2_fu_51996_p3 = (!brmerge_demorgan_i_5_59_fu_51973_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_59_fu_51973_p2.read()[0].to_bool())? result_56_1_2_fu_51990_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_56_1_fu_51955_p3() {
    result_2_i_56_1_fu_51955_p3 = (!brmerge_demorgan_i_5_57_reg_116041.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_57_reg_116041.read()[0].to_bool())? result_56_1_reg_116047.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_56_2_0_s_fu_52032_p3() {
    result_2_i_56_2_0_s_fu_52032_p3 = (!brmerge_demorgan_i_5_61_fu_52027_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_61_fu_52027_p2.read()[0].to_bool())? result_2_i_56_2_fu_52019_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_56_2_2_fu_52167_p3() {
    result_2_i_56_2_2_fu_52167_p3 = (!brmerge_demorgan_i_5_62_fu_52163_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_62_fu_52163_p2.read()[0].to_bool())? result_56_2_2_reg_116124.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_56_2_fu_52019_p3() {
    result_2_i_56_2_fu_52019_p3 = (!brmerge_demorgan_i_5_60_fu_52004_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_60_fu_52004_p2.read()[0].to_bool())? result_56_2_fu_52013_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_56_fu_52060_p3() {
    result_2_i_56_fu_52060_p3 = (!tmp_13_55_0_2_reg_114763.read()[0].is_01())? sc_lv<9>(): ((tmp_13_55_0_2_reg_114763.read()[0].to_bool())? tmp_17_56_fu_52054_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_57_0_0_s_fu_52071_p3() {
    result_2_i_57_0_0_s_fu_52071_p3 = (!brmerge_demorgan_i_5_63_fu_52067_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_63_fu_52067_p2.read()[0].to_bool())? result_2_i_56_fu_52060_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_57_0_2_ca_fu_52102_p1() {
    result_2_i_57_0_2_ca_fu_52102_p1 = esl_sext<11,9>(result_2_i_57_0_2_fu_52094_p3.read());
}

void conv_3x3_strm::thread_result_2_i_57_0_2_fu_52094_p3() {
    result_2_i_57_0_2_fu_52094_p3 = (!brmerge_demorgan_i_5_64_fu_52079_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_64_fu_52079_p2.read()[0].to_bool())? result_57_0_2_fu_52088_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_57_1_0_s_fu_52248_p3() {
    result_2_i_57_1_0_s_fu_52248_p3 = (!brmerge_demorgan_i_5_66_fu_52244_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_66_fu_52244_p2.read()[0].to_bool())? result_2_i_57_1_fu_52238_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_57_1_2_fu_52279_p3() {
    result_2_i_57_1_2_fu_52279_p3 = (!brmerge_demorgan_i_5_67_fu_52256_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_67_fu_52256_p2.read()[0].to_bool())? result_57_1_2_fu_52273_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_57_1_fu_52238_p3() {
    result_2_i_57_1_fu_52238_p3 = (!brmerge_demorgan_i_5_65_reg_116129.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_65_reg_116129.read()[0].to_bool())? result_57_1_reg_116135.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_57_2_0_s_fu_52315_p3() {
    result_2_i_57_2_0_s_fu_52315_p3 = (!brmerge_demorgan_i_5_69_fu_52310_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_69_fu_52310_p2.read()[0].to_bool())? result_2_i_57_2_fu_52302_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_57_2_2_fu_52450_p3() {
    result_2_i_57_2_2_fu_52450_p3 = (!brmerge_demorgan_i_5_70_fu_52446_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_70_fu_52446_p2.read()[0].to_bool())? result_57_2_2_reg_116212.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_57_2_fu_52302_p3() {
    result_2_i_57_2_fu_52302_p3 = (!brmerge_demorgan_i_5_68_fu_52287_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_68_fu_52287_p2.read()[0].to_bool())? result_57_2_fu_52296_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_57_fu_52343_p3() {
    result_2_i_57_fu_52343_p3 = (!tmp_13_56_0_2_reg_114844.read()[0].is_01())? sc_lv<9>(): ((tmp_13_56_0_2_reg_114844.read()[0].to_bool())? tmp_17_57_fu_52337_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_58_0_0_s_fu_52354_p3() {
    result_2_i_58_0_0_s_fu_52354_p3 = (!brmerge_demorgan_i_5_71_fu_52350_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_71_fu_52350_p2.read()[0].to_bool())? result_2_i_57_fu_52343_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_58_0_2_ca_fu_52385_p1() {
    result_2_i_58_0_2_ca_fu_52385_p1 = esl_sext<11,9>(result_2_i_58_0_2_fu_52377_p3.read());
}

void conv_3x3_strm::thread_result_2_i_58_0_2_fu_52377_p3() {
    result_2_i_58_0_2_fu_52377_p3 = (!brmerge_demorgan_i_5_72_fu_52362_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_72_fu_52362_p2.read()[0].to_bool())? result_58_0_2_fu_52371_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_58_1_0_s_fu_52531_p3() {
    result_2_i_58_1_0_s_fu_52531_p3 = (!brmerge_demorgan_i_5_74_fu_52527_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_74_fu_52527_p2.read()[0].to_bool())? result_2_i_58_1_fu_52521_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_58_1_2_fu_52562_p3() {
    result_2_i_58_1_2_fu_52562_p3 = (!brmerge_demorgan_i_5_75_fu_52539_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_75_fu_52539_p2.read()[0].to_bool())? result_58_1_2_fu_52556_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_58_1_fu_52521_p3() {
    result_2_i_58_1_fu_52521_p3 = (!brmerge_demorgan_i_5_73_reg_116217.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_73_reg_116217.read()[0].to_bool())? result_58_1_reg_116223.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_58_2_0_s_fu_52598_p3() {
    result_2_i_58_2_0_s_fu_52598_p3 = (!brmerge_demorgan_i_5_77_fu_52593_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_77_fu_52593_p2.read()[0].to_bool())? result_2_i_58_2_fu_52585_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_58_2_2_fu_52733_p3() {
    result_2_i_58_2_2_fu_52733_p3 = (!brmerge_demorgan_i_5_78_fu_52729_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_78_fu_52729_p2.read()[0].to_bool())? result_58_2_2_reg_116301.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_58_2_fu_52585_p3() {
    result_2_i_58_2_fu_52585_p3 = (!brmerge_demorgan_i_5_76_fu_52570_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_76_fu_52570_p2.read()[0].to_bool())? result_58_2_fu_52579_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_58_fu_52626_p3() {
    result_2_i_58_fu_52626_p3 = (!tmp_13_57_0_2_reg_114925.read()[0].is_01())? sc_lv<9>(): ((tmp_13_57_0_2_reg_114925.read()[0].to_bool())? tmp_17_58_fu_52620_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_59_0_0_s_fu_52637_p3() {
    result_2_i_59_0_0_s_fu_52637_p3 = (!brmerge_demorgan_i_5_79_fu_52633_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_79_fu_52633_p2.read()[0].to_bool())? result_2_i_58_fu_52626_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_59_0_2_ca_fu_52668_p1() {
    result_2_i_59_0_2_ca_fu_52668_p1 = esl_sext<11,9>(result_2_i_59_0_2_fu_52660_p3.read());
}

void conv_3x3_strm::thread_result_2_i_59_0_2_fu_52660_p3() {
    result_2_i_59_0_2_fu_52660_p3 = (!brmerge_demorgan_i_5_80_fu_52645_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_80_fu_52645_p2.read()[0].to_bool())? result_59_0_2_fu_52654_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_59_1_0_s_fu_52814_p3() {
    result_2_i_59_1_0_s_fu_52814_p3 = (!brmerge_demorgan_i_5_82_fu_52810_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_82_fu_52810_p2.read()[0].to_bool())? result_2_i_59_1_fu_52804_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_59_1_2_fu_52845_p3() {
    result_2_i_59_1_2_fu_52845_p3 = (!brmerge_demorgan_i_5_83_fu_52822_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_83_fu_52822_p2.read()[0].to_bool())? result_59_1_2_fu_52839_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_59_1_fu_52804_p3() {
    result_2_i_59_1_fu_52804_p3 = (!brmerge_demorgan_i_5_81_reg_116306.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_81_reg_116306.read()[0].to_bool())? result_59_1_reg_116312.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_59_2_0_s_fu_52881_p3() {
    result_2_i_59_2_0_s_fu_52881_p3 = (!brmerge_demorgan_i_5_85_fu_52876_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_85_fu_52876_p2.read()[0].to_bool())? result_2_i_59_2_fu_52868_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_59_2_2_fu_53016_p3() {
    result_2_i_59_2_2_fu_53016_p3 = (!brmerge_demorgan_i_5_86_fu_53012_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_86_fu_53012_p2.read()[0].to_bool())? result_59_2_2_reg_116389.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_59_2_fu_52868_p3() {
    result_2_i_59_2_fu_52868_p3 = (!brmerge_demorgan_i_5_84_fu_52853_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_84_fu_52853_p2.read()[0].to_bool())? result_59_2_fu_52862_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_59_fu_52909_p3() {
    result_2_i_59_fu_52909_p3 = (!tmp_13_58_0_2_reg_114940.read()[0].is_01())? sc_lv<9>(): ((tmp_13_58_0_2_reg_114940.read()[0].to_bool())? tmp_17_59_fu_52903_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_5_0_0_s_fu_37355_p3() {
    result_2_i_5_0_0_s_fu_37355_p3 = (!brmerge_demorgan_i_5_fu_37351_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_fu_37351_p2.read()[0].to_bool())? result_2_i_5_fu_37344_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_5_0_2_cas_fu_37386_p1() {
    result_2_i_5_0_2_cas_fu_37386_p1 = esl_sext<11,9>(result_2_i_5_0_2_fu_37378_p3.read());
}

void conv_3x3_strm::thread_result_2_i_5_0_2_fu_37378_p3() {
    result_2_i_5_0_2_fu_37378_p3 = (!brmerge_demorgan_i_5_3_fu_37363_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_5_3_fu_37363_p2.read()[0].to_bool())? result_5_0_2_fu_37372_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_5_1_0_s_fu_37532_p3() {
    result_2_i_5_1_0_s_fu_37532_p3 = (!brmerge_demorgan_i_5_4_fu_37528_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_4_fu_37528_p2.read()[0].to_bool())? result_2_i_5_1_fu_37522_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_5_1_2_fu_37563_p3() {
    result_2_i_5_1_2_fu_37563_p3 = (!brmerge_demorgan_i_5_5_fu_37540_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_5_fu_37540_p2.read()[0].to_bool())? result_5_1_2_fu_37557_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_5_1_fu_37522_p3() {
    result_2_i_5_1_fu_37522_p3 = (!brmerge_demorgan_i_5_1_reg_111536.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_1_reg_111536.read()[0].to_bool())? result_5_1_reg_111542.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_5_2_0_s_fu_37599_p3() {
    result_2_i_5_2_0_s_fu_37599_p3 = (!brmerge_demorgan_i_5_6_fu_37594_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_6_fu_37594_p2.read()[0].to_bool())? result_2_i_5_2_fu_37586_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_5_2_2_fu_37734_p3() {
    result_2_i_5_2_2_fu_37734_p3 = (!brmerge_demorgan_i_5_7_fu_37730_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_7_fu_37730_p2.read()[0].to_bool())? result_5_2_2_reg_111619.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_5_2_fu_37586_p3() {
    result_2_i_5_2_fu_37586_p3 = (!brmerge_demorgan_i_5_2_fu_37571_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_5_2_fu_37571_p2.read()[0].to_bool())? result_5_2_fu_37580_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_5_fu_37344_p3() {
    result_2_i_5_fu_37344_p3 = (!tmp_13_3_0_2_reg_111318.read()[0].is_01())? sc_lv<9>(): ((tmp_13_3_0_2_reg_111318.read()[0].to_bool())? tmp_17_5_fu_37338_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_60_0_0_s_fu_52920_p3() {
    result_2_i_60_0_0_s_fu_52920_p3 = (!brmerge_demorgan_i_6_8_fu_52916_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_8_fu_52916_p2.read()[0].to_bool())? result_2_i_59_fu_52909_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_60_0_2_ca_fu_52951_p1() {
    result_2_i_60_0_2_ca_fu_52951_p1 = esl_sext<11,9>(result_2_i_60_0_2_fu_52943_p3.read());
}

void conv_3x3_strm::thread_result_2_i_60_0_2_fu_52943_p3() {
    result_2_i_60_0_2_fu_52943_p3 = (!brmerge_demorgan_i_6_9_fu_52928_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_9_fu_52928_p2.read()[0].to_bool())? result_60_0_2_fu_52937_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_60_1_0_s_fu_53097_p3() {
    result_2_i_60_1_0_s_fu_53097_p3 = (!brmerge_demorgan_i_6_10_fu_53093_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_10_fu_53093_p2.read()[0].to_bool())? result_2_i_60_1_fu_53087_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_60_1_2_fu_53128_p3() {
    result_2_i_60_1_2_fu_53128_p3 = (!brmerge_demorgan_i_6_11_fu_53105_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_11_fu_53105_p2.read()[0].to_bool())? result_60_1_2_fu_53122_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_60_1_fu_53087_p3() {
    result_2_i_60_1_fu_53087_p3 = (!brmerge_demorgan_i_6_87_reg_116394.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_87_reg_116394.read()[0].to_bool())? result_60_1_reg_116400.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_60_2_0_s_fu_53164_p3() {
    result_2_i_60_2_0_s_fu_53164_p3 = (!brmerge_demorgan_i_6_13_fu_53159_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_13_fu_53159_p2.read()[0].to_bool())? result_2_i_60_2_fu_53151_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_60_2_2_fu_53299_p3() {
    result_2_i_60_2_2_fu_53299_p3 = (!brmerge_demorgan_i_6_14_fu_53295_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_14_fu_53295_p2.read()[0].to_bool())? result_60_2_2_reg_116477.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_60_2_fu_53151_p3() {
    result_2_i_60_2_fu_53151_p3 = (!brmerge_demorgan_i_6_12_fu_53136_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_12_fu_53136_p2.read()[0].to_bool())? result_60_2_fu_53145_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_60_fu_53192_p3() {
    result_2_i_60_fu_53192_p3 = (!tmp_13_59_0_2_reg_115028.read()[0].is_01())? sc_lv<9>(): ((tmp_13_59_0_2_reg_115028.read()[0].to_bool())? tmp_17_60_fu_53186_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_61_0_0_s_fu_53203_p3() {
    result_2_i_61_0_0_s_fu_53203_p3 = (!brmerge_demorgan_i_6_15_fu_53199_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_15_fu_53199_p2.read()[0].to_bool())? result_2_i_60_fu_53192_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_61_0_2_ca_fu_53234_p1() {
    result_2_i_61_0_2_ca_fu_53234_p1 = esl_sext<11,9>(result_2_i_61_0_2_fu_53226_p3.read());
}

void conv_3x3_strm::thread_result_2_i_61_0_2_fu_53226_p3() {
    result_2_i_61_0_2_fu_53226_p3 = (!brmerge_demorgan_i_6_16_fu_53211_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_16_fu_53211_p2.read()[0].to_bool())? result_61_0_2_fu_53220_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_61_1_0_s_fu_53380_p3() {
    result_2_i_61_1_0_s_fu_53380_p3 = (!brmerge_demorgan_i_6_18_fu_53376_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_18_fu_53376_p2.read()[0].to_bool())? result_2_i_61_1_fu_53370_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_61_1_2_fu_53411_p3() {
    result_2_i_61_1_2_fu_53411_p3 = (!brmerge_demorgan_i_6_19_fu_53388_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_19_fu_53388_p2.read()[0].to_bool())? result_61_1_2_fu_53405_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_61_1_fu_53370_p3() {
    result_2_i_61_1_fu_53370_p3 = (!brmerge_demorgan_i_6_17_reg_116482.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_17_reg_116482.read()[0].to_bool())? result_61_1_reg_116488.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_61_2_0_s_fu_53447_p3() {
    result_2_i_61_2_0_s_fu_53447_p3 = (!brmerge_demorgan_i_6_21_fu_53442_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_21_fu_53442_p2.read()[0].to_bool())? result_2_i_61_2_fu_53434_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_61_2_2_fu_53582_p3() {
    result_2_i_61_2_2_fu_53582_p3 = (!brmerge_demorgan_i_6_22_fu_53578_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_22_fu_53578_p2.read()[0].to_bool())? result_61_2_2_reg_116566.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_61_2_fu_53434_p3() {
    result_2_i_61_2_fu_53434_p3 = (!brmerge_demorgan_i_6_20_fu_53419_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_20_fu_53419_p2.read()[0].to_bool())? result_61_2_fu_53428_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_61_fu_53475_p3() {
    result_2_i_61_fu_53475_p3 = (!tmp_13_60_0_2_reg_115109.read()[0].is_01())? sc_lv<9>(): ((tmp_13_60_0_2_reg_115109.read()[0].to_bool())? tmp_17_61_fu_53469_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_62_0_0_s_fu_53486_p3() {
    result_2_i_62_0_0_s_fu_53486_p3 = (!brmerge_demorgan_i_6_23_fu_53482_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_23_fu_53482_p2.read()[0].to_bool())? result_2_i_61_fu_53475_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_62_0_2_ca_fu_53517_p1() {
    result_2_i_62_0_2_ca_fu_53517_p1 = esl_sext<11,9>(result_2_i_62_0_2_fu_53509_p3.read());
}

void conv_3x3_strm::thread_result_2_i_62_0_2_fu_53509_p3() {
    result_2_i_62_0_2_fu_53509_p3 = (!brmerge_demorgan_i_6_24_fu_53494_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_24_fu_53494_p2.read()[0].to_bool())? result_62_0_2_fu_53503_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_62_1_0_s_fu_53663_p3() {
    result_2_i_62_1_0_s_fu_53663_p3 = (!brmerge_demorgan_i_6_26_fu_53659_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_26_fu_53659_p2.read()[0].to_bool())? result_2_i_62_1_fu_53653_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_62_1_2_fu_53694_p3() {
    result_2_i_62_1_2_fu_53694_p3 = (!brmerge_demorgan_i_6_27_fu_53671_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_27_fu_53671_p2.read()[0].to_bool())? result_62_1_2_fu_53688_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_62_1_fu_53653_p3() {
    result_2_i_62_1_fu_53653_p3 = (!brmerge_demorgan_i_6_25_reg_116571.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_25_reg_116571.read()[0].to_bool())? result_62_1_reg_116577.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_62_2_0_s_fu_53730_p3() {
    result_2_i_62_2_0_s_fu_53730_p3 = (!brmerge_demorgan_i_6_29_fu_53725_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_29_fu_53725_p2.read()[0].to_bool())? result_2_i_62_2_fu_53717_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_62_2_2_fu_53865_p3() {
    result_2_i_62_2_2_fu_53865_p3 = (!brmerge_demorgan_i_6_30_fu_53861_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_30_fu_53861_p2.read()[0].to_bool())? result_62_2_2_reg_116654.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_62_2_fu_53717_p3() {
    result_2_i_62_2_fu_53717_p3 = (!brmerge_demorgan_i_6_28_fu_53702_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_28_fu_53702_p2.read()[0].to_bool())? result_62_2_fu_53711_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_62_fu_53758_p3() {
    result_2_i_62_fu_53758_p3 = (!tmp_13_61_0_2_reg_115190.read()[0].is_01())? sc_lv<9>(): ((tmp_13_61_0_2_reg_115190.read()[0].to_bool())? tmp_17_62_fu_53752_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_63_0_0_s_fu_53769_p3() {
    result_2_i_63_0_0_s_fu_53769_p3 = (!brmerge_demorgan_i_6_31_fu_53765_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_31_fu_53765_p2.read()[0].to_bool())? result_2_i_62_fu_53758_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_63_0_2_ca_fu_53800_p1() {
    result_2_i_63_0_2_ca_fu_53800_p1 = esl_sext<11,9>(result_2_i_63_0_2_fu_53792_p3.read());
}

void conv_3x3_strm::thread_result_2_i_63_0_2_fu_53792_p3() {
    result_2_i_63_0_2_fu_53792_p3 = (!brmerge_demorgan_i_6_32_fu_53777_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_32_fu_53777_p2.read()[0].to_bool())? result_63_0_2_fu_53786_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_63_1_0_s_fu_53946_p3() {
    result_2_i_63_1_0_s_fu_53946_p3 = (!brmerge_demorgan_i_6_34_fu_53942_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_34_fu_53942_p2.read()[0].to_bool())? result_2_i_63_1_fu_53936_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_63_1_2_fu_53977_p3() {
    result_2_i_63_1_2_fu_53977_p3 = (!brmerge_demorgan_i_6_35_fu_53954_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_35_fu_53954_p2.read()[0].to_bool())? result_63_1_2_fu_53971_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_63_1_fu_53936_p3() {
    result_2_i_63_1_fu_53936_p3 = (!brmerge_demorgan_i_6_33_reg_116659.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_33_reg_116659.read()[0].to_bool())? result_63_1_reg_116665.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_63_2_0_s_fu_54013_p3() {
    result_2_i_63_2_0_s_fu_54013_p3 = (!brmerge_demorgan_i_6_37_fu_54008_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_37_fu_54008_p2.read()[0].to_bool())? result_2_i_63_2_fu_54000_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_63_2_2_fu_54148_p3() {
    result_2_i_63_2_2_fu_54148_p3 = (!brmerge_demorgan_i_6_38_fu_54144_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_38_fu_54144_p2.read()[0].to_bool())? result_63_2_2_reg_116747.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_63_2_fu_54000_p3() {
    result_2_i_63_2_fu_54000_p3 = (!brmerge_demorgan_i_6_36_fu_53985_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_36_fu_53985_p2.read()[0].to_bool())? result_63_2_fu_53994_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_63_fu_54041_p3() {
    result_2_i_63_fu_54041_p3 = (!tmp_13_62_0_2_reg_115205.read()[0].is_01())? sc_lv<9>(): ((tmp_13_62_0_2_reg_115205.read()[0].to_bool())? tmp_17_63_fu_54035_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_64_0_0_s_fu_54052_p3() {
    result_2_i_64_0_0_s_fu_54052_p3 = (!brmerge_demorgan_i_6_39_fu_54048_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_39_fu_54048_p2.read()[0].to_bool())? result_2_i_63_fu_54041_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_64_0_2_ca_fu_54083_p1() {
    result_2_i_64_0_2_ca_fu_54083_p1 = esl_sext<11,9>(result_2_i_64_0_2_fu_54075_p3.read());
}

void conv_3x3_strm::thread_result_2_i_64_0_2_fu_54075_p3() {
    result_2_i_64_0_2_fu_54075_p3 = (!brmerge_demorgan_i_6_40_fu_54060_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_40_fu_54060_p2.read()[0].to_bool())? result_64_0_2_fu_54069_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_64_1_0_s_fu_54229_p3() {
    result_2_i_64_1_0_s_fu_54229_p3 = (!brmerge_demorgan_i_6_42_fu_54225_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_42_fu_54225_p2.read()[0].to_bool())? result_2_i_64_1_fu_54219_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_64_1_2_fu_54260_p3() {
    result_2_i_64_1_2_fu_54260_p3 = (!brmerge_demorgan_i_6_43_fu_54237_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_43_fu_54237_p2.read()[0].to_bool())? result_64_1_2_fu_54254_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_64_1_fu_54219_p3() {
    result_2_i_64_1_fu_54219_p3 = (!brmerge_demorgan_i_6_41_reg_116752.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_41_reg_116752.read()[0].to_bool())? result_64_1_reg_116758.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_64_2_0_s_fu_54296_p3() {
    result_2_i_64_2_0_s_fu_54296_p3 = (!brmerge_demorgan_i_6_45_fu_54291_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_45_fu_54291_p2.read()[0].to_bool())? result_2_i_64_2_fu_54283_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_64_2_2_fu_54431_p3() {
    result_2_i_64_2_2_fu_54431_p3 = (!brmerge_demorgan_i_6_46_fu_54427_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_46_fu_54427_p2.read()[0].to_bool())? result_64_2_2_reg_116841.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_64_2_fu_54283_p3() {
    result_2_i_64_2_fu_54283_p3 = (!brmerge_demorgan_i_6_44_fu_54268_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_44_fu_54268_p2.read()[0].to_bool())? result_64_2_fu_54277_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_64_fu_54324_p3() {
    result_2_i_64_fu_54324_p3 = (!tmp_13_63_0_2_reg_115293.read()[0].is_01())? sc_lv<9>(): ((tmp_13_63_0_2_reg_115293.read()[0].to_bool())? tmp_17_64_fu_54318_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_65_0_0_s_fu_54335_p3() {
    result_2_i_65_0_0_s_fu_54335_p3 = (!brmerge_demorgan_i_6_47_fu_54331_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_47_fu_54331_p2.read()[0].to_bool())? result_2_i_64_fu_54324_p3.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_65_0_2_ca_fu_54366_p1() {
    result_2_i_65_0_2_ca_fu_54366_p1 = esl_sext<11,9>(result_2_i_65_0_2_fu_54358_p3.read());
}

void conv_3x3_strm::thread_result_2_i_65_0_2_fu_54358_p3() {
    result_2_i_65_0_2_fu_54358_p3 = (!brmerge_demorgan_i_6_48_fu_54343_p2.read()[0].is_01())? sc_lv<9>(): ((brmerge_demorgan_i_6_48_fu_54343_p2.read()[0].to_bool())? result_65_0_2_fu_54352_p2.read(): ap_const_lv9_0);
}

void conv_3x3_strm::thread_result_2_i_65_1_0_s_fu_54512_p3() {
    result_2_i_65_1_0_s_fu_54512_p3 = (!brmerge_demorgan_i_6_50_fu_54508_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_50_fu_54508_p2.read()[0].to_bool())? result_2_i_65_1_fu_54502_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_65_1_2_fu_54543_p3() {
    result_2_i_65_1_2_fu_54543_p3 = (!brmerge_demorgan_i_6_51_fu_54520_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_51_fu_54520_p2.read()[0].to_bool())? result_65_1_2_fu_54537_p2.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_65_1_fu_54502_p3() {
    result_2_i_65_1_fu_54502_p3 = (!brmerge_demorgan_i_6_49_reg_116846.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_49_reg_116846.read()[0].to_bool())? result_65_1_reg_116852.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_65_2_0_s_fu_54579_p3() {
    result_2_i_65_2_0_s_fu_54579_p3 = (!brmerge_demorgan_i_6_53_fu_54574_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_53_fu_54574_p2.read()[0].to_bool())? result_2_i_65_2_fu_54566_p3.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_65_2_2_fu_54714_p3() {
    result_2_i_65_2_2_fu_54714_p3 = (!brmerge_demorgan_i_6_54_fu_54710_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_54_fu_54710_p2.read()[0].to_bool())? result_65_2_2_reg_116934.read(): ap_const_lv11_0);
}

void conv_3x3_strm::thread_result_2_i_65_2_fu_54566_p3() {
    result_2_i_65_2_fu_54566_p3 = (!brmerge_demorgan_i_6_52_fu_54551_p2.read()[0].is_01())? sc_lv<11>(): ((brmerge_demorgan_i_6_52_fu_54551_p2.read()[0].to_bool())? result_65_2_fu_54560_p2.read(): ap_const_lv11_0);
}

}

