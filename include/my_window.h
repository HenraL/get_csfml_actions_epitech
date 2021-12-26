/*
** EPITECH PROJECT, 2021
** my_screensaver - my_window.h
** File description:
** jitter jitter
*/

#ifndef MY_WINDOW_H_
#define MY_WINDOW_H_

#include <SFML/Graphics.h>
#include "structs.h"

// #include "framebuffer.h"

sfRenderWindow *createWindow(unsigned int width, unsigned int height);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y);

#endif