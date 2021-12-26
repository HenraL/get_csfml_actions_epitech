/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** get_key.c
*/

#include <stdlib.h>
#include "../../include/my_dict.h"
#include "../../include/my_lib.h"

void *get_value(dict_t *dict, char *key)
{
    dict_t *ptr;
    for (ptr = dict; ptr != NULL; ptr = ptr->next) {
        if (my_strcmp(ptr->key, key) == 0) {
            return ptr->value;
        }
    }

    return NULL;
}
