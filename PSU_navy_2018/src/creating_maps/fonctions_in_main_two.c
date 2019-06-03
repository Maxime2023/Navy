/*
** EPITECH PROJECT, 2019
** navy
** File description:
** mainou
*/

#include "header.h"

int    testing_ac(int ac, char **av)
{
    if (ac == 1)
        return (84);
    if (ac > 3)
        return (84);
    if (red(ac, av) == 84)
        return (84);
    return (0);
}

void    comp(struct a *c)
{
    completing_game(c);
    completing_game_two_one(c);
    completing_game_bis(c);
    completing_game_two_bis(c);
}

int    e_one(int ac, char **av, struct a *c)
{
    if (errors_one(av, c) == 84)
        return (84);
    if (map_limit(av[1], c) == 84)
        return (84);
    if (number_map_one(c) == 84)
        return (84);
    return (0);
}

int    e_two(int ac, char **av, struct a *c)
{
    if (errors_two(av, c) == 84)
        return (84);
    if (map_limit(av[2], c) == 84)
        return (84);
    if (number_map_two(c) == 84)
        return (84);
    return (0);
}

void    call(struct a *c)
{
    connection_player_one();
    refounding_deci(c);
    printing_screen_one(c);
}
