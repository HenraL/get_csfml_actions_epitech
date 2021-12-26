/*
** EPITECH PROJECT, 2021
** runner - my_event.h
** File description:
** jitter jitter
*/

#ifndef MY_EVENT_H_
#define MY_EVENT_H_

#include <SFML/Window/Event.h>

/*typedef struct event_tactile_s {
    sfEvtTouchBegan tb;
    sfEvtTouchMoved *tm;
    sfEvtTouchEnded *tend;
} event_tactile_t;


typedef struct event_joystick_s {
    sfEvtJoystickButtonPressed jdown;
    sfEvtJoystickButtonReleased *jup;
    sfEvtJoystickMoved *jmoved;
    sfEvtJoystickConnected *jcon;
    sfEvtJoystickDisconnected *jdcon;
} event_joystick_t;


typedef struct event_s {
    sfEvtKeyPressed kdown;
    sfEvtKeyReleased *kup;
    sfEvtMouseWheelScrolled *scroll;
    sfEvtMouseButtonPressed *mbdown;
    sfEvtMouseButtonReleased *mbup;
    sfEvtMouseMoved *mm;
    event_joystick_t joystick;
    event_tactile_t et;
} event_t;*/

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


event_to_listen_t initialise_events(event_to_listen_t events);
// event_t on_event(event_t event, event_to_listen_t e_t_l);
// event_to_listen_t on_listened_event(event_to_listen_t events, sfEvent event);
void display_key_code(sfEvent event);
// void display_event(sfEvent events);

#endif