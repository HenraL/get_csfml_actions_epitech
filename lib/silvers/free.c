/*
** EPITECH PROJECT, 2021
** get_csfml_keys - free.c
** File description:
** jitter jitter
*/

#include "../../include/my_silvers.h"

void free_silvers(silver_states_t silvers)
{
    free_sprite(silvers.silver_f_sprite);
    free_sprite(silvers.silver_n_sprite);
    free_sprite(silvers.silver_s_sprite);
}