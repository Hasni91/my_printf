/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** head
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

int my_printf(char const *str, ...)
{
    va_list flag;
    unsigned int i = 0;

    va_start(flag, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            if (str[i + 1] == 'c' || str[i + 1] == '%') {
                cflag(str[i + 1], va_arg(flag, int));
            }
            if (str[i + 1] == 'b' || str[i + 1] == 'i' || str[i + 1] == 'd'
            || str[i + 1] == 'u') {
                intflag(str[i + 1], va_arg(flag, unsigned int));
            }
            if (str[i + 1] == 's' || str[i + 1] == 'S') {
                sflag(str[i + 1], va_arg(flag, char *));
            }
        }
        i++;
    }
    va_end(flag);
}
