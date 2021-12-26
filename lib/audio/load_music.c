/*
** EPITECH PROJECT, 2021
** runner - load_music.c
** File description:
** jitter jitter
*/

#include "../../include/my_audio.h"

music_status_t load_music(music_status_t music)
{
    music.music = sfMusic_createFromFile(music.path);
    if (!music.music) {
        music.status = 84;
    }
    music.status = 0;
    return music;
}