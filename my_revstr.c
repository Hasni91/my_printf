/*
** EPITECH PROJECT, 2018
** reverse string
** File description:
** revstr
*/

#include "../include/my.h"

char *my_revstr(char *str)
{
    char c;
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++)
        a++;
    a--;
    for (int j = 0; a > j; j++) {
        c = str[j];
        str[j] = str[a];
        str[a] = c;
        a--;
    }
    return (str);
}
