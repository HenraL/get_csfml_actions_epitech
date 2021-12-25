/*
** EPITECH PROJECT, 2021
** bistro - my_in.c
** File description:
** abc - not working
*/

#include <stdlib.h>
#include "../../../include/my_lib.h"

char in(char *element, char const *list_reference)
{
    int i = 0;
    int j = 0;
    char *search_res;
    search_res = malloc(sizeof(char) * (my_strlen(list_reference) + 1));
    if (my_strlen(element) > my_strlen(list_reference)) {
        return 0;
    }
    for (; list_reference[i] != '\0'; i++) {
        my_putchar(list_reference[i]);
        j = 0;
        for (; element[j] != '\0'; j++) {
            my_putchar(element[j]);
            if (element[j] == list_reference[i + j]) {
                search_res[j] = list_reference[i + j];
            } else if (my_strlen(element) == my_strlen(search_res)) {
                free(search_res);
                return 1;
            } else {
                free(search_res);
                search_res = malloc(sizeof(char) * (my_strlen(list_reference) + 1));
            }
        }
    }
    return 0;
}

char ins(char *needle, char const *haystack)
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
                return haystack[i + j];
            } else {
                free(search_res);
                search_res = malloc(sizeof(char) * (my_strlen(haystack) + 1));
            }
        }
    }
    return 0;
}

char inc(char *needle, char const *haystack)
{
    int i = 0;
    int j = 0;
    char *search_res;
    search_res = malloc(sizeof(char) * (my_strlen(haystack) + 1));
    if (my_strlen(needle) <= my_strlen(haystack)) {
        return 0;
    }
    for (; haystack[i] != '\0'; i++) {
        j = 0;
        for (; needle[j] != '\0'; j++) {
            if (needle[j] == haystack[i + j]) {
                search_res[j] = haystack[i + j];
            } else if (my_strcmp(search_res, needle) == 1) {
                return *needle;
            } else {
                free(search_res);
                search_res = malloc(sizeof(char) * (my_strlen(haystack) + 1));
            }
        }
    }
}


