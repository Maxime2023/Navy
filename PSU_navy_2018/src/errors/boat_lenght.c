/*
** EPITECH PROJECT, 2019
** navy
** File description:
** lenght
*/

#include "header.h"

int    number_map_one(struct a *c)
{
    int x = 2;
    int y = 2;
    int save = 0;

    while (y <= 9) {
        x = 2;
        while (x <= 16) {
            x++;
            if (c->game[y][x] == '2' ||
                c->game[y][x] == '3' ||
                c->game[y][x] == '4' ||
                c->game[y][x] == '5')
                save++;
        }
        y++;
    }
    if (save == 14)
        return (1);
    else
        return (84);
}

int    number_map_two(struct a *c)
{
    int x = 2;
    int y = 2;
    int save = 0;

    while (y <= 9) {
        x = 2;
        while (x <= 16) {
            x++;
            if (c->game_two[y][x] == '2' ||
                c->game_two[y][x] == '3' ||
                c->game_two[y][x] == '4' ||
                c->game_two[y][x] == '5')
                save++;
        }
        y++;
    }
    if (save == 14)
        return (1);
    else
        return (84);
}

int    check_errors_map(char *av)
{
    char *buf = adding_file(av);
    int d = 0;

    while (buf[d] != '\0') {
        d++;
    }
    if (d == 32)
        return (1);
    return (84);
}

int    red(int ac, char **av)
{
    if (ac == 2) {
        if (adding_file(av[1]) == NULL)
            return (84);
        if (check_errors_map(av[1]) == 84)
            return (84);
    }
    if (ac == 3) {
        if (adding_file(av[2]) == NULL)
            return (84);
        if (check_errors_map(av[2]) == 84)
            return (84);
    }
    return (0);
}
