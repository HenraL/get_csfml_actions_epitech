/*
** EPITECH PROJECT, 2021
** get_csfml_keys - set_fram_spec.c
** File description:
** jitter jitter
*/

#include "../../include/my_silvers.h"

anim_t set_frame_spec(anim_t anim, int max_ticks, int wrap, int reset_counter)
{
    anim.max_ticks = max_ticks;
    anim.wrap = wrap;
    anim.counter_reset = reset_counter;
    return anim;
}