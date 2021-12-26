/*
** EPITECH PROJECT, 2021
** my_screensaver - create_pixel_array.c
** File description:
** abx
*/

#include <stdlib.h>
#include "../../include/my_pixel.h"

int *create_pixel_array(int width, int height, int bits_per_pixels_or_bpp)
{
    int *pixels;
    pixels = malloc(width * height * (bits_per_pixels_or_bpp / 8));
    return pixels;
}

int *cpa(int width, int height, int bpp)
{
    int *pixels;
    pixels = malloc(width * height * (bpp / 8));
    return pixels;
}