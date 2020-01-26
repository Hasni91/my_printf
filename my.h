/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef _MY_H_
#define _MY_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void cflag(char d, char c);
int my_printf(char const *str, ...);
int my_put_nbrbin(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
void intflag(char fn, unsigned int i);
void my_putchar(char c);
int my_put_nbr(int nb);
char *my_revstr(char *str);
void sflag(char fn, char *str);

#endif
