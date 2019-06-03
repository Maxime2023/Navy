/*
** EPITECH PROJECT, 2019
** tabs
** File description:
** tabs
*/

#include "header.h"

void    mallocing_game_bis(struct a *c)
{
    int d = 0;

    c->game_bis = malloc(sizeof(char *) * 11);
    while (d <= 11) {
        c->game_bis[d] = malloc(sizeof(char) * 18);
        d++;
    }
}

void    completing_game_bis_one(struct a *c)
{
    int y = 1;
    int x = 0;

    while (x <= 16) {
        c->game_bis[y][x] = '-';
        x++;
    }
    c->game_bis[2][0] = '1';
    c->game_bis[3][0] = '2';
    c->game_bis[4][0] = '3';
    c->game_bis[5][0] = '4';
    c->game_bis[6][0] = '5';
    c->game_bis[7][0] = '6';
    c->game_bis[8][0] = '7';
    c->game_bis[9][0] = '8';
    x = 0;
    while (x <= 9) {
        c->game_bis[x][1] = '|';
        x++;
    }
}

void    completing_game_bis_two(struct a *c)
{
    int x = 0;

    c->game_bis[1][1] = '+';
    c->game_bis[0][2] = 'A';
    c->game_bis[0][4] = 'B';
    c->game_bis[0][6] = 'C';
    c->game_bis[0][8] = 'D';
    c->game_bis[0][10] = 'E';
    c->game_bis[0][12] = 'F';
    c->game_bis[0][14] = 'G';
    c->game_bis[0][16] = 'H';
    c->game_bis[0][0] = ' ';
    while (x <= 9) {
        c->game_bis[x][17] = '\0';
        x++;
    }
    c->game_bis[10] = NULL;
}

void    completing_game_bis(struct a *c)
{
    int x = 0;

    mallocing_game_bis(c);
    for (int y = 0; y <= 10; y++) {
        x = 0;
        while (x <= 16) {
            if (x % 2 == 0)
                c->game_bis[y][x] = '.';
            else
                c->game_bis[y][x] = ' ';
            x++;
        }
    }
    completing_game_bis_one(c);
    completing_game_bis_two(c);
}
