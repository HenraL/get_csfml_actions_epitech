/*
** EPITECH PROJECT, 2021
** runner - my_image.h
** File description:
** jitter jitter
*/

#ifndef MY_IMAGE_H_
#define MY_IMAGE_H_

#include <SFML/Graphics.h>
#include <SFML/Config.h>

typedef struct image_s
{
    char *path;
    int status;
    sfImage *image;
    sfTexture *texture;
} image_t;

image_t create_image(image_t image);
void display_image(sfRenderWindow *window, image_t image,
                   sfRenderStates *state);
void free_image(image_t iamge);

#endif