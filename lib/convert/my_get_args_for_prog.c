/*
** EPITECH PROJECT, 2021
** my_screensaver - my_get_args_for_prog.c
** File description:
** jitter jitter
*/

#include "../../include/my_lib.h"
#include "../../include/my_convert.h"
#include <stdlib.h>

int treat_program_and_speed(char *arg, int b, int default_return)
{
    int temp = 0;
    int c = b;
    for (;arg[c] != '\0';c++) {
        if (my_isnum(arg[c]) == 0) {
            temp = ((int)arg[c] - '0');
            return temp;
        }
    }
    return default_return;
}

int overflow_check(char *arg, int c, int temp)
{
    if ((arg[c] == 'a' || arg[c] == 'A') && my_isnum(arg[c + 1]) == 0) {
        temp = c + 1;
    }
    return temp;
}

int get_totality_of_nb(char *arg, int c)
{
    int temp = 0;
    char *temp_nb = malloc(sizeof(char) * 40);
    int d = c;
    int u = 0;
    for (; my_isnum(arg[d]) == 0; d++) {
        temp_nb[d] = arg[d];
    }
    return temp;
}

int alpha_found(char *arg, int found)
{
    int temp = 255;
    if (found > 0) {
        temp = get_totality_of_nb(arg, found);
    }
    return temp;
}

int *treat_pixels(char *arg, int b)
{
    int pix_found = 0;
    int *pixels = malloc(sizeof(int) * 4);
    pixels[0] = 255;
    pixels[1] = 255;
    pixels[2] = 255;
    pixels[3] = 255;
    int temp = 0;
    int c = b;
    for (;arg[c] != '\0';c++) {
        if ((arg[c] == 'r' || arg[c] == 'R') && my_isnum(arg[c + 1]) == 0) {
            pixels[0] = get_totality_of_nb(arg, c + 1);
        }
        if ((arg[c] == 'r' || arg[c] == 'R') && my_isnum(arg[c + 1]) == 0) {
            pixels[1] = get_totality_of_nb(arg, c + 1);
        }
        if ((arg[c] == 'r' || arg[c] == 'R') && my_isnum(arg[c + 1]) == 0) {
            pixels[2] = get_totality_of_nb(arg, c + 1);
        }
        pix_found = overflow_check(arg, c, pix_found);
    }
    pixels[3] = alpha_found(arg, pix_found);
    return pixels;
}
