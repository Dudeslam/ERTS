#include "GaussBlur.h"


void guassian_blur2D(unsigned char * arr, unsigned char * result, int width, int height)
{
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[3 * row * width + 3 * col + k] = accessPixel(arr, col, row, k, width, height);
            }
        }
    }
}

int accessPixel(unsigned char * arr, int col, int row, int k, int width, int height)
{
    int sum = 0;
    int sumKernel = 0;

    for (int j = -1; j <= 1; j++)
    {
        for (int i = -1; i <= 1; i++)
        {
            if ((row + j) >= 0 && (row + j) < height && (col + i) >= 0 && (col + i) < width)
            {
                int color = arr[(row + j) * 3 * width + (col + i) * 3 + k];
                sum += color * kernel[i + 1][j + 1];
                sumKernel += kernel[i + 1][j + 1];
            }
        }
    }

    return sum / sumKernel;
}
