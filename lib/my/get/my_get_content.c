/*
** EPITECH PROJECT, 2021
** bsq_boostrap - my_get_content.c
** File description:
** abc
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include "../../../include/my_lib.h"

char *get_content(char const *filepath) {
    int result = open(filepath, O_RDONLY);
    int nb_chars_to_read = 3000000;
    char *content_of_file = malloc(sizeof(char) * nb_chars_to_read);
    if (result != -1) {
        read(result, content_of_file, nb_chars_to_read);
        close(result);
        char *temp = content_of_file;
        free(content_of_file);
        return temp;
    } else {
        return (char *)84;
    }
}
