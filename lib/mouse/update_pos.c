/*
** EPITECH PROJECT, 2021
** runner - analyse.c
** File description:
** jitter jitter
*/

#include "../../include/my_mouse.h"

mouse_trac_t mouse_update_pos(sfEvent event, mouse_trac_t mouse_sprite,
                              sprite_t default_sprite)
{
    if (event.type == sfEvtMouseMoved) {
        mouse_sprite.sprite.x = event.mouseMove.x;
        mouse_sprite.sprite.y = event.mouseMove.y;
        mouse_sprite.pos_x = event.mouseMove.x;
        mouse_sprite.pos_y = event.mouseMove.y;
        sfSprite_setPosition(default_sprite.sprite, mouse_sprite.sprite);
    }
    if (event.type == sfEvtMouseButtonPressed) {
        mouse_sprite.butt.x = event.mouseButton.x;
        mouse_sprite.butt.y = event.mouseButton.y;
        mouse_sprite.butt.pressed = 1;
    }
    if (event.type == sfEvtMouseButtonReleased) {
        mouse_sprite.butt.x = event.mouseButton.x;
        mouse_sprite.butt.y = event.mouseButton.y;
        mouse_sprite.butt.pressed = 0;
    }
    return mouse_sprite;
}