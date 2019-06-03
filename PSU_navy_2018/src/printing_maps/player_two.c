/*
** EPITECH PROJECT, 2019
** navy
** File description:
** player_two
*/

#include "header.h"

void    calling_gnl_two(struct a *c)
{
    c->str_two[2];
    my_putstr("attack: ");
    c->str_two = get_next_line(0);
    if (testing_letters(c->str_two) != 2) {
        my_putstr("wrong position\n");
        calling_gnl_two(c);
    }
}

void    printing_screen_two(struct a *c)
{
    char *str;

    my_putstr("my positions:\n");
    for (int tmax = 0; c->game_two[tmax] != NULL; tmax++) {
        my_putstr(c->game_two[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
    my_putstr("enemy's positions:\n");
    for (int tmax = 0; c->game[tmax] != NULL; tmax++) {
        my_putstr(c->game_two_bis[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
}

void    printing_screen_two_wait(struct a *c)
{
    char *str;

    my_putstr("my positions:\n");
    for (int tmax = 0; c->game_two[tmax] != NULL; tmax++) {
        my_putstr(c->game_two[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
    my_putstr("enemy's positions:\n");
    for (int tmax = 0; c->game[tmax] != NULL; tmax++) {
        my_putstr(c->game_two_bis[tmax]);
        my_putchar('\n');
    }
    my_putchar('\n');
    my_putstr("waiting for enemy's attack...\n");
}
