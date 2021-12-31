/*
** EPITECH PROJECT, 2021
** get_csfml_keys - init_anim.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

anim_t init_anim(sfFloatRect sheet_rect, sfIntRect char_rect)
{
    anim_t default_anim;
    default_anim.max_h = (int)sheet_rect.height;
    default_anim.max_w = (int)sheet_rect.width;
    default_anim.step_h = char_rect.height;
    default_anim.step_w = char_rect.width;
    return default_anim;
}
