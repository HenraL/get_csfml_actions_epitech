/*
** EPITECH PROJECT, 2021
** get_csfml_actions_epitech
** File description:
** change_two_val.c
*/

#include "../../include/my_sprite.h"

two_sprites_t change_two_val(two_sprites_t sprites, int up_or_down, int nb)
{
    if (up_or_down == 1) {
        sprites.s1_x += nb;
        sprites.s2_x += nb;
    } else {
        sprites.s1_x -= nb;
        sprites.s2_x -= nb;
    }
    return sprites;
}