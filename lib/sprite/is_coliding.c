/*
** EPITECH PROJECT, 2021
** get_csfml_keys - is_coliding.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

int is_it_y_or_both(int x_coliding, int y_coliding)
{
    if (x_coliding == 1 && y_coliding == 1) {
        return 1;
    }
    if (x_coliding == 1 && y_coliding == 0) {
        return  0;
    }
    if (x_coliding == 0 && y_coliding == 1) {
        return 2;
    }
}

int is_sprite_coliding(sprite_t sprite1, sprite_t sprite2)
{
    int x_coliding = 0;
    int y_coliding = 0;
    int sprite1_xw = (sprite1.x + sprite1.w);
    int sprite1_yh = (sprite1.y + sprite1.h);
    if ((sprite1_xw > sprite2.x) && (sprite1_xw < (sprite2.x + sprite2.w))) {
        x_coliding = 1;
    }
    if ((sprite1_yh > sprite2.y) && (sprite1_yh < (sprite2.x + sprite2.h))) {
        y_coliding = 1;
    }
    if (x_coliding == 0 && y_coliding == 0) {
        return 0;
    }
    return is_it_y_or_both(x_coliding, y_coliding);
}