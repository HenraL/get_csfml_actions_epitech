/*
** EPITECH PROJECT, 2021
** runner - display.c
** File description:
** jitter jitter
*/

#include "../../include/my_event.h"
#include "../../include/my_lib.h"

void display_value(char *text, int content)
{
    my_putstr(text);
    my_put_nbr(content);
    my_putchar('\n');
}

void display_event(sfEvent events)
{
    display_value("events.kdown", events.kdown);
    display_value("events.kup", events.kup);
    display_value("events.mbdown", events.mbdown);
    display_value("events.mbup", events.mbup);
    display_value("events.mm", events.mm);
    display_value("events.scroll", events.scroll);
    display_value("events.et.tb", events.et.tb);
    display_value("events.et.tend", events.et.tend);
    display_value("events.et.tm", events.et.tm);
    display_value("events.joystick.jcon", events.joystick.jcon);
    display_value("events.joystick.jdcon", events.joystick.jdcon);
    display_value("events.joystick.jdown", events.joystick.jdown);
    display_value("events.joystick.jmoved", events.joystick.jmoved);
    display_value("events.joystick.jup", events.joystick.jup);
}