/*
** EPITECH PROJECT, 2021
** get_csfml_keys - my_silvers.h
** File description:
** jitter jitter
*/

#ifndef MY_SILVERS_H_
#define MY_sILVERS_H_

#include "my_sprite.h"

typedef struct limit_info_s
{
    int y_step;
    int x_step;
    int y;
    int x;
} limit_info_t;


typedef struct silver_states_s {
    sprite_t silver_s_sprite;
    sprite_t silver_n_sprite;
    sprite_t silver_f_sprite;
} silver_states_t;

silver_states_t load_the_silvers(char *path1, char *path2, char *path3,
                                 sfVector2f scale);
sprite_t limit_one_silver(sprite_t default_sprite, limit_info_t lim);
silver_states_t limit_silvers(silver_states_t silvers);
sprite_t change_sprite(silver_states_t silvers, int sprite_id);
smoothing_tracker_t init_smoothing(silver_states_t silvers);
smoothing_tracker_t is_smoothing_time(smoothing_tracker_t is_it,
                                      silver_states_t silvers, sprite_t p_sp);
anim_t set_frame_spec(anim_t anim, int max_ticks, int wrap, int reset_counter);
void free_silvers(silver_states_t silvers);

#endif