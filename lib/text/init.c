/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** init.c
*/

#include "../../include/my_text.h"

char *font_choice(int my_choice)
{
    char *Helvetica_bold = "ttf/Helvetica-Bold.ttf";
    char *nice_sega_sonic = "ttf/NiseSegaSonic.ttf";
    if (my_choice == 1) {
        return nice_sega_sonic;
    }
    if (my_choice == 2) {
        return Helvetica_bold;
    }
    if (my_choice < 1 && my_choice > 2) {
        return nice_sega_sonic;
    }
}

text_t init_text(char *string, int my_font_choice, unsigned int font_size)
{
    text_t my_text;
    my_text.font = sfFont_createFromFile(font_choice(my_font_choice));
    my_text.text = sfText_create();
    sfText_setString(my_text.text, string);
    sfText_setFont(my_text.text, my_text.font);
    sfText_setCharacterSize(my_text.text, font_size);
    my_text.font_size = font_size;
    my_text.string = string;
    my_text.x = 0;
    my_text.y = 0;
    my_text.status = 0;
    return my_text;

}