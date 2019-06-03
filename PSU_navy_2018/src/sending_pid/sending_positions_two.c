/*
** EPITECH PROJECT, 2019
** navy
** File description:
** pos
*/

#include "header.h"

void    touch_or_one(struct a *c)
{
    int x = 0;
    int y = 0;

    while (c->game[0][x] != c->attack_one[0])
        x++;
    while (c->game[y][0] != c->attack_one[1])
        y++;
    if (c->game_two[y][x] == '.') {
        c->game[y][x] = 'o';
        c->game_two[y][x] = 'o';
    }
    else {
        c->game[y][x] = 'x';
        c->game_two[y][x] = 'x';
    }
}

void    touch_or_two(struct a *c)
{
    int x = 0;
    int y = 0;

    while (c->game_two[0][x] != c->attack_two[0])
        x++;
    while (c->game_two[y][0] != c->attack_two[1])
        y++;
    if (c->game[y][x] == '.') {
        c->game_two[y][x] = 'o';
        c->game[y][x] = 'o';
    }
    else {
        c->game_two[y][x] = 'x';
        c->game[y][x] = 'x';
    }
}

void    transcripting_attack_b(struct a *c)
{
    if (my_strcmpr_f(c->pos_one, "0111") == 1)
        c->attack_one[0] = 'G';
    if (my_strcmpr_f(c->pos_one, "0011") == 1)
        c->attack_one[0] = 'H';
    if (my_strcmpr_s(c->pos_one, "0000") == 1)
        c->attack_one[1] = '1';
    if (my_strcmpr_s(c->pos_one, "0001") == 1)
        c->attack_one[1] = '2';
    if (my_strcmpr_s(c->pos_one, "0010") == 1)
        c->attack_one[1] = '3';
    if (my_strcmpr_s(c->pos_one, "0100") == 1)
        c->attack_one[1] = '4';
    if (my_strcmpr_s(c->pos_one, "0101") == 1)
        c->attack_one[1] = '5';
}

void    transcripting_attack_c(struct a *c)
{
    if (my_strcmpr_s(c->pos_one, "0110") == 1)
        c->attack_one[1] = '6';
    if (my_strcmpr_s(c->pos_one, "0111") == 1)
        c->attack_one[1] = '7';
    if (my_strcmpr_s(c->pos_one, "0011") == 1)
        c->attack_one[1] = '8';
}
