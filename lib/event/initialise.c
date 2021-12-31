/*
** EPITECH PROJECT, 2021
** runner - initialise.c
** File description:
** jitter jitter
*/

#include "../../include/my_event.h"

track_actions_t initialise_tracking(int in_game, int max_w, int max_h)
{
    track_actions_t actions;
    actions.in_game = in_game;
    actions.max_height = max_h;
    actions.max_width = max_w;
    actions.sprint = 0;
    return actions;
}

event_to_listen_t initialise_the_events(void)
{
    event_to_listen_t events;
    int value = 0;
    events.kdown = value;
    events.kup = value;
    events.mbdown = value;
    events.mbup = value;
    events.mm = value;
    events.scroll = value;
    // events.ej = initialise_joystic_events(value);
    // events.et = initialise_tactile_events(value);
    return events;
}