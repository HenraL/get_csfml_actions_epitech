/*
** EPITECH PROJECT, 2021
** Bootstrap - libmy.h
** File description:
** abc
*/

#ifndef MY_LIB_H_
#define MY_LIB_H_

void my_putchar(char c);
void my_put_ptr(void *ptr);
void my_swap(int *a, int *b);
void my_putstr(char const *str);
void my_sort_int_array(int *tab, int size);
void my_putnbr_base(int nbr, char *base);
void my_convertnbr_base_rec(int nbr, char *base, int base_len, char *str);
void my_putptr_base(void *ptr, char *base);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char in(char *element, char const *list_reference);
char ins(char *needle, char const *haystack);
char inc(char *needle, char const *haystack);
char ini(char *needle, char const *haystack);
char *get_content(char const *filepath);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_even(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
int my_append_elem(char const *filepath, char *str);
int my_isnum(char const str);

#endif
