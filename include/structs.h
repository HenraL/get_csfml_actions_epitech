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

#include <stdio.h>

#ifndef FRAMEBUFFERH
typedef struct s_framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
} framebuffer_t;

#endif
typedef struct sleepy {
    int microseconds;
    int milliseconds;
    int seconds;
    int minutes;
    int hours;
} sleepy;
typedef struct move_s {
    int up;
    int down;
    int left;
    int right;
    int center;
} move_t;
typedef struct score_s {
    int total;
    int time;
    int enemies;
    int coins;
} score_t;
typedef struct track_time_s {
    int silver;
    int rings;
    int eggman;
    int missile;
    int won;
    int lost;
} track_time_t;

#endif