/*
** EPITECH PROJECT, 2021
** runner - create.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t create_sprite(sprite_t sprite)
{
    sprite.texture = sfTexture_createFromFile(sprite.path, NULL);
    if (!sprite.texture) {
        sprite.status = 84;
    } else {
        sprite.sprite = sfSprite_create();
        sfSprite_setTexture(sprite.sprite, sprite.texture, sfTrue);
        sprite.status = 0;
    }
    return sprite;
}