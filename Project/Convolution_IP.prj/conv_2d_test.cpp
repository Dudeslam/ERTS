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

#include "conv_2d_test.h"

template<typename T, int K>
void conv_3x3_test(cv::Mat &src, cv::Mat &dst, cv::Mat &kernel)
{
  int window[WINDOW_SIZE][WINDOW_SIZE];

  // Here we perform a basic straightforward 3x3 convolution of the supplied image.
  for (int y = 0; y < HEIGHT; y++)
  {
		for (int x = 0; x < WIDTH; x++)
		{
	  // Load window 
			for (int i = -BORDER; i <= BORDER; i++) {
				for (int j = -BORDER; j <= BORDER; j++) {
					if (borders_ok(y + i, x + j)) {
						window[i + BORDER][j + BORDER] = src.at<uchar>(y + i, x + j);//[y + i][x + j];
					}
				}
			}
	  // Calculate output value
	  int val_out = convolution_step(window, y, x, kernel);
	  dst.at<uchar>(y, x) = val_out;
		}
  }
}

// Helper functions for the convolution test function
bool borders_ok(int y, int x)
{
	bool no_border = (0 <= y && y < HEIGHT && 0 <= x && x < WIDTH);
  return no_border;
}

// Defines the actual calculation for one output value.
int convolution_step(int window[3][3], int y, int x, cv::Mat kernel)
{
  int result = 0;
  for (int i =0; i < WINDOW_SIZE; i++) {
		for (int j = 0; j < WINDOW_SIZE; j++) {
		  if (borders_ok(y + i, x + j)) {
			  result += window[i][j] * kernel.at<uchar>(i, j);
		  }
	  }
  }
  return result;
}
