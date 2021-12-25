/*
** EPITECH PROJECT, 2021
** Task02 - my_strncpy.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int list_length_dest = my_strlen(dest);
    while (i < n) {
        dest[i] = src[i];
        if ((list_length_dest < n) && (i == list_length_dest)) {
            dest[list_length_dest + 1] = '\0';
            return dest;
        } else {
            i++;
        }
    }
    return dest;
}
