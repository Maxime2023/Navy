/*
** EPITECH PROJECT, 2019
** navy
** File description:
** fonctions_main
*/

#include "header.h"

int    checking_win_g_one(struct a *c)
{
    int x = 2;
    int y = 2;
    int a = 0;

    while (y <= 9) {
        x = 0;
        while (x <= 15) {
            if (c->game[y][x] == '2' ||
                c->game[y][x] == '3' ||
                c->game[y][x] == '4' ||
                c->game[y][x] == '5')
                return (0);
            x++;
        }
        y++;
    }
    return (1);
}

int    checking_win_g_two(struct a *c)
{
    int	x = 2;
    int	y = 2;
    int	a = 0;

    while (y <= 9) {
        while (x <= 15) {
            x = 0;
            if (c->game_two[y][x] == '2' ||
                c->game_two[y][x] == '3' ||
                c->game_two[y][x] == '4' ||
                c->game_two[y][x] == '5')
                return (0);
            x++;
        }
        y++;
    }
    return (1);
}

int    checking_first_numbers(char *av)
{
    char *buf = adding_file(av);
    int d = 0;
    int e = 0;

    while (buf[d] != '\0')
        d++;
    if (d != 32)
        return (0);
    return (1);
}

char    *adding_file(char *a)
{
    struct stat sl;
    int fd;
    char *buf;
    int size;

    stat(a, &sl);
    fd = open(a, O_RDONLY);
    buf = malloc(sizeof(char) * (sl.st_size + 1));
    if (fd == -1 || sl.st_size == 0)
        return (NULL);
    size = read (fd, buf, sl.st_size);
    buf[size] = '\0';
    close(fd);
    return (buf);
}

char    *my_strcpy(char *str, char *str_two)
{
    int len = my_strlen(str);
    int d = 0;

    str_two = malloc(sizeof(char) * len + 1);
    while (str[d] != '\0') {
        str_two[d] = str[d];
        d++;
    }
    str_two[d] = '\0';
    return (str_two);
}
