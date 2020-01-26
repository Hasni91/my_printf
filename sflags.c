/*
** EPITECH PROJECT, 2018
** flag c
** File description:
** corps
*/

#include "../include/my.h"

void sflag(char fn, char *str)
{
    int a = my_strlen(str);
    int j = 0;

    if (fn == 'S') {
        str = malloc(sizeof(char) * (a + 2));
        while (str[j] != '\0') {
            if (str[j] < 32 || str[j] >= 127) {
                str[j] = 92;
            }

            j++;
        }
    }
    my_putstr(str);
}
