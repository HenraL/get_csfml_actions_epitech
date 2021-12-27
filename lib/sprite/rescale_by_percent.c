/*
** EPITECH PROJECT, 2021
** get_csfml_actions_epitech - rescale_by_percent.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"
#include "../../include/my_maths.h"

sprite_t rescale_sprite_by_percent(sprite_t default_sprite, float fact, int up)
{
    float new_x = 0;
    float new_y = 0;
    new_x = calc_percent(fact, default_sprite.previous_scale_x, up);
    new_y = calc_percent(fact, default_sprite.previous_scale_y, up);
    default_sprite = rescale_sprite(default_sprite, new_x, new_y);
    return default_sprite;
}