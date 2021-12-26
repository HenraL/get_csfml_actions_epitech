/*
** EPITECH PROJECT, 2021
** runner - play_music.c
** File description:
** jitter jitter
*/

#include "../../include/my_audio.h"

music_status_t play_loaded_music(music_status_t music)
{
    sfMusic_play(music.music);
}