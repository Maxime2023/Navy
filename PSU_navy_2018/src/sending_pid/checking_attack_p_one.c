/*
** EPITECH PROJECT, 2019
** navy
** File description:
** attack
*/

#include "header.h"

int    find_x_tab_two(struct a *c)
{
    int d = 0;

    while (d <= 16) {
        if (c->game_two[0][d] == c->attack_one[0])
            return (d);
        d++;
    }
    return (0);
}

int    find_y_tab_two(struct a *c)
{
    int d = 0;

    while (d <= 16) {
        if (c->game_two[d][0] == c->attack_one[1])
            return (d);
        d++;
    }
    return (0);
}

int    checking_attack_p_one(struct a *c, char **av)
{
    int letter = find_x_tab_two(c);
    int number = find_y_tab_two(c);

    if (c->game_two[number][letter] == '.') {
        c->wait_one = 0;
        c->wait_two = 0;
        for (int d = 0; d <= 5; d++) {
            kill(my_getnbr(av[1]), SIGUSR2);
            usleep(300);
        }
    }
    else {
        c->wait_one = 1;
        c->wait_two = 1;
        for (int d = 0; d <= 5; d++) {
            kill(my_getnbr(av[1]), SIGUSR1);
            usleep(300);
        }
    }
}
