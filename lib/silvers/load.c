/*
** EPITECH PROJECT, 2021
** get_csfml_keys - load.c
** File description:
** jitter jitter
*/

#include "../../include/my_silvers.h"

silver_states_t load_the_silvers(char *path1, char *path2, char *path3,
                                 sfVector2f scale)
{
    silver_states_t silvers;
    silvers.silver_s_sprite = load_n_size(path1,
                                          initialise_sffloatrect(0, 0, 130, 50),
                                          initialise_sfintrect(0, 0, 33, 51),
                                          scale);
    silvers.silver_s_sprite.anim = set_frame_spec(silvers.silver_s_sprite.anim,
                                                  20, sfTrue, sfFalse);
    silvers.silver_n_sprite = load_n_size(path2,
                                          initialise_sffloatrect(0, 0, 129, 51),
                                          initialise_sfintrect(0, 0, 33, 51),
                                          scale);
    silvers.silver_n_sprite.anim = set_frame_spec(silvers.silver_n_sprite.anim,
                                                  15, sfTrue, sfFalse);
    silvers.silver_f_sprite = load_n_size(path3,
                                          initialise_sffloatrect(0, 0, 254, 51),
                                          initialise_sfintrect(0, 0, 32, 50),
                                          scale);
    silvers.silver_f_sprite.anim = set_frame_spec(silvers.silver_f_sprite.anim,
                                                  20, sfTrue, sfFalse);
    silvers = limit_silvers(silvers);
    return silvers;
}