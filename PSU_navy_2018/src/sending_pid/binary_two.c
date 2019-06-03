/*
** EPITECH PROJECT, 2019
** navy
** File description:
** binary
*/

#include "header.h"

int    count_nb(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}
