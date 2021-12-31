/*
** EPITECH PROJECT, 2021
** get_csfml_keys - dup_sprite.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t dup_sprite(const sprite_t source_sprite)
{
    sprite_t final_sprite;
    final_sprite.texture = sfTexture_copy(source_sprite.texture);
    final_sprite.sprite = sfSprite_copy((const sfSprite *)source_sprite.sprite);
    final_sprite.position = source_sprite.position;
    final_sprite.previous_scale_x = source_sprite.previous_scale_x;
    final_sprite.previous_scale_y = source_sprite.previous_scale_y;
    final_sprite.scale = source_sprite.scale;
    final_sprite.sprite_rect = source_sprite.sprite_rect;
    final_sprite.status = source_sprite.status;
    final_sprite.h = source_sprite.h;
    final_sprite.w = source_sprite.w;
    return final_sprite;
}