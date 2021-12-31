/*
** EPITECH PROJECT, 2021
** runner - create.c
** File description:
** jitter jitter
*/

#include "../../include/my_event.h"

track_actions_t on_event(sfEvent event, track_actions_t actions)
{
    if (event.type == sfEvtClosed ||
        (event.type == sfEvtKeyReleased &&
         (event.key.code == sfKeyQ || event.key.code == sfKeyEscape))) {
        sfRenderWindow_close(actions.window);
    } else if (event.type == sfEvtKeyPressed) {
        actions = on_keydown(event, actions);
    }
    return actions;
}