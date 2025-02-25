/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include "../include/my.h"

int my_put_nbr(long int nb)
{
    int rest = 0;
    int cut = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb > 9) {
        cut = nb / 10;
        rest = nb % 10;
        my_put_nbr(cut);
        my_putchar(rest + '0');
    }
    return nb;
}
