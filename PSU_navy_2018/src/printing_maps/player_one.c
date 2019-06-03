/*
** EPITECH PROJECT, 2019
** navy
** File description:
** player one
*/

#include "header.h"

void    calling_gnl(struct a *c)
{
    c->str[2];
    my_putstr("attack: ");
    c->str = get_next_line(0);
    if (testing_letters(c->str) != 2) {
        my_putstr("wrong position\n");
        calling_gnl(c);
    }
}

void    printing_screen_one(struct a *c)
{
    char *str;

    my_putstr("my positions:\n");
    for (int tmax = 0; c->game[tmax] != NULL; tmax++) {
        my_putstr(c->game[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
    my_putstr("enemy's positions:\n");
    for (int tmax = 0; c->game_two[tmax] != NULL; tmax++) {
        my_putstr(c->game_bis[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
}

void    printing_screen_one_wait(struct a *c)
{
    char *str;

    my_putstr("my positions:\n");
    for (int tmax = 0; c->game[tmax] != NULL; tmax++) {
        my_putstr(c->game[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
    my_putstr("enemy's positions:\n");
    for (int tmax = 0; c->game_two[tmax] != NULL; tmax++) {
        my_putstr(c->game_bis[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
    my_putstr("\n\nwaiting for enemy's attack...\n");
}
