/*
** EPITECH PROJECT, 2019
** tabs
** File description:
** tabs
*/

#include "header.h"

void    mallocing_game(struct a *c)
{
    int d = 0;

    c->game = malloc(sizeof(char *) * 11);
    while (d <= 11) {
        c->game[d] = malloc(sizeof(char) * 18);
        d++;
    }
}

void    completing_game_one(struct a *c)
{
    int y = 1;
    int x = 0;

    while (x <= 16) {
        c->game[y][x] = '-';
        x++;
    }
    c->game[2][0] = '1';
    c->game[3][0] = '2';
    c->game[4][0] = '3';
    c->game[5][0] = '4';
    c->game[6][0] = '5';
    c->game[7][0] = '6';
    c->game[8][0] = '7';
    c->game[9][0] = '8';
    x = 0;
    while (x <= 9) {
        c->game[x][1] = '|';
        x++;
    }
}

void    completing_game_two(struct a *c)
{
    int x = 0;

    c->game[1][1] = '+';
    c->game[0][2] = 'A';
    c->game[0][4] = 'B';
    c->game[0][6] = 'C';
    c->game[0][8] = 'D';
    c->game[0][10] = 'E';
    c->game[0][12] = 'F';
    c->game[0][14] = 'G';
    c->game[0][16] = 'H';
    c->game[0][0] = ' ';
    while (x <= 9) {
        c->game[x][17] = '\0';
        x++;
    }
    c->game[10] = NULL;
}

void    completing_game(struct a *c)
{
    int x = 0;

    mallocing_game(c);
    for (int y = 0; y <= 10; y++) {
        x = 0;
        while (x <= 16) {
            if (x % 2 == 0)
                c->game[y][x] = '.';
            else
                c->game[y][x] = ' ';
            x++;
        }
    }
    completing_game_one(c);
    completing_game_two(c);
}
