/*
** EPITECH PROJECT, 2021
** get_csfml_keys - limit.c
** File description:
** jitter jitter
*/

#include "../../include/my_silvers.h"

sprite_t limit_one_silver(sprite_t default_sprite, limit_info_t lim) {
    default_sprite.x_step = lim.x_step;
    default_sprite.y_step = lim.y_step;
    default_sprite.x = lim.x;
    default_sprite.y = lim.y;
    return default_sprite;
}

silver_states_t limit_silvers(silver_states_t silvers)
{
    limit_info_t lim;
    lim.x = 150;
    lim.y = 703;
    lim.x_step = 150;
    lim.y_step = 150;
    silvers.silver_s_sprite = limit_one_silver(silvers.silver_s_sprite, lim);
    silvers.silver_n_sprite = limit_one_silver(silvers.silver_n_sprite, lim);
    silvers.silver_f_sprite = limit_one_silver(silvers.silver_f_sprite, lim);
    return silvers;
}