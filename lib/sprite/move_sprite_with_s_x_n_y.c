/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** move_sprite_from_s_coordinates.c
*/

#include "../../include/my_sprite.h"

sprite_t move_sprite_with_s_x_n_y(sprite_t default_sprite)
{
    default_sprite = move_sprite(default_sprite, default_sprite.x,
                                 default_sprite.y);
    return default_sprite;
}