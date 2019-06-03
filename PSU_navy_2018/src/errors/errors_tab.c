/*
** EPITECH PROJECT, 2019
** navy
** File description:
** errors
*/

#include "header.h"

int    two_boat(struct a *c)
{
    int a = 2;
    int	x = 1;
    int	y = 1;
    int d = 0;

    while (y <= 9) {
        x = 1;
        while (x <= 16) {
            if (c->game[y][x] == '2')
                d++;
            x++;
        }
        y++;
    }
    if (a == d)
        return (1);
    else
        return (0);
}

int    three_boat(struct a *c)
{
    int	a = 3;
    int x = 1;
    int y = 1;
    int	d = 0;

    while (y <= 9) {
        x = 1;
        while (x <= 16) {
            if (c->game[y][x] == '3')
                d++;
            x++;
        }
        y++;
    }
    if (a == d)
        return (1);
    else
        return (0);
}

int    four_boat(struct a *c)
{
    int	a = 4;
    int x = 1;
    int y = 1;
    int	d = 0;

    while (y <= 9) {
        x = 1;
        while (x <= 16) {
            if (c->game[y][x] == '4')
                d++;
            x++;
        }
        y++;
    }
    if (a == d)
        return (1);
    else
        return (0);

}

int    five_boat(struct a *c)
{
    int	a = 5;
    int x = 1;
    int y = 1;
    int	d = 0;

    while (y <= 9) {
        x = 1;
        while (x <= 16) {
            if (c->game[y][x] == '5')
                d++;
            x++;
        }
        y++;
    }
    if (a == d)
        return (1);
    else
        return (0);

}

int    counting_boats(struct a *c)
{
    if (two_boat(c) == 0) {
        return (1);
    }
    if (three_boat(c) == 0) {
        return (1);
    }
    if (four_boat(c) == 0) {
        return (1);
    }
    if (five_boat(c) == 0) {
        return (1);
    }
    return (0);
}
