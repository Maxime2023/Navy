/*
** EPITECH PROJECT, 2019
** navy
** File description:
** navy
*/

#include "header.h"

void    transforming_attack_one(struct a *c)
{
    c->a_one = malloc(sizeof(char) * 8);
    if (c->str[0] == 'A') {
        c->a_one[0] = '0';
        c->a_one[1] = '0';
        c->a_one[2] = '0';
        c->a_one[3] = '0';
    }
    transforming_a_one(c);
    transforming_a_two(c);
    transforming_a_three(c);
    transforming_a_four(c);
    transforming_a_five(c);
    c->a_one[8] = '\0';
}

void    transforming_attack_two(struct a *c)
{
    c->a_two = malloc(sizeof(char) * 8);
    if (c->str_two[0] == 'A') {
        c->a_two[0] = '0';
        c->a_two[1] = '0';
        c->a_two[2] = '0';
        c->a_two[3] = '0';
    }
    transforming_b_one(c);
    transforming_b_two(c);
    transforming_b_three(c);
    transforming_b_four(c);
    transforming_b_five(c);
    c->a_two[8] = '\0';
}

void    res_attac_one(struct a *c)
{
    int x = 0;
    int y = 0;

    while (x <= 16) {
        if (c->game_bis[0][x] == c->str[0])
            break;
        x++;
    }
    while (y <= 10) {
        if (c->game_bis[y][0] == c->str[1])
            break;
        y++;
    }
    if (c->t_or_n == 0)
        c->game_bis[y][x] = 'o';
    if (c->t_or_n == 1)
        c->game_bis[y][x] = 'x';
}

void    res_attac_two(struct a *c)
{
    int x = 0;
    int y = 0;

    while (x <= 16) {
        if (c->game_two_bis[0][x] == c->str_two[0])
            break;
        x++;
    }
    while (y <= 10) {
        if (c->game_two_bis[y][0] == c->str_two[1])
            break;
        y++;
    }
    if (c->t_or_n == 0)
        c->game_two_bis[y][x] = 'o';
    if (c->t_or_n == 1)
        c->game_two_bis[y][x] = 'x';
}

int    main(int ac, char **av, char **env)
{
    struct a *c = malloc(sizeof(struct a));
    comp(c);
    signal(SIGUSR1, check);
    signal(SIGUSR2, check);
    if (ac > 3 || ac == 1)
        return (84);
    if (red(ac, av) == 84)
        return (84);
    if (ac == 2) {
        if (errors_one(av, c) == 84)
            return (84);
        completing_tab(av, c);
        if (counting_boats(c) == 1)
            return (84);
        call(c);
        game_one(c, av);
    } else {
        if (errors_two(av, c) == 84)
            return (84);
        filling_tab_two(av, c);
        if (counting_boats_two(c) == 1)
            return (84);
        connection_player_two(av);
        game_two(c, av);
    }
}
