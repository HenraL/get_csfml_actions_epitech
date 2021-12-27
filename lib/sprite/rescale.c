/*
** EPITECH PROJECT, 2021
** get_csfml_actions_epitech - rescale.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t rescale_sprite(sprite_t default_sprite, float new_x, float new_y)
{
    sfVector2f scale = { new_x, new_y };
    default_sprite.scale = scale;
    default_sprite.previous_scale_x = new_x;
    default_sprite.previous_scale_y = new_y;
    sfSprite_setScale(default_sprite.sprite, scale);
    return default_sprite;
}