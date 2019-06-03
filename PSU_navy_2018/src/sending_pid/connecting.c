/*
** EPITECH PROJECT, 2019
** navy
** File description:
** connecting
*/

#include "header.h"

int sign = 0;
char *res;
int number = 0;
int nba = 0;
char *wesh;
char *jpp;
char *wesh_two;
int nbc = 0;

void    check(int sig)
{
    if (sig == SIGUSR1)
        sign++;
}

void    transform_data(int sig)
{
    if (sig == SIGUSR1) {
        res[number] = '1';
        number++;
    }
    if (sig == SIGUSR2) {
        res[number] = '0';
        number++;
    }
}

void    transform_wesh(int sig)
{
    if (sig == SIGUSR1) {
        wesh[nba] = '1';
        nba++;
    }
    if (sig == SIGUSR2) {
        wesh[nba] = '0';
        nba++;
    }
}

void    transform_jpp(int sig)
{
    if (sig == SIGUSR1) {
        jpp[nbc] = '1';
        nbc++;
    }
    if (sig == SIGUSR2) {
        jpp[nbc] = '0';
        nbc++;
    }
}

char    *receive_data(void)
{
    struct sigaction *si = malloc(sizeof(struct sigaction));

    res = malloc(sizeof(char) * 15);
    si->sa_sigaction = (void *)&transform_data;
    si->sa_flags = SA_SIGINFO;
    sigemptyset(&si->sa_mask);
    sigaction(SIGUSR2, si, NULL);
    sigaction(SIGUSR1, si, NULL);
    res[15] = '\0';
    while (number != 15)
        pause();
    number = 0;
    return (res);
}

char    *receive_attack_one(struct a *c)
{
    struct sigaction *si = malloc(sizeof(struct sigaction));

    res = malloc(sizeof(char) * 8);
    si->sa_sigaction = (void *)&transform_data;
    si->sa_flags = SA_SIGINFO;
    sigemptyset(&si->sa_mask);
    sigaction(SIGUSR2, si, NULL);
    sigaction(SIGUSR1, si, NULL);
    res[8] = '\0';
    while (number != 8)
        pause();
    c->pos_one = malloc(sizeof(char) * 8);
    c->pos_one = my_strcpy(res, c->pos_one);
    nba = 0;
    sign = 0;
    number = 0;
    nbc = 0;
    return (res);
}

char    *receive_attack_two(struct a *c)
{
    struct sigaction *si = malloc(sizeof(struct sigaction));

    jpp = malloc(sizeof(char) * 8);
    si->sa_sigaction = (void *)&transform_jpp;
    si->sa_flags = SA_SIGINFO;
    sigemptyset(&si->sa_mask);
    sigaction(SIGUSR2, si, NULL);
    sigaction(SIGUSR1, si, NULL);
    jpp[8] = '\0';
    while (nbc != 8)
        pause();
    c->pos_two = malloc(sizeof(char) * 8);
    c->pos_two = my_strcpy(jpp, c->pos_two);
    nba = 0;
    sign = 0;
    number = 0;
    nbc = 0;
    return (jpp);
}

int    attac_one_two(char *wesh, struct a *c)
{
    if (wesh[0] == '0') {
        my_putstr(c->str);
        my_putstr(": missed\n\n");
        c->t_or_n = 0;
        nba = 0;
        sign = 0;
        number = 0;
        nbc = 0;
        return (0);
    }
    if (wesh[0] == '1') {
        my_putstr(c->str);
        my_putstr(": hit\n\n");
        c->t_or_n = 1;
        nba = 0;
        sign = 0;
        number = 0;
        nbc = 0;
        return (1);
    }
}

int    attac_two_two(char *wesh, struct a *c)
{
    if (wesh[0] == '0') {
        my_putstr(c->str_two);
        my_putstr(": missed\n\n");
        c->t_or_n = 0;
        nba = 0;
        sign = 0;
        number = 0;
        nbc = 0;
        return (0);
    }
    if (wesh[0] == '1') {
        my_putstr(c->str_two);
        my_putstr(": hit\n\n");
        c->t_or_n = 1;
        nba = 0;
        sign = 0;
        number = 0;
        nbc = 0;
        return (1);
    }
}

int    attac_one(struct a *c)
{
    struct sigaction *si = malloc(sizeof(struct sigaction));

    wesh = malloc(sizeof(char) * 6);
    si->sa_sigaction = (void *)&transform_wesh;
    si->sa_flags = SA_SIGINFO;
    sigemptyset(&si->sa_mask);
    sigaction(SIGUSR2, si, NULL);
    sigaction(SIGUSR1, si, NULL);
    wesh[1] = '\0';
    while (nba != 1)
        pause();
    attac_one_two(wesh, c);
}

int    attac_two(struct a *c)
{
    struct sigaction *si = malloc(sizeof(struct sigaction));

    wesh = malloc(sizeof(char) * 6);
    si->sa_sigaction = (void *)&transform_wesh;
    si->sa_flags = SA_SIGINFO;
    sigemptyset(&si->sa_mask);
    sigaction(SIGUSR2, si, NULL);
    sigaction(SIGUSR1, si, NULL);
    wesh[1] = '\0';
    while (nba != 1)
        pause();
    attac_two_two(wesh, c);
}
