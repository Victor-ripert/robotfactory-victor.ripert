/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** mini_printf
*/

#include "../include/my.h"
#include <stdarg.h>

void switch_flags(char format, va_list args)
{
    switch (format) {
        case 'c':
            my_putchar(va_arg(args, int));
            break;
        case 's':
            my_putstr(va_arg(args, char *));
            break;
        case 'd':
            my_put_nbr(va_arg(args, int));
            break;
        case 'i':
            my_put_nbr(va_arg(args, int));
            break;
        case '%':
            my_putchar(va_arg(args, int));
            break;
        }
}

int mini_printf(const char *format, ...)
{
    va_list args;

    va_start(args, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            switch_flags(format[i], args);
        } else
            my_putchar(format[i]);
    }
    va_end(args);
    return 0;
}
