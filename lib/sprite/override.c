/*
** EPITECH PROJECT, 2021
** get_csfml_keys - override.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t override_sprite(sprite_t old, sprite_t new_sp)
{
    free_sprite(old);
    return new_sp;
}