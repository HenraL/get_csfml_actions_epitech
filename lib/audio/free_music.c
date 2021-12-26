/*
** EPITECH PROJECT, 2021
** runner - free_music.c
** File description:
** jitter jitter
*/

#include "../../include/my_audio.h"

void free_music(music_status_t music)
{
    sfMusic_destroy(music.music);
}