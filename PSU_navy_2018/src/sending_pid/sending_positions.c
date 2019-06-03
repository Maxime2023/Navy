/*
** EPITECH PROJECT, 2019
** navy
** File description:
** send_pos
*/

#include "header.h"

void    transcripting_attack(struct a *c)
{
    c->attack_one = malloc(sizeof(char) * 3);
    if (my_strcmpr_f(c->pos_one, "0000") == 1)
        c->attack_one[0] = 'A';
    if (my_strcmpr_f(c->pos_one, "0001") == 1)
        c->attack_one[0] = 'B';
    if (my_strcmpr_f(c->pos_one, "0010") == 1)
        c->attack_one[0] = 'C';
    if (my_strcmpr_f(c->pos_one, "0100") == 1)
        c->attack_one[0] = 'D';
    if (my_strcmpr_f(c->pos_one, "0101") == 1)
        c->attack_one[0] = 'E';
    if (my_strcmpr_f(c->pos_one, "0110") == 1)
        c->attack_one[0] = 'F';
    transcripting_attack_b(c);
    transcripting_attack_c(c);
    c->attack_one[2] = '\0';
}

void    transcripting_attack_d(struct a *c)
{
    if (my_strcmpr_f(c->pos_two, "0111") == 1)
        c->attack_two[0] = 'G';
    if (my_strcmpr_f(c->pos_two, "0011") == 1)
        c->attack_two[0] = 'H';
    if (my_strcmpr_s(c->pos_two, "0000") == 1)
        c->attack_two[1] = '1';
    if (my_strcmpr_s(c->pos_two, "0001") == 1)
        c->attack_two[1] = '2';
    if (my_strcmpr_s(c->pos_two, "0010") == 1)
        c->attack_two[1] = '3';
    if (my_strcmpr_s(c->pos_two, "0100") == 1)
        c->attack_two[1] = '4';
}

void    transcripting_attack_e(struct a *c)
{
    if (my_strcmpr_s(c->pos_two, "0101") == 1)
        c->attack_two[1] = '5';
    if (my_strcmpr_s(c->pos_two, "0110") == 1)
        c->attack_two[1] = '6';
    if (my_strcmpr_s(c->pos_two, "0111") == 1)
        c->attack_two[1] = '7';
    if (my_strcmpr_s(c->pos_two, "0011") == 1)
        c->attack_two[1] = '8';
}


void    transcripting_attack_two(struct a *c)
{
    c->attack_two = malloc(sizeof(char) * 3);
    if (my_strcmpr_f(c->pos_two, "0000") == 1)
        c->attack_two[0] = 'A';
    if (my_strcmpr_f(c->pos_two, "0001") == 1)
        c->attack_two[0] = 'B';
    if (my_strcmpr_f(c->pos_two, "0010") == 1)
        c->attack_two[0] = 'C';
    if (my_strcmpr_f(c->pos_two, "0100") == 1)
        c->attack_two[0] = 'D';
    if (my_strcmpr_f(c->pos_two, "0101") == 1)
        c->attack_two[0] = 'E';
    if (my_strcmpr_f(c->pos_two, "0110") == 1)
        c->attack_two[0] = 'F';
    transcripting_attack_d(c);
    transcripting_attack_e(c);
    c->attack_two[2] = '\0';
}
