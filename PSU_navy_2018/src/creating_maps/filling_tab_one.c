/*
** EPITECH PROJECT, 2019
** filling_tab
** File description:
** filling_tab
*/

#include "header.h"

int    completing_tab_two(struct a *c, char **av)
{
    int g = 0;
    int h = 0;
    char *buf = adding_file(av[1]);
    int save = 0;

    c->z_bis = f_y(buf[c->w], c);
    c->z_ter = f_x(buf[c->x], c);
    c->y_bis = f_y(buf[c->y], c);
    c->y_ter = f_x(buf[c->z], c);
    completing_tab_two_one(c, av);
    if (completing_tab_two_one(c, av) != 1) {
        h = c->z_bis;
        while (h <= c->y_bis) {
            if (h % 2 == 0)
                c->game[c->z_ter][c->z_bis + save] = buf[c->v];
            h++;
            save++;
        }
    }
}

void    calling_struct(struct a *c, char *buf)
{
    c->v = 0;
    c->w = 2;
    c->x = 3;
    c->y = 5;
    c->z = 6;
    c->z_bis = f_y(buf[c->w], c);
    c->z_ter = f_x(buf[c->x], c);
    c->y_bis = f_y(buf[c->y], c);
    c->y_ter = f_x(buf[c->z], c);
}

void    placing_boats(struct a *c, char *buf)
{
    c->v += 8;
    c->w += 8;
    c->x += 8;
    c->y += 8;
    c->z += 8;
    c->z_bis = f_y(buf[c->w], c);
    c->z_ter = f_x(buf[c->x], c);
    c->y_bis = f_y(buf[c->y], c);
    c->y_ter = f_x(buf[c->z], c);
}

int    counting_lines(char *buf)
{
    int d = 0;

    for (int a = 0; buf[a] != '\0'; a++)
        if (buf[a] == '\n')
            d++;
    return (d);
}

int    completing_tab(char **av, struct a *c)
{
    char *buf = adding_file(av[1]);
    int save = 0;
    int h = 0;
    int d = counting_lines(buf);

    calling_struct(c, buf);
    for (int u = 0; u <= d - 2; u++) {
        completing_tab_two_one(c, av);
        if (completing_tab_two_one(c, av) != 1) {
            for (int h = c->z_bis; h <= c->y_bis; h++) {
                if (h % 2 == 0)
                    c->game[c->z_ter][c->z_bis + save] = buf[c->v];
                save++;
            }
        }
        placing_boats(c, buf);
        save = 0;
    }
    completing_tab_two(c, av);
}
