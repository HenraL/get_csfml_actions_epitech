/*
** EPITECH PROJECT, 2021
** runner - my_mouse.h
** File description:
** jitter jitter
*/

#ifndef MY_MOUSE_H_
#define MY_MOUSE_H_

#include <SFML/Window/Event.h>
#include <SFML/Window/Mouse.h>
#include "my_sprite.h"

typedef struct button_s {
    int x;
    int y;
    sfEventType type;
    sfMouseButton button;
    int pressed;
} button_t;

typedef struct mouse_trac_s {
    sfVector2f sprite;
    int pos_x;
    int pos_y;
    button_t butt;
    int status;
} mouse_trac_t;

mouse_trac_t init_mouse(sfEvent event, sprite_t default_sprite, int value);
mouse_trac_t mouse_update_pos(sfEvent event, mouse_trac_t mouse_sprite,
                              sprite_t default_sprite);
void hide_mouse(sfRenderWindow *window);
void show_mouse(sfRenderWindow *window);


#endif