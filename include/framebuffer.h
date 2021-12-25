/*
** EPITECH PROJECT, 2021
** my_screensaver - framebuffer.h
** File description:
**
*/

#ifndef FRAMEBUFFERH
#define FRAMEBUFFERH
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>

typedef struct s_framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

// sfColor rgba(sfUint8 red, sfUint8 green, sfUint8 blue, sfUint8 alpha);

#endif
