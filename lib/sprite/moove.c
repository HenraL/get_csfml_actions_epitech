/*
** EPITECH PROJECT, 2021
** runner - move.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t move_sprite(sprite_t sprite)
{
    sfRenderWindow_drawSprite(window, sprite.sprite, state);
}