/*
** EPITECH PROJECT, 2021
** my_screensaver - append.c
** File description:
** jitter jitter
*/

// #include <string.h> // strcpy
#include <stdlib.h>
#include "../../include/my_dict.h"
#include "../../include/my_lib.h"

void add_item(dict_t **dict, char *key, void *value)
{
    del_item(dict, key);
    dict_t *d = malloc(sizeof(struct dict_t_struct));
    d->key = malloc(my_strlen(key) + 1);
    my_strcpy(d->key, key);
    d->value = value;
    d->next = *dict;
    *dict = d;
}

void append(dict_t **dict, char *key, void *value)
{
    add_item(dict, key, value);
}