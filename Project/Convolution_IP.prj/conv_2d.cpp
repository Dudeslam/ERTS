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
#include "conv_2d.h"

bool borders_ok(int y, int x){
	return (0 < y && y < HEIGHT && 0 < x && x < WIDTH);
}

// Defines the actual calculation for one output value.
template <int ROW, int COLUMN>
int convolution_step(data_t (&window)[ROW][COLUMN], int y, int x, int (&kernel)[ROW][COLUMN]){
#pragma HLS INLINE
	int result = 0;
	bool border = true;
	for (int i = 0; i < WINDOW_SIZE; i++) {
			for (int j = 0; j < WINDOW_SIZE; j++) {
				if (borders_ok(y + i, x + j) && border) {
					result += window[i][j] * kernel[i][j];
				}
				else{
					border = false;
					result = 0;
				}
			}
	}
	return result;
}

void conv_3x3_strm(hls::stream<data_t>& out_stream, hls::stream<data_t>& in_stream){

	int kernel[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
	data_t line_buf[2][WIDTH];
	data_t window[3][3];
	data_t right[3];
	data_t val_out;
	data_t val_in = 0;
	#pragma HLS ARRAY_PARTITION variable=line_buf complete dim=1
	#pragma HLS ARRAY_PARTITION variable=window complete dim=0
	#pragma HLS ARRAY_PARTITION variable=right complete


	// We load the initial pixels into the line-buffer. We read in the width of the image + the border + 1.

	init_linebuf_1 : for (int x = WIDTH - 2; x < WIDTH; x++){
	#pragma HLS PIPELINE
		line_buf[0][x] = in_stream.read();
    }

	init_linebuf_2 : for (int x = 0; x < WIDTH; x++){
		#pragma HLS PIPELINE
		line_buf[1][x] = in_stream.read();
    }
	int read_count = WIDTH + 2; // Keep track of number of pixels read.

	// Fill initial window with values from linebuffer
	window[1][1] = line_buf[0][254];
	window[1][2] = line_buf[0][255];
	window[2][1] = line_buf[1][254];
	window[2][2] = line_buf[1][255];

	// Main convolution routine
	// Outer for loops iterate through all pixels in image
	for_i_pixel : for (int i = 0; i < HEIGHT; i++)
	{
		for_j_pixel : for (int j = 0; j < WIDTH; j++)
		{
			#pragma HLS PIPELINE

			// Compute output value as one single convolution step and write to the stream
			val_out = uint8_t(abs(convolution_step(window, i, j, kernel)/4));
			//val_out = convolution_step(window, i, j, kernel);
			out_stream.write(val_out);

			// Shift line buffer column up
			right[0] = line_buf[0][j];
			right[1] = line_buf[0][j] = line_buf[1][j];

			// If not last pixel
			if (read_count < SIZE)
			{
				// Read new pixel from stream
				val_in = in_stream.read();
				read_count++;

				right[2] = line_buf[1][j] = val_in;

				// Shift window left

				loop_1 : for (int y = 0; y < 3; y++){
					loop_2 : for (int x = 0; x < 2; x++){
//#pragma HLS loop_flatten
//#pragma HLS unroll
						window[y][x] = window[y][x + 1];
					}
				}
				// Update rightmost window values
				loop_3 : for (int y = 0; y < 3; y++){
//#pragma HLS loop_flatten
//#pragma HLS unroll
					window[y][2] = right[y];
				}
			}
		}
	}
}
