/*
** EPITECH PROJECT, 2021
** get_csfml_keys - my_text.h
** File description:
** jitter jitter
*/

#ifndef MY_TEXT_H_
#define MY_TEXT_H_

#include "my_sprite.h"
#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Glsl.h>
#include <SFML/Graphics/Color.h>
typedef struct text_s {
    sfFont *font;
    sfText *text;
    sprite_t sprite;
    char *string;
    unsigned int font_size;
    sfColor fg;
    sfColor outline_color;
    float outline_thickness;
    float rotation;
    float letter_spacing;
    sfUint32 style;
    int status;
    int x;
    int y;
} text_t;

char *font_choice(int my_choice);
text_t init_text(char *string, int my_font_choice, unsigned int font_size);
sfColor rgba(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a);
text_t set_colors(text_t my_text, sfColor fg, sfColor outline);
text_t set_more_info(text_t my_text, float thickness, float r, sfUint32 style);
text_t move_text(text_t my_text, int x, int y);
text_t move_text_using_strut(text_t my_text);
text_t update_text(text_t my_text, char *new_string);
text_t text_positioning(text_t my_text, int x, int y, float spacing);
void free_text(text_t my_text);

#endif