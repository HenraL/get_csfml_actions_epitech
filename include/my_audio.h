/*
** EPITECH PROJECT, 2021
** runner (Workspace)
** File description:
** my_audio.h
*/

#ifndef MY_AUDIO_
#define MY_AUDIO_

#include <SFML/Audio.h>
typedef struct music_status_s
{
    char *path;
    sfMusic *music;
    int status;
} music_status_t;

music_status_t load_music(music_status_t music);
music_status_t play_loaded_music(music_status_t music);
void free_music(music_status_t music);




#endif