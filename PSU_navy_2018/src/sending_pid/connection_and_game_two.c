/*
** EPITECH PROJECT, 2019
** navy
** File description:
** connaction
*/

#include "header.h"

int    end_game(struct a *c)
{
    int x = 1;
    int y = 1;

    while (y <= 9) {
        x = 0;
        while (x <= 16) {
            if (c->game[y][x] == '2' ||
                c->game[y][x] == '3' ||
                c->game[y][x] == '4' ||
                c->game[y][x] == '5')
                return (0);
            x++;
        }
        y++;
    }
    return (1);
}

int    end_game_two(struct a *c)
{
    int x = 1;
    int y = 1;

    while (y <= 9) {
        x = 0;
        while (x <= 16) {
            if (c->game_two[y][x] == '2' ||
                c->game_two[y][x] == '3' ||
                c->game_two[y][x] == '4' ||
                c->game_two[y][x] == '5')
                return (0);
            x++;
        }
        y++;
    }
    return (1);
}

void    print_wait_one(struct a *c)
{
    my_putstr(c->attack_two);
    if (c->wait_two == 0)
        my_putstr(": missed\n\n");
    else
        my_putstr(": hit\n\n");
}

void    print_wait_two(struct a *c)
{
    my_putstr(c->attack_one);
    if (c->wait_one == 0)
        my_putstr(": missed\n\n");
    else
        my_putstr(": hit\n\n");
}

void    connection_player_one(void)
{
    my_putstr("my_pid: ");
    my_put_nbr(getpid());
    my_putchar('\n');
    my_putstr("waiting for enemy connection...\n");
    pause();
    my_putstr("\nenemy connected\n\n");
}
