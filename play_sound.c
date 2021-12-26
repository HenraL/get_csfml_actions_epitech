/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** display_sprite.c
*/

// #include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "include/my_window.h"

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *texture;
    int status;
} sprite_t;

typedef struct music_s {
    sfSoundBuffer *soundbuffer;
    sfSound *sound;
    // sfMusic *music;
    int status;
} music_t;


music_t load_music(char *path)
{
    music_t music;
    music.soundbuffer = sfSoundBuffer_createFromFile(path);
    music.sound = sfSound_create();
    sfSound_setBuffer(music.sound, music.soundbuffer);
    return music;
}

void free_music(music_t music)
{
    sfSound_destroy(music.sound);
    sfSoundBuffer_destroy(music.soundbuffer);
}

// music_t load_music(char *path)
// {
//     music_t default_music;
//     default_music.music = sfMusic_createFromFile(path);
//     if (!default_music.music) {
//         default_music.status = 84;
//         return default_music;
//     }
//     default_music.status = 0;
//     return default_music;
// }

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width * height * 32 / 8);
    return (framebuffer);
}

int main(void)
{
    char *music_path = "ogg/facebook_pop.ogg";
    sfRenderWindow *window;
    framebuffer_t *fb;
    sfEvent event;
    music_t music1;
    music1 = load_music(music_path);
    sfSound_play(music1.sound);
    // sfMusic_play(music1.sound);
    //1- Create the ressources
    window = createWindow(800, 800);
    fb = framebuffer_create(800, 800);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }

        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
    free_music(music1);
}