/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** createWindow.c
*/

#include "../../include/framebuffer.h"
#include "../../include/my_window.h"

sfRenderWindow *createWindow(unsigned int width, unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode mode;

    mode.width = width;
    mode.height = height;
    mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(mode, "ScreenSaver", sfDefaultStyle, NULL);
    return (window);
}
