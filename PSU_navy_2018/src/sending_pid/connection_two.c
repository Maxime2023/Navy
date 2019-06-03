/*
** EPITECH PROJECT, 2019
** navy
** File description:
** connecting
*/

#include "header.h"

int    sending_pid(char **av)
{
    int d = 0;
    char *bina_pid = bina(getpid());

    while (bina_pid[d] != '\0') {
        if (bina_pid[d] == '1') {
            kill(my_getnbr(av[1]), SIGUSR1);
        }
        else if (bina_pid[d] == '0') {
            kill(my_getnbr(av[1]), SIGUSR2);
        }
        usleep(300);
        d++;
    }
    return (0);
}

int    sending_attack_one(struct a *c)
{
    int d = 0;

    while (c->a_one[d] != '\0') {
        if (c->a_one[d] == '1') {
            kill(c->pid, SIGUSR1);
        }
        else if (c->a_one[d] == '0') {
            kill(c->pid, SIGUSR2);
        }
        usleep(300);
        d++;
    }
    return (0);
}

int    sending_attack_two(struct a *c, char **av)
{
    int d = 0;

    while (c->a_three[d] != '\0') {
        if (c->a_three[d] == '1')
            kill(my_getnbr(av[1]), SIGUSR1);
        if (c->a_three[d] == '0')
            kill(my_getnbr(av[1]), SIGUSR2);
        usleep(300);
        d++;
    }
    return (0);
}

int    refounding_deci(struct a *c)
{
    char *bina = receive_data();
    char *bina_pid = my_revstr_two(bina);
    int decimal = 0;
    int d = 0;
    int pow = 1;
    int len = my_strlen(bina_pid);

    while (len >= 0) {
        if (bina_pid[d] == '1')
            decimal += pow;
        len--;
        pow *= 2;
        d++;
    }
    c->pid = decimal;
    return (decimal);
}
