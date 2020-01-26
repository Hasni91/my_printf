/*
** EPITECH PROJECT, 2018
** nbrbin
** File description:
** nbrbin
*/

#include "../include/my.h"

int my_put_nbrbin(int nb)
{
    char *str;
    unsigned int j = nb;
    int w = 0;
    str = malloc(sizeof(char) * (nb * 100));
    if (j < 0)
    {
        my_putchar('-');
        j = j * -1;
    }

    while (j > 0) {
        str[w] = ((j % 2) + 48);
        j = j / 2;
        w++;
    }
    my_revstr(str);
    my_putstr(str);
    return (0);
}
