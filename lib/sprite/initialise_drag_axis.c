/*
** EPITECH PROJECT, 2021
** get_csfml_actions - initialise_drag_axis.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

two_sprites_t initialise_drag_axis(two_sprites_t sprites, int value)
{
    sprites.s1_x = value;
    sprites.s1_y = value;
    sprites.s2_x = value;
    sprites.s2_y = value;
    return sprites;
}