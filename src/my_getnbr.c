/*
** EPITECH PROJECT, 2024
** B-MUL-100-PAR-1-1-myradar-manoah.paye
** File description:
** my_getnbr.c
*/

#include <stddef.h>

const char *find_sign(const char *str, int *sign)
{
    if (str == NULL)
        return 0;
    if (*str == '-') {
        *sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    return str;
}

int my_getnbr(const char *str)
{
    long number = 0;
    int sign = 1;
    int i = 0;

    if (str == NULL)
        return 0;
    for (; str[i] == ' '; i++);
    str = find_sign(&str[i], &sign);
    if (str == NULL)
        return 0;
    while (str[i] >= '0' && str[i] <= '9') {
        number = number * 10 + (str[i] - '0');
        if (number * sign > 2147483647)
            return 2147483647;
        if (number * sign < -2147483647)
            return -2147483647;
        i++;
    }
    return (i == 0 || (str[0] == '-' && i == 1) ||
        (str[0] == '+' && i == 1)) ? 0 : number * sign;
}
