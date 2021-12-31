/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** test.c
*/

#include <stdio.h>
// #include <string.h> // 
#include <stdlib.h>
#include "../../include/my_dict.h"
// #include "../../include/my_lib.h"

dict_t **create_hex_dict()
{
    char *hex_letters = "ABCDEF";
    dict_t **hex_dict = create_dict();
    int i = 0;
    // char *temp_digit;
    // char *temp2;
    for (; i < 16; i++) {
        char *temp_digit = i + '0';
        if (i < 10) {
            add_item(hex_dict, temp_digit, temp_digit);
        }
        if (i > 9) {
            char *temp2 = hex_letters[i / 10];
            add_item(hex_dict, temp2, temp_digit);
        }
    }
    return hex_dict;
}


int main(int argc, char **argv)
{
    printf("Going to crate dict\n");
    /* Create a dict */
    dict_t **dict = dict_alloc();

    /* lets add foo, and bar to the dict */
    printf("going to add item\n");
    add_item(dict, "foo", "bar");
    add_item(dict, "bar", "foo");
    add_item(dict, "test1", "1");//"result1");
    add_item(dict, "test2", "result2");
    add_item(dict, "test3", "result3");
    add_item(dict, "test4", "result4");
    printf("item added\n");
    /* and print their values */
    printf("going to output values\n");
    printf("%s %s\n", (char *)get_value(*dict, "foo"), (char *)get_value(*dict, "bar"));
    printf("%s\n", get_value(*dict, "test1"));
    printf("%s\n", get_value(*dict, "test2"));
    printf("%s\n", get_value(*dict, "test3"));
    printf("%s\n", get_value(*dict, "test4"));
    /* lets delete them */
    printf("going to remove items\n");
    del_item(dict, "foo");
    del_item(dict, "bar");
    del_item(dict, "test1");
    del_item(dict, "test2");
    del_item(dict, "test3");
    del_item(dict, "test4");

    /* see, their gone, there NULL */
    printf("making sure that dict is empty\n");
    printf("%s %s\n", (char *)get_value(*dict, "foo"), (char *)get_value(*dict, "bar"));
    // printf("%s\n", (char *)get_value(*dict, "test1"));
    // printf("%s\n", (char *)get_value(*dict, "test2"));
    // printf("%s\n", (char *)get_value(*dict, "test3"));
    // printf("%s\n", (char *)get_value(*dict, "test4"));

    /* add them again to proof it works */
    printf("adding elements again\n");
    add_item(dict, "foo", "bar");
    add_item(dict, "bar", "foo");
    add_item(dict, "bar", "pan");
    add_item(dict, "test1", "result1");
    add_item(dict, "test2", "result2");
    add_item(dict, "test3", "result3");
    add_item(dict, "test4", "result4");
    add_item(dict, "test5", "result5");
    printf("elements added\n");

    /* see, here */
    printf("going to print elements\n");
    printf("%s %s\n", (char *)get_value(*dict, "foo"), (char *)get_value(*dict, "bar"));
    printf("%s\n", get_value(*dict, "test1"));
    printf("%s\n", get_value(*dict, "test2"));
    printf("%s\n", get_value(*dict, "test3"));
    printf("%s\n", get_value(*dict, "test4"));
    printf("%s\n", get_value(*dict, "test5"));

    printf("going to remove items\n");
    del_item(dict, "foo");
    del_item(dict, "bar");
    del_item(dict, "test1");
    del_item(dict, "test2");
    del_item(dict, "test3");
    del_item(dict, "test4");
    printf("items removed\n");
    dict_free(dict);
    printf("malloc freed\n");

    dict_t **hex = create_dict();
    printf("%s\n", get_value(*hex, "0"));
    printf("%s\n", get_value(*hex, "5"));
    printf("%s\n", get_value(*hex, "A"));
    printf("%s\n", get_value(*hex, "F"));
    printf("%s\n", get_value(*hex, "1"));
    printf("%s\n", get_value(*hex, "2"));
    printf("%s\n", get_value(*hex, "3"));
    printf("%s\n", get_value(*hex, "4"));
    dict_free(hex);
    return 0;
}