/*
** EPITECH PROJECT, 2019
** atwo
** File description:
** atwo
*/

#include "header.h"

void    transforming_b_one(struct a *c)
{
    if (c->str_two[0] == 'B') {
        c->a_two[0] = '0';
        c->a_two[1] = '0';
        c->a_two[2] = '0';
        c->a_two[3] = '1';
    }
    if (c->str_two[0] == 'C') {
        c->a_two[0] = '0';
        c->a_two[1] = '0';
        c->a_two[2] = '1';
        c->a_two[3] = '0';
    }
    if (c->str_two[0] == 'D') {
        c->a_two[0] = '0';
        c->a_two[1] = '1';
        c->a_two[2] = '0';
        c->a_two[3] = '0';
    }
}

void    transforming_b_two(struct a *c)
{
    if (c->str_two[0] == 'E') {
        c->a_two[0] = '0';
        c->a_two[1] = '1';
        c->a_two[2] = '0';
        c->a_two[3] = '1';
    }
    if (c->str_two[0] == 'F') {
        c->a_two[0] = '0';
        c->a_two[1] = '1';
        c->a_two[2] = '1';
        c->a_two[3] = '0';
    }
    if (c->str_two[0] == 'G') {
        c->a_two[0] = '0';
        c->a_two[1] = '1';
        c->a_two[2] = '1';
        c->a_two[3] = '1';
    }
}

void  	transforming_b_three(struct a *c)
{
    if (c->str_two[0] == 'H') {
        c->a_two[0] = '0';
        c->a_two[1] = '0';
        c->a_two[2] = '1';
        c->a_two[3] = '1';
    }
    if (c->str_two[1] == '1') {
        c->a_two[4] = '0';
        c->a_two[5] = '0';
        c->a_two[6] = '0';
        c->a_two[7] = '0';
    }
    if (c->str_two[1] == '2') {
        c->a_two[4] = '0';
        c->a_two[5] = '0';
        c->a_two[6] = '0';
        c->a_two[7] = '1';
    }
}

void  	transforming_b_four(struct a *c)
{
    if (c->str_two[1] == '3') {
        c->a_two[4] = '0';
        c->a_two[5] = '0';
        c->a_two[6] = '1';
        c->a_two[7] = '0';
    }
    if (c->str_two[1] == '4') {
        c->a_two[4] = '0';
        c->a_two[5] = '1';
        c->a_two[6] = '0';
        c->a_two[7] = '0';
    }
    if (c->str_two[1] == '5') {
        c->a_two[4] = '0';
        c->a_two[5] = '1';
        c->a_two[6] = '0';
        c->a_two[7] = '1';
    }

}

void  	transforming_b_five(struct a *c)
{
    if (c->str_two[1] == '6') {
        c->a_two[4] = '0';
        c->a_two[5] = '1';
        c->a_two[6] = '1';
        c->a_two[7] = '0';
    }
    if (c->str_two[1] == '7') {
        c->a_two[4] = '0';
        c->a_two[5] = '1';
        c->a_two[6] = '1';
        c->a_two[7] = '1';
    }
    if (c->str_two[1] == '8') {
        c->a_two[4] = '0';
        c->a_two[5] = '0';
        c->a_two[6] = '1';
        c->a_two[7] = '1';
    }
}
