/*
** EPITECH PROJECT, 2018
** flag c
** File description:
** corps
*/

#include <stdlib.h>
#include "../include/my.h"

void cflag(char d, char c)
{
    if (d == '%') {
        my_putchar('%');
    }
    else {
        my_putchar(c);
    }
}