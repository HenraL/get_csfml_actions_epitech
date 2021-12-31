/*
** EPITECH PROJECT, 2021
** get_csfml_actions - move_two.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

two_sprites_t move_two_sprites(two_sprites_t sprites)
{
    sprites.sprite1 = move_sprite(sprites.sprite1, sprites.s1_x, sprites.s1_y);
    sprites.sprite2 = move_sprite(sprites.sprite2, sprites.s2_x, sprites.s2_y);
    return sprites;
}