/*
** EPITECH PROJECT, 2021
** runner - my_sprite.h
** File description:
** jitter jitter
*/

#ifndef MY_SPRITE_H_
#define MY_SPRITE_H_

#include <SFML/Graphics.h>
#include <SFML/Config.h>

typedef struct sprite_s
{
    char *path;
    int status;
    sfSprite *sprite;
    sfTexture *texture;
} sprite_t;

sprite_t create_sprite(sprite_t image);
void display_sprite(sfRenderWindow *window, sprite_t image,
                    sfRenderStates *state);
sprite_t moove_sprite(sprite_t sprite);
void free_sprite(sprite_t sprite);

#endif