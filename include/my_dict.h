/*
** EPITECH PROJECT, 2021
** my_screensaver - my_dict.h
** File description:
** jitter jitter
*/

#ifndef MY_DICT_H_
#define MY_DICT_H_

#ifndef NULL
#define NULL ((void *)0)
#endif
typedef struct dict_t_struct
{
    char *key;
    void *value;
    struct dict_t_struct *next;
} dict_t;

dict_t **dict_alloc(void);
dict_t **create_dict(void);
void dict_free(dict_t **dict);
void *get_value(dict_t *dict, char *key);
void add_item(dict_t **dict, char *key, void *value);
void append(dict_t **dict, char *key, void *value);
void del_item(dict_t **dict, char *key);

#endif