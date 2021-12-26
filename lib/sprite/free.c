/*
** EPITECH PROJECT, 2021
** runner - display.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

void free_sprite(sprite_t sprite)
{
    sfSprite_destroy(sprite.sprite);
    sfTexture_destroy(sprite.texture);
}