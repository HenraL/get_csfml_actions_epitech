/*
** EPITECH PROJECT, 2021
** runner - load_audio.c
** File description:
** jitter jitter
*/

#include "../../include/my_audio.h"

music_status_t load_audio(music_status_t music)
{
    // sfSound sound;
    // sound.
    // sfSound_create;
    sfSound *sound = sfSound_create();
    sound->
        music.music = sfSound;//(music.music_path);
    if (!music.music) {
        music.load_status 84;
    }
    music.load_status = 0;
    return music;
}