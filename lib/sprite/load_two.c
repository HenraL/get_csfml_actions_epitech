/*
** EPITECH PROJECT, 2021
** get_csfml_actions - load_two.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

two_sprites_t load_two_sprite(char *path1, char *path2, float w, float h)
{
    two_sprites_t sprites;
    sprites.sprite1 = load_sprite(path1);
    if (sprites.sprite1.status == 84) {
        sprites.status = 84;
        return sprites;
    }
    sprites.sprite2 = load_sprite(path2);
    if (sprites.sprite2.status == 84) {
        sprites.status = 84;
        return sprites;
    }
    sprites.sprite1 = rescale_sprite(sprites.sprite1, w, h);
    sprites.sprite2 = rescale_sprite(sprites.sprite2, w, h);
    sprites.status = 0;
    return sprites;
}