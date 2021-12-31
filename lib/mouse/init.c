/*
** EPITECH PROJECT, 2021
** get_csfml_keys - init.c
** File description:
** jitter jitter
*/

#include "../../include/my_mouse.h"

mouse_trac_t init_mouse(sfEvent event, sprite_t default_sprite, int value)
{
    mouse_trac_t mouse_sprite;
    mouse_sprite.pos_x = value;
    mouse_sprite.pos_y = value;
    mouse_sprite.sprite.x = value;
    mouse_sprite.sprite.y = 9;
    mouse_sprite.butt.x = value;
    mouse_sprite.butt.y = value;
    mouse_sprite.sprite.x = value;
    mouse_sprite.sprite.y = value;
    mouse_sprite.butt.pressed = 0;
    mouse_sprite.status = 0;
    mouse_sprite = mouse_update_pos(event, mouse_sprite, default_sprite);
    return mouse_sprite;
}