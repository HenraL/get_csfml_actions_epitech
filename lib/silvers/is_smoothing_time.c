/*
** EPITECH PROJECT, 2021
** get_csfml_keys - is_smoothing_time.c
** File description:
** jitter jitter
*/

#include "../../include/my_silvers.h"

smoothing_tracker_t is_smoothing_time_overflow(smoothing_tracker_t is_it)
{
    if (is_it.smoother > 0 && is_it.smoother < 6) {
        is_it.global_speed++;
        is_it.smoother++;
    }
    if (is_it.smoother > 6 && is_it.smoother < 11) {
        is_it.global_speed++;
        is_it.smoother++;
    }
    return is_it;
}

smoothing_tracker_t is_smoothing_time(smoothing_tracker_t is_it,
                                      silver_states_t silvers, sprite_t p_sp)
{
    is_it.nb_loops++;
    if ((is_it.nb_loops / 1000) == 1) {
        // my_putstr("global speed 0 -> 5\n");
        // sprite_t silver_sprite = override_sprite(p_sp,
        //                                          change_sprite(silvers, 2));
        p_sp.anim.max_ticks = 15;
        is_it.smoother += 1;
    }
    if ((is_it.nb_loops / 1000) == 2) {//3) {
        // my_putstr("global_speed 5 -> 10\n");
        // sprite_t silver_sprite = override_sprite(p_sp,
        //                                          change_sprite(silvers, 3));
        p_sp.anim.max_ticks = 5;
        is_it.smoother++;
    }
    if (is_it.smoother > 0 && is_it.smoother < 11) {
        is_it = is_smoothing_time_overflow(is_it);
        // is_it.silver.x_step += is_it.global_speed;
        // is_it.silver.y_step += is_it.global_speed;
        return is_it;
    }
    printf("is_it.silver.x_step = %d | is_it.silver.x = %d\n", is_it.silver.x_step, is_it.silver.x);
    printf("is_it.silver.y_step = %d | is_it.silver.y = %d\n", is_it.silver.y_step, is_it.silver.y);
    printf("is_it.global_speed = %d\n", is_it.global_speed);
    return is_it;
}

smoothing_tracker_t init_smoothing(silver_states_t silvers)
{
    smoothing_tracker_t is_it;
    is_it.smoother = 0;
    is_it.global_speed = 0;
    is_it.nb_loops = 0;
    is_it.silver = change_sprite(silvers, 1);
    return is_it;
}