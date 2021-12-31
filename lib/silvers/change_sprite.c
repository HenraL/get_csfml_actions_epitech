/*
** EPITECH PROJECT, 2021
** get_csfml_keys - change_sprite.c
** File description:
** jitter jitter
*/

#include "../../include/my_silvers.h"

sprite_t change_sprite_overflow(silver_states_t silvers, int sprite_id)
{
    sprite_t silver;
    if (sprite_id == 3) {
        silver = silvers.silver_f_sprite;
    }
    if (sprite_id < 1 || sprite_id > 3) {
        silver = silvers.silver_n_sprite;
    }
    return silver;
}

sprite_t change_sprite(silver_states_t silvers, int sprite_id)
{
    sprite_t silver;
    if (sprite_id == 1) {
        silver = silvers.silver_s_sprite;
    }
    if (sprite_id == 2) {
        silver = silvers.silver_n_sprite;
    }
    if (sprite_id > 2) {
        return change_sprite_overflow(silvers, sprite_id);
    }
    return silver;
}