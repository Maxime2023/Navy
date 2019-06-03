/*
** EPITECH PROJECT, 2019
** navy
** File description:
** tab
*/

#include "header.h"

int    f_x(char e, struct a *c)
{
    int y = 0;

    while (e != c->game[y][0]) {
        y++;
    }
    return (y);

}

int    f_y(char e, struct a *c)
{
    int y = 0;

    while (e != c->game[0][y]) {
        y++;
    }
    return (y);
}

int    f_x_two(char e, struct a *c)
{
    int y = 0;

    while (e != c->game_two[y][0]) {
        y++;
    }
    return (y);
}

int    f_y_two(char e, struct a *c)
{
    int y = 0;

    while (e != c->game_two[0][y]) {
        y++;
    }
    return (y);
}

int    completing_tab_two_one(struct a *c, char **av)
{
    char *buf = adding_file(av[1]);
    int save = 0;
    int g = 0;

    c->z_bis = f_y(buf[c->w], c);
    c->z_ter = f_x(buf[c->x], c);
    c->y_bis = f_y(buf[c->y], c);
    c->y_ter = f_x(buf[c->z], c);
    if (buf[c->w] == buf[c->y]) {
        g = c->z_ter;
        while (g <= c->y_ter) {
            c->game[c->z_ter + save][c->z_bis] = buf[c->v];
            g++;
            save++;
        }
        return (1);
    }
    return (0);
}
