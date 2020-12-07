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

#ifndef CONV_2D_H_
#define CONV_2D_H_

#include <assert.h>
#include <stdint.h>
#include <hls_stream.h>
#include <hls_math.h>

#define WINDOW_SIZE 3
#define BORDER 1
#define WIDTH 256
#define HEIGHT 256
#define SIZE (HEIGHT * WIDTH)

typedef uint8_t data_t;

void conv_3x3_strm(hls::stream<data_t>& out_stream, hls::stream<data_t>& in_stream);

template <int ROW, int COLUMN>
int convolution_step(data_t (&window)[ROW][COLUMN], int y, int x, data_t (&kernel)[ROW][COLUMN]);

bool borders_ok(int y, int x);

#endif // CONV_2D_H_ not defined
