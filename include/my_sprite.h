/*
** EPITECH PROJECT, 2021
** runner - my_sprite.h
** File description:
** jitter jitter
*/

#ifndef MY_SPRITE_H_
#define MY_SPRITE_H_

#include <SFML/Config.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/RenderStates.h>
#include "my_maths.h"
#include "my_window.h"

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f scale;
    float previous_scale_x;
    float previous_scale_y;
    int status;
} sprite_t;

typedef struct two_sprites_s {
    sprite_t sprite1;
    sprite_t sprite2;
    int status;
} two_sprites_t;

sprite_t load_sprite(char *image_path);
two_sprites_t load_two_sprite(char *path1, char *path2, float x, float y);
void display_sprite(sfRenderWindow *window, sprite_t image,
                    sfRenderStates *state);
sprite_t rescale_sprite(sprite_t default_sprite, float new_x, float new_y);
sprite_t rescale_sprite_by_percent(sprite_t default_sprite, float fact, int up);
sprite_t move_sprite(sprite_t default_sprite, int x, int y);
void free_sprite(sprite_t default_sprite);
void free_two_sprites(two_sprites_t sprites);
#endif