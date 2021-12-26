/*
** EPITECH PROJECT, 2021
** my_screensaver - my_pixel.h
** File description:
** jitter jitter
*/

#ifndef MY_PIXEL_H_
#define MY_PIXEL_H_

#include "framebuffer.h"

int *create_pixel_array(int width, int height, int bits_per_pixels_or_bpp);
int *cpa(int width, int height, int bpp);
int *rgba(int r, int g, int b, int alpha);
int *add_pixel(int r, int g, int b, int alpha);
int *append_pixel_to_array(int *pixels, int *rgba);
int *apta(int *pixels, int *rgba);
void put_pixel(framebuffer_t *framebuffer, unsigned int x,
               unsigned int y, int *color);
void destroy_pixel_array(int *pixels);
void dpa(int *pixels);

#endif