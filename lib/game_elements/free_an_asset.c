/*
** EPITECH PROJECT, 2021
** get_csfml_keys - free_an_asset.c
** File description:
** jitter jitter
*/

#include "../../include/my_game_elements.h"

void free_an_asset(asset_info_t asset)
{
    sfTexture_destroy(asset.texture);
    sfSprite_destroy(asset.sprite);
}