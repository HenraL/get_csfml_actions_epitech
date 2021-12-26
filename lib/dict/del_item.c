/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** del_item.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "../../include/my_dict.h"
#include "../../include/my_lib.h"

void overflow(dict_t *ptr, dict_t *prev, dict_t **dict)
{
    if (ptr->next != NULL) {
        if (prev == NULL) {
            *dict = ptr->next;
        } else {
            prev->next = ptr->next;
        }
    } else if (prev != NULL) {
        prev->next = NULL;
    } else {
        *dict = NULL;
    }

    free(ptr->key);
    free(ptr);

    return;
}

void del_item(dict_t **dict, char *key)
{
    dict_t *ptr, *prev;
    for (ptr = *dict, prev = NULL; ptr != NULL; prev = ptr, ptr = ptr->next) {
        if (my_strcmp(ptr->key, key) == 0) {
            overflow(ptr, prev, dict);
            return;
        }
    }
}