/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** on_keydown.c
*/

#include "../../include/my_event.h"

track_actions_t on_keydown_of5(sfEvent event, track_actions_t actions)
{
    if (((event.key.code != sfKeyLeft || event.key.code != sfKeyLeft) &&
         event.key.code != sfKeyDown) && actions.sprint == sfTrue) {
        actions.sprint = sfFalse;
        actions.global_speed -= 5;
    } else if (event.key.code == sfKeyR && actions.in_game != 2) {
        actions.in_game = 2;
    } else {

    }
    return actions;
}
