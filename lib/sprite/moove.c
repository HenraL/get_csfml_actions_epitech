/*
** EPITECH PROJECT, 2021
** runner - move.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t move_sprite(sprite_t default_sprite, int x, int y)
{
    sfVector2f position = { x,y };
    default_sprite.position = position;
    sfSprite_setPosition(default_sprite.sprite, position);
    default_sprite.x = x;
    default_sprite.y = y;
    return default_sprite;
}