/*
** EPITECH PROJECT, 2019
** tabs
** File description:
** tabs
*/

#include "header.h"

void    mallocing_game_two(struct a *c)
{
    int d = 0;

    c->game_two = malloc(sizeof(char *) * 11);
    while (d <= 11) {
        c->game_two[d] = malloc(sizeof(char) * 18);
        d++;
    }
}

void    completing_game_two_two(struct a *c)
{
    int y = 1;
    int x = 0;

    while (x <= 16) {
        c->game_two[y][x] = '-';
        x++;
    }
    c->game_two[2][0] = '1';
    c->game_two[3][0] = '2';
    c->game_two[4][0] = '3';
    c->game_two[5][0] = '4';
    c->game_two[6][0] = '5';
    c->game_two[7][0] = '6';
    c->game_two[8][0] = '7';
    c->game_two[9][0] = '8';
    x = 0;
    while (x <= 9) {
        c->game_two[x][1] = '|';
        x++;
    }
}

void    completing_game_two_three(struct a *c)
{
    int x = 0;

    c->game_two[1][1] = '+';
    c->game_two[0][2] = 'A';
    c->game_two[0][4] = 'B';
    c->game_two[0][6] = 'C';
    c->game_two[0][8] = 'D';
    c->game_two[0][10] = 'E';
    c->game_two[0][12] = 'F';
    c->game_two[0][14] = 'G';
    c->game_two[0][16] = 'H';
    c->game_two[0][0] = ' ';
    while (x <= 9) {
        c->game_two[x][17] = '\0';
        x++;
    }
    c->game_two[10] = NULL;
}

void    completing_game_two_one(struct a *c)
{
    int x = 0;

    mallocing_game_two(c);
    for (int y = 0; y <= 10; y++) {
        x = 0;
        while (x <= 16) {
            if (x % 2 == 0)
                c->game_two[y][x] = '.';
            else
                c->game_two[y][x] = ' ';
            x++;
        }
    }
    completing_game_two_two(c);
    completing_game_two_three(c);
}
