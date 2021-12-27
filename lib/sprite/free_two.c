/*
** EPITECH PROJECT, 2021
** get_csfml_actions - free_two.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

void free_two_sprites(two_sprites_t sprites)
{
    free_sprite(sprites.sprite1);
    free_sprite(sprites.sprite2);
}