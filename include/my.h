/*
** EPITECH PROJECT, 2024
** my
** File description:
** my
*/

#include <stdbool.h>

#ifndef MY_H
    #define MY_H

int my_putchar(char c);
int my_strlen(char *str);
int my_putstr(char *str);
char *my_strdup(char *fp);
int my_put_nbr(long int nb);
int my_strcmp(char *str, char *str1);
char *my_strcpy(char *str, char *str1);
char **my_str_to_word_array(char *str);
int mini_printf(const char *format, ...);
char *my_strcat(char *dest, char const *src);
int my_strncmp(char *str, char *str1, int limit);
#endif /* MY_H */
