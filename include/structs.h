/*
** EPITECH PROJECT, 2021
** my_screensaver - structs.h
** File description:
** jitter jitter
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>

#include<stdio.h>

typedef struct s_framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8* pixels;
} framebuffer_t;

typedef struct move_s {
    int up;
    int down;
    int left;
    int right;
    int center;
} move_t;

#endif