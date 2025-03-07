/*
** EPITECH PROJECT, 2024
** B-PSU-200-PAR-2-1-minishell1-manoah.paye
** File description:
** my_strcmp.c
*/

#include <stdio.h>

int my_strcmp(char *str, char *str1)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != str1[i])
            return -1;
    }
    return 0;
}

int my_strncmp(char *str, char *str1, int limit)
{
    for (int i = 0; i < limit; i++) {
        if (str[i] != str1[i])
            return -1;
        if (str[i] == '\0')
            break;
    }
    return 0;
}
