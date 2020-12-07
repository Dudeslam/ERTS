/*
 * Copyright 2020 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <iostream>
#include <cstdlib>
#include <assert.h>
#include <stdint.h>
#include "hls_opencv.h"
#include "math.h"

#include "conv_2d.h"

#define WINDOW_SIZE 3
#define BORDER 1
#define WIDTH 256
#define HEIGHT 256
#define SIZE (HEIGHT * WIDTH)

typedef uint8_t data_t;

using namespace std;

// Helper functions for the convolution test function
bool test_borders_ok(int y, int x){
	bool no_border = (0 < y && y < HEIGHT && 0 < x && x < WIDTH);
	return no_border;
}

// Defines the actual calculation for one output value.
int test_convolution_step(data_t window[3][3], int y, int x, cv::Mat kernel){
  int result = 0;
  for (int i =0; i < WINDOW_SIZE; i++) {
		for (int j = 0; j < WINDOW_SIZE; j++) {
		  if (test_borders_ok(y + i, x + j)) {
			  result += window[i][j] * kernel.at<int>(i, j);
		  }
		  else {
			  return 0;
		  }
	  }
  }
  return result;
}

// Functions for testbench
//template<typename T, int K>
void conv_3x3_test(cv::Mat &src, cv::Mat &dst, cv::Mat &kernel){
  data_t window[WINDOW_SIZE][WINDOW_SIZE];
  data_t val_out;
  // Here we perform a basic straightforward 3x3 convolution of the supplied image.
  for (int y = 0; y < HEIGHT; y++)
  {
		for (int x = 0; x < WIDTH; x++)
		{
	  // Load window
			for (int i = -BORDER; i <= BORDER; i++) {
				for (int j = -BORDER; j <= BORDER; j++) {
					if (test_borders_ok(y + i+1, x + j+1)) {
						window[i + BORDER][j + BORDER] = src.at<data_t>(y + i, x + j);
					}
				}
			}
	  // Calculate output value
	  //val_out = uint8_t(abs(test_convolution_step(window, y, x, kernel)/4));
	  int val = test_convolution_step(window, y, x, kernel);
	  //cout << val_out;
	  val_out = uint8_t(abs(val / 4));
	  //cout << val_out << endl;
	  dst.at<data_t>(y, x) = val_out;
		}
  }
}

int main(void)
{
    int ret_val = 0; int err_cnt = 0; int counter = 0;
	const string input_path = "C:\\Users\\Kristoffer\\Documents\\Embedded_Real_Time_Exercises\\Project\\Convolution_IP.prj\\cameraman.png";
	const string output_path = "C:\\Users\\Kristoffer\\Documents\\Embedded_Real_Time_Exercises\\Project\\Convolution_IP.prj\\cameraman_res.png";
	const string output_path_stream = "C:\\Users\\Kristoffer\\Documents\\Embedded_Real_Time_Exercises\\Project\\Convolution_IP.prj\\cameraman_res_stream.png";
	cv::Mat src = cv::imread(input_path, CV_8UC1);
	cv::Mat dst = cv::Mat(HEIGHT, WIDTH, CV_8UC1);
	cv::Mat dst_stream = cv::Mat(HEIGHT, WIDTH, CV_8UC1);
	hls::stream<data_t> stream_in("stream_in");
	hls::stream<data_t> stream_out("stream_out");

	for (int x=0; x < src.rows; x++)
	{
	    for (int y=0; y < src.cols; y++)
	    {
	        data_t valIn;
	        valIn = src.at<data_t>(x,y);
	        stream_in.write(valIn);
	    }
	}

    // Generate filter kernel - Vertical Sobel
	int filt3_coeff[3*3] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
	int sobel[3][3] = {{-1, 0, 1}, {-2, 0, 2}, { -1, 0, 1}};
    cv::Mat sobel_kernel = cv::Mat(3,3, CV_32SC1, filt3_coeff);

    // Generate reference convolution image
    conv_3x3_test(src, dst, sobel_kernel);
    // Generate DUT convolution image
    conv_3x3_strm(stream_out, stream_in);

    // Check DUT vs reference result
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            data_t dut_val = stream_out.read();
            data_t ref_val = dst.at<data_t>(i, j);
            dst_stream.at<data_t>(i,j) = dut_val;
            counter++;
            if (dut_val != ref_val) {
                err_cnt++;
                cout << "!!! ERROR: Mismatch detected at coord(" << i;
                cout << ", " << j << " ) !!!";
                cout << " ref was: " << int(ref_val) << " dut was: " << int(dut_val) << endl;
            }
        }
    }

    if (err_cnt == 0) {
        cout << "*** TEST PASSED ***" << endl;
        ret_val = 0;
    } else {
        cout << "!!! TEST FAILED - " << err_cnt << " mismatches detected !!!";
        cout << "Total number of pixels checked: " << counter << endl;
        ret_val = -1;
    }

    vector<int> compression_params;
	compression_params.push_back(cv::IMWRITE_PNG_COMPRESSION);
	compression_params.push_back(9);
    cv::imwrite(output_path, dst, compression_params);
    cv::imwrite(output_path_stream, dst_stream, compression_params);
    return ret_val;
}
