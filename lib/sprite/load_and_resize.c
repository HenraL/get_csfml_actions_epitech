/*
** EPITECH PROJECT, 2021
** get_csfml_keys - load_and_resize.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t load_n_size(char *path, sfFloatRect sheet_rect,
                     sfIntRect char_rect, sfVector2f rescale)
{
    sprite_t sprite = load_character(path,
                                     sheet_rect,
                                     char_rect);
    sprite = rescale_sprite_by_percent(sprite, rescale.x, rescale.y);
    sprite.anim = init_anim(sheet_rect, char_rect);
    sfTexture_setRepeated(sprite.texture, sfTrue);
    return sprite;
}