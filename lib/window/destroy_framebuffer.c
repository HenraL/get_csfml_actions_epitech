/*
** EPITECH PROJECT, 2021
** my_screensaver - destroy_framebuffer.c
** File description:
** jitter jitter
*/

#include "../../include/framebuffer.h"
#include "../../include/my_window.h"

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}