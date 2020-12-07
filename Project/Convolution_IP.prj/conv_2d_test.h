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

#ifndef CONV_2D_TEST_H_
#define CONV_2D_TEST_H_

#include <assert.h>
#include <stdint.h>
#include "hls_opencv.h"

#define WINDOW_SIZE 3
#define BORDER 1
#define WIDTH 256
#define HEIGHT 256
#define SIZE (HEIGHT * WIDTH)

typedef uint8_t data_t;

// External function prototypes
void conv_3x3_test(cv::Mat &src, cv::Mat &dst, cv::Mat &kernel);
bool borders_ok(int y, int x);
int convolution_step(int window[3][3], int y, int x, cv::Mat kernel);
inline void hello(){
	std::cout << "Hello" << std::endl;
}

#endif // CONV_2D_TEST_H_ not defined
