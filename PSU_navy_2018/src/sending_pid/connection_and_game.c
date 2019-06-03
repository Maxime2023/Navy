/*
** EPITECH PROJECT, 2019
** navy
** File description:
** game and connection
*/

#include "header.h"

void    connection_player_two(char **av)
{
    my_putstr("my_pid: ");
    my_put_nbr(getpid());
    my_putchar('\n');
    if (kill(my_getnbr(av[1]), SIGUSR1) == 0)
        my_putstr("successfully connected\n\n");
    sending_pid(av);
}

int    game_one(struct a *c, char **av)
{
    if (end_game(c) == 1)
        return (0);
    calling_gnl(c);
    transforming_attack_one(c);
    sending_attack_one(c);
    attac_one(c);
    res_attac_one(c);
    usleep(10000);
    printing_screen_one(c);
    my_putstr("waiting for enemy's attack...\n");
    receive_attack_two(c);
    usleep(1000);
    transcripting_attack_two(c);
    usleep(1000);
    checking_attack_p_two(c, av);
    usleep(10000);
    print_wait_one(c);
    game_one(c, av);
}

int    game_two(struct a *c, char **av)
{
    if (end_game(c) == 1)
        return (0);
    printing_screen_two(c);
    my_putstr("waiting for enemy's attack...\n");
    receive_attack_one(c);
    transcripting_attack(c);
    checking_attack_p_one(c, av);
    print_wait_two(c);

    usleep(10000);
    calling_gnl_two(c);
    transforming_attack_two(c);
    c->a_three = malloc(sizeof(char) * 9);
    c->a_three = my_strcpy(c->a_two, c->a_three);
    sending_attack_two(c, av);
    attac_two(c);
    res_attac_two(c);
    usleep(300);
    game_two(c, av);
}
