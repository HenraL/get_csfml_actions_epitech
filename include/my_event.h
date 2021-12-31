/*
** EPITECH PROJECT, 2021
** runner - my_event.h
** File description:
** jitter jitter
*/

#ifndef MY_EVENT_H_
#define MY_EVENT_H_

#include <SFML/Window/Event.h>
#include "my_lib.h"
#include "my_sprite.h"

typedef struct event_to_listen_tactile_s {
    int tb;
    int tm;
    int tend;
} event_to_listen_tactile_t;


typedef struct event_to_listen_joystick_s {
    int jdown;
    int jup;
    int jmoved;
    int jcon;
    int jdcon;
} event_to_listen_joystick_t;

typedef struct event_to_listen_s {
    int kup;
    int kdown;
    int scroll;
    int mbdown;
    int mbup;
    int mm;
    event_to_listen_joystick_t ej;
    event_to_listen_tactile_t et;

} event_to_listen_t;

typedef struct move_to_s
{
    int up;
    int down;
    int left;
    int right;
    int center;
} move_to_t;

typedef struct track_actions_s {
    sprite_t silver;
    sfRenderWindow *window;
    int in_game;
    int max_width;
    int max_height;
    int sprint;
    int global_speed;

} track_actions_t;


event_to_listen_t initialise_events(event_to_listen_t events);
track_actions_t initialise_tracking(int in_game, int max_w, int max_h);
void display_key_code(sfEvent event);
track_actions_t on_event(sfEvent event, track_actions_t actions);
track_actions_t on_keydown(sfEvent event, track_actions_t actions);
track_actions_t on_keydown_overflow1(sfEvent event, track_actions_t actions);
track_actions_t on_keydown_of2(sfEvent event, track_actions_t actions);
track_actions_t on_keydown_of3(sfEvent event, track_actions_t actions);
track_actions_t on_keydown_of5(sfEvent event, track_actions_t actions);

#endif