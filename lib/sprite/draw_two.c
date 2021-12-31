/*
** EPITECH PROJECT, 2021
** get_csfml_actions - draw_two.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

void draw_two_sprites(sfRenderWindow *window, two_sprites_t sprites,
                      sfRenderStates *states)
{
    sfRenderWindow_drawSprite(window, sprites.sprite1.sprite, states);
    sfRenderWindow_drawSprite(window, sprites.sprite2.sprite, states);
}