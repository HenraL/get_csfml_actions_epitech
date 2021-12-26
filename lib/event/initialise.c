/*
** EPITECH PROJECT, 2021
** runner - initialise.c
** File description:
** jitter jitter
*/

#include "../../include/my_event.h"

/*event_to_listen_joystick_t initialise_joystic_events(int value)
{
    event_to_listen_joystick_t events;
    events.jcon = value;
    events.jdcon = value;
    events.jdown = value;
    events.jmoved = value;
    events.jup = value;
    return events;
}

event_to_listen_tactile_t initialise_tactile_events(int value)
{
    event_to_listen_tactile_t events;
    events.tb = value;
    events.tend = value;
    events.tm = value;
    return events;
}*/

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