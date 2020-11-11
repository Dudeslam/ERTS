/*
 * GaussBlur.h
 *
 *  Created on: 26. okt. 2020
 *      Author: Trung
 */

#ifndef SRC_GAUSSBLUR_H_
#define SRC_GAUSSBLUR_H_

int kernel[3][3] = { 1, 2, 1,
                   2, 4, 2,
                   1, 2, 1 };


void guassian_blur2D(unsigned char *, unsigned char *, int , int);

int accessPixel(unsigned char *, int , int , int, int, int);


#endif /* SRC_GAUSSBLUR_H_ */
