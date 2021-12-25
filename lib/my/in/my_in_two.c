/*
** EPITECH PROJECT, 2021
** bistro - my_in_two.c
** File description:
** abc
*/

#include <stdlib.h>
#include "../../../include/my_lib.h"

char ini(char *needle, char const *haystack)
{
    int i = 0;
    int j = 0;
    char *search_res;
    search_res = malloc(sizeof(char) * (my_strlen(haystack) + 1));
    if (my_strlen(needle) >= my_strlen(haystack)) {
        return 0;
    }
    for (; haystack[i] != '\0'; i++) {
        j = 0;
        for (; needle[j] != '\0'; j++) {
            if (needle[j] == haystack[i + j]) {
                search_res[j] = haystack[i + j];
            } else if (my_strcmp(search_res, needle) == 1) {
                return i;
            } else {
                free(search_res);
                search_res = malloc(sizeof(char) * (my_strlen(haystack) + 1));
            }
        }
        return (-1);
    }
}

int inis(int i, char *needle, char const *haystack)
{
    int j = 0;
    char *search_res;
    search_res = malloc(sizeof(char) * (my_strlen(haystack) + 1));
    if (my_strlen(needle) >= my_strlen(haystack)) {
        return 0;
    }
    for (; haystack[i] != '\0'; i++) {
        j = 0;
        for (; needle[j] != '\0'; j++) {
            if (needle[j] == haystack[i + j]) {
                search_res[j] = haystack[i + j];
            } else if (my_strcmp(search_res, needle) == 1) {
                return i;
            } else {
                free(search_res);
                search_res = malloc(sizeof(char) * (my_strlen(haystack) + 1));
            }
        }
    }
    return (-1);
}
