/*
** EPITECH PROJECT, 2021
** my_screensaver - add_pixel.c
** File description:
** jitter jitter
*/

#include <stdlib.h>
#include "../../include/my_pixel.h"

int *rgba(int r, int g, int b, int alpha)
{
    int *pixels = malloc(sizeof(int) * 4);
    pixels[0] = r;
    pixels[1] = g;
    pixels[2] = b;
    pixels[3] = alpha;//(alpha * 255);
    return pixels;
}

int *add_pixel(int r, int g, int b, int alpha)
{
    int *pixels = rgba(r, g, b, alpha);
    return pixels;
}