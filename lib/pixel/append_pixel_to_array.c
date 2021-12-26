/*
** EPITECH PROJECT, 2021
** my_screensaver - append_pixel_to_array.c
** File description:
** jitter jitterter jitter
*/

#include "../../include/my_lib.h"
#include "../../include/my_pixel.h"
#include "../../include/framebuffer.h"

int *append_pixel_to_array(int *pixels, int *rgba)
{
    int max_length = my_strlen((char *)pixels);
    int rgba_length = my_strlen((char *)rgba);
    int i = 0;
    for (; i < rgba_length; i++) {
        pixels[max_length + i] = rgba[i];
    }
    return pixels;
}

int *apta(int *pixels, int *rgba)
{
    int max_length = my_strlen((char *)pixels);
    int rgba_length = my_strlen((char *)rgba);
    int i = 0;
    for (; i < rgba_length; i++) {
        pixels[max_length + i] = rgba[i];
    }
    return pixels;
}

void put_pixel(framebuffer_t *framebuffer, unsigned int x,
               unsigned int y, int *color)
{
    //int size = 4 * (y * framebuffer->width + x);

    framebuffer->pixels[0 + 4 * (y * framebuffer->width + x)] = color[0];
    framebuffer->pixels[1 + 4 * (y * framebuffer->width + x)] = color[1];
    framebuffer->pixels[2 + 4 * (y * framebuffer->width + x)] = color[2];
    framebuffer->pixels[3 + 4 * (y * framebuffer->width + x)] = color[3];
    free(color);
}