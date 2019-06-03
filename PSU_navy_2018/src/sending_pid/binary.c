/*
** EPITECH PROJECT, 2019
** binary
** File description:
** binary
*/

#include "header.h"

char    *my_revstr(char *str)
{
    int i = 0;
    int a = count_nb(str) - 1;
    char c;

    while (a > i) {
        c = str[a];
        str[a] = str[i];
        str[i] = c;
        a--;
        i++;
    }
    return (str);
}

char    *my_revstr_two(char *str)
{
    int h = my_strlen(str) - 1;
    char *rstr = malloc(sizeof(char) * my_strlen(str) + 1);

    for (int x = 0; str[x] != '\0'; x++) {
        rstr[x] = str[h];
        h--;
    }
    return (rstr);
}

char    *memo_all(int a)
{
    int c = 1;
    char *str;

    while (a != 0) {
        a = a / 2;
        c++;
    }
    str = malloc(sizeof(char) * (c + 10));
    return (str);
}

char   *sending_binary(int a)
{
    int b;
    char *str = memo_all(a);
    int d = 0;

    while (a != 0) {
        b = a % 2;
        str[d] = (b + 48);
        a = a / 2;
        d++;
    }
    str[d] = '\0';
    return (str);
}

char    *bina(int a)
{
    char *str = sending_binary(a);
    int d = 0;
    int e = my_strlen(str);

    if (a == 0) {
        my_putchar('0');
        return (0);
    }
    while (e < 16) {
        str[e] = '0';
        e++;
    }
    str = my_revstr(str);
    return (str);
}
