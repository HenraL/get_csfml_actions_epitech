/*
** EPITECH PROJECT, 2021
** get_csfml_actions - is_reset_drag_needed.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

two_sprites_t is_reset_drag_needed(two_sprites_t sprites, int max_width)
{
    if (sprites.s1_x <= (sprites.sprite_widths * -1)) {
        sprites.s1_x = max_width;
    }
    if (sprites.s2_x <= (sprites.sprite_widths * -1)) {
        sprites.s2_x = max_width;
    }
    return sprites;
}