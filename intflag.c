/*
** EPITECH PROJECT, 2018
** flag int
** File description:
** corps
*/

#include "../include/my.h"

void intflag(char fn, unsigned int i)
{
    if (fn == 'b') {
        my_put_nbrbin(i);
    }
    if (fn == 'u') {
        if (i > 0 || i < 4294967295) {
            my_put_nbr(i);
        }
    }
    if (fn == 'd' || fn == 'i') {
        my_put_nbr(i);
    }
}