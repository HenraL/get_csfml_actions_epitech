/*
** EPITECH PROJECT, 2021
** runner - play_audio.c
** File description:
** jitter jitter
*/

#include "../../include/my_audio.h"

music_status_t play_loaded_audio(music_status_t music)
{
    sfAudio_play(music.music);
}