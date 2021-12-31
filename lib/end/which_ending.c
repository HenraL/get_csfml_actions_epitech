/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** which_ending.c
*/

#include "../../include/my_end.h"

end_values_t display_correct_ending(end_values_t end, track_time_t time)
{
    if (end.type == 3) {
        end.sprite_won = move_sprite(end.sprite_won, 560, 340);
        end.sprite_won = next_frame(end.sprite_won, time.won);
    } else if (end.type == 4) {
        end.sprite_lost = move_sprite(end.sprite_lost, 560, 340);
        end.sprite_lost = next_frame(end.sprite_lost, time.lost);
    }
    return end;
}
