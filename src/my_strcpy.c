/*
** EPITECH PROJECT, 2024
** B-PSU-200-PAR-2-1-minishell1-manoah.paye
** File description:
** my_strcpy.c
*/

#include <stdlib.h>
#include "../include/my.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
