/*
** EPITECH PROJECT, 2018
** conte chiffre
** File description:
** my_strlen
*/

#include<stdio.h>
#include "../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
