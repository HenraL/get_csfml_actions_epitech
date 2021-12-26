/*
** EPITECH PROJECT, 2021
** runner - load.c
** File description:
** jitter jitter
*/

#include "../../include/my_image.h"

image_t create_image(image_t image)
{
    image.texture = sfTexture_createFromFile(image.path, NULL);
    if (!image.texture) {
        image.status = 84;
    } else {
        image.image = sfImage_create();
        sfSprite_setTexture(image.image, image.texture, sfTrue);
        image.status = 0;
    }
    return image;
}