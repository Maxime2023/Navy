/*
** EPITECH PROJECT, 2019
** writting
** File description:
** writting
*/

#include "header.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int    my_putstr(char *str)
{
    int d = 0;

    while (str[d] != '\0') {
        my_putchar(str[d]);
        d++;
    }
}

int    my_strlen(char *str)
{
    int d = 0;

    while (str[d] != '\0')
        d++;
    return (d);
}

int    my_strcmpr_f(char *str, char *str_two)
{
    int d = 0;

    while (d <= 3) {
        if (str[d] != str_two[d])
            return (0);
        d++;
    }
    return (1);
}

int    my_strcmpr_s(char *str, char *str_two)
{
    int d = 4;
    int e = 0;

    while (d <= 7) {
        if (str[d] != str_two[e])
            return (0);
        d++;
        e++;
    }
    return (1);
}
