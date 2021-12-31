/*
** EPITECH PROJECT, 2021
** runner - free_audio.c
** File description:
** jitter jitter
*/

#include "../../include/my_audio.h"

void free_audio(music_status_t music)
{
    sfAudio_destroy(music.music);
}