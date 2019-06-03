/*
** EPITECH PROJECT, 2019
** navy
** File description:
** errors
*/

#include "header.h"

int    errors_one(char **av, struct a *c)
{
    if (lenght_boat(av[1], c) != 1)
        return (84);
    if (checking_first_numbers(av[1]) != 1)
        return (84);
    return (0);
}

int    errors_two(char **av, struct a *c)
{
    if (lenght_boat(av[2], c) != 1)
        return (84);
    if (checking_first_numbers(av[2]) != 1)
        return (84);
    return (0);
}

int    map_limit_two(char *buf)
{
    for (int d = 3; d <= 27; d += 8) {
        if (buf[d] <= '1' && buf[d] >= '9')
            return (84);
    }
    for (int e = 6; e <= 30; e += 8) {
        if (buf[e] <= '1' && buf[e] >= '9')
            return (84);
    }
    for (int d = 0; buf[d] != '\0'; d++) {
        if (buf[d] == '\n') {
            if (d == 7 ||
                d == 15 ||
                d == 23 ||
                d == 31)
                return (0);
        }
    }
    return (84);
}

int    map_limit(char *av, struct a *c)
{
    char *buf = adding_file(av);

    if (buf[0] != '2' ||
        buf[8] != '3' ||
        buf[16] != '4' ||
        buf[24] != '5')
        return (84);
    for (int d = 2; d <= 26; d += 8) {
        if (buf[d] <= 'A' && buf[d] >= 'H')
            return (84);
    }
    for (int e = 5; e <= 29; e += 8) {
        if (buf[e] <= 'A' && buf[e] >= 'H')
            return (84);
    }
    if (map_limit_two(buf) == 84)
        return (84);
    return (0);
}
