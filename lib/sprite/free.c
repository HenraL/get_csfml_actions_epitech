/*
** EPITECH PROJECT, 2021
** runner - display.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

void free_sprite(sprite_t default_sprite)
{
    sfTexture_destroy(default_sprite.texture);
    sfSprite_destroy(default_sprite.sprite);
}