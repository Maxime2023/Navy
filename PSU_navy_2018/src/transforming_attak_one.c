/*
** EPITECH PROJECT, 2019
** aone
** File description:
** aone
*/

#include "header.h"

void    transforming_a_one(struct a *c)
{
    if (c->str[0] == 'B') {
        c->a_one[0] = '0';
        c->a_one[1] = '0';
        c->a_one[2] = '0';
        c->a_one[3] = '1';
    }
    if (c->str[0] == 'C') {
        c->a_one[0] = '0';
        c->a_one[1] = '0';
        c->a_one[2] = '1';
        c->a_one[3] = '0';
    }
    if (c->str[0] == 'D') {
        c->a_one[0] = '0';
        c->a_one[1] = '1';
        c->a_one[2] = '0';
        c->a_one[3] = '0';
    }
}

void    transforming_a_two(struct a *c)
{
    if (c->str[0] == 'E') {
        c->a_one[0] = '0';
        c->a_one[1] = '1';
        c->a_one[2] = '0';
        c->a_one[3] = '1';
    }
    if (c->str[0] == 'F') {
        c->a_one[0] = '0';
        c->a_one[1] = '1';
        c->a_one[2] = '1';
        c->a_one[3] = '0';
    }
    if (c->str[0] == 'G') {
        c->a_one[0] = '0';
        c->a_one[1] = '1';
        c->a_one[2] = '1';
        c->a_one[3] = '1';
    }
}

void    transforming_a_three(struct a *c)
{
    if (c->str[0] == 'H') {
        c->a_one[0] = '0';
        c->a_one[1] = '0';
        c->a_one[2] = '1';
        c->a_one[3] = '1';
    }
    if (c->str[1] == '1') {
        c->a_one[4] = '0';
        c->a_one[5] = '0';
        c->a_one[6] = '0';
        c->a_one[7] = '0';
    }
    if (c->str[1] == '2') {
        c->a_one[4] = '0';
        c->a_one[5] = '0';
        c->a_one[6] = '0';
        c->a_one[7] = '1';
    }
}

void    transforming_a_four(struct a *c)
{
    if (c->str[1] == '3') {
        c->a_one[4] = '0';
        c->a_one[5] = '0';
        c->a_one[6] = '1';
        c->a_one[7] = '0';
    }
    if (c->str[1] == '4') {
        c->a_one[4] = '0';
        c->a_one[5] = '1';
        c->a_one[6] = '0';
        c->a_one[7] = '0';
    }
    if (c->str[1] == '5') {
        c->a_one[4] = '0';
        c->a_one[5] = '1';
        c->a_one[6] = '0';
        c->a_one[7] = '1';
    }
}

void    transforming_a_five(struct a *c)
{
    if (c->str[1] == '6') {
        c->a_one[4] = '0';
        c->a_one[5] = '1';
        c->a_one[6] = '1';
        c->a_one[7] = '0';
    }
    if (c->str[1] == '7') {
        c->a_one[4] = '0';
        c->a_one[5] = '1';
        c->a_one[6] = '1';
        c->a_one[7] = '1';
    }
    if (c->str[1] == '8') {
        c->a_one[4] = '0';
        c->a_one[5] = '0';
        c->a_one[6] = '1';
        c->a_one[7] = '1';
    }
}
