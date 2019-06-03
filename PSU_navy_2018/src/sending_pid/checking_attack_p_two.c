/*
** EPITECH PROJECT, 2019
** navy
** File description:
** checking attack
*/

#include "header.h"

int    find_x_tab_three(struct a *c)
{
    int d = 0;

    while (d <= 16) {
        if (c->game[0][d] == c->attack_two[0])
            return (d);
        d++;
    }
    return (0);
}

int    find_y_tab_three(struct a *c)
{
    int d = 0;

    while (d <= 16) {
        if (c->game[d][0] == c->attack_two[1])
            return (d);
        d++;
    }
    return (0);
}

int    checking_attack_p_two(struct a *c, char **av)
{
    int number = find_y_tab_three(c);

    if (c->game[number][find_x_tab_three(c)] == '.') {
        c->wait_two = 0;
        c->wait_one = 0;
        c->game[number][find_x_tab_three(c)] == 'o';
        for (int d = 0; d <= 5; d++) {
            kill(c->pid, SIGUSR2);
            usleep(300);
        }
    }
    else {
        c->wait_two = 1;
        c->wait_one = 1;
        c->game[number][find_x_tab_three(c)] == 'x';
        for (int d = 0; d <= 5; d++) {
            kill(c->pid, SIGUSR1);
            usleep(300);
        }
    }
}
