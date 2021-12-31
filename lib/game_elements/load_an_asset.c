/*
** EPITECH PROJECT, 2021
** get_csfml_keys - load_an_asset.c
** File description:
** jitter jitter
*/

#include "../../include/my_game_elements.h"

asset_info_t load_an_asset(char *path, float width, float height)
{
    asset_info_t ai;
    ai.status = 0;
    sprite_t default_sprite = load_sprite(path);
    if (default_sprite.status == 84) {
        ai.status = 84;
        return ai;
    }
    default_sprite = rescale_sprite(default_sprite, width, height);
    ai.sprite = default_sprite.sprite;
    ai.texture = default_sprite.texture;
    ai.dim.h = height;
    ai.dim.w = width;
    ai.pos.x = 0;
    ai.pos.y = 0;
    return ai;
}