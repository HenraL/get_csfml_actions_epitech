/*
** EPITECH PROJECT, 2021
** get_csfml_keys - my_end.h
** File description:
** jitter jitter
*/

#ifndef MY_END_H_
#define MY_END_H_

#include "my_sprite.h"

typedef struct end_values_s {
    int type;
    sprite_t sprite_won;
    sprite_t sprite_lost;
    sprite_t button_restart;
    sfRenderWindow *window;

} end_values_t;

end_values_t display_correct_ending(end_values_t end, track_time_t time);

#endif