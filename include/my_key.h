/*
** EPITECH PROJECT, 2021
** get_csfml_keys - my_key.h
** File description:
** jitter jitter
*/

#ifndef MY_KEY_H_
#define MY_KEY_H_

#include "structs.h"
#include <SFML/Window/Event.h>
move_t initialise(move_t move);
move_t get_key(move_t move);
void display_content(char* description, int element);
void display(move_t move);

#endif