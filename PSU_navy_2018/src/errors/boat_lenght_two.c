/*
** EPITECH PROJECT, 2019
** navy
** File description:
** boat
*/

#include "header.h"

int    lenght_boat_bis(char *av, struct a *c)
{
    char *buf = adding_file(av);

    if (buf[18] == buf[21]) {
        if (((buf[22] - 48) - (buf[19] - 48)) != (buf[16] - 49))
            return (0);
    }
    else {
        if (buf[21] - buf[18] != (buf[16] - 49))
            return (0);
    }
    if (buf[26] == buf[29]) {
        if (((buf[30] - 48) - (buf[27] - 48)) != (buf[24] - 49))
            return (0);
    }
    else {
        if (buf[29] - buf[26] != (buf[24] - 49))
            return (0);
    }
    return (1);
}

int    lenght_boat(char *av, struct a *c)
{
    char *buf = adding_file(av);

    if (buf[2] == buf[5]) {
        if (((buf[6] - 48) - (buf[3] - 48)) != (buf[0] - 49))
            return (0);
    }
    else {
        if (buf[5] - buf[2] != (buf[0] - 49))
            return (0);
    }
    if (buf[10] == buf[13]) {
        if (((buf[14] - 48) - (buf[11] - 48)) != (buf[8] - 49))
            return (0);
    }
    else {
        if (buf[13] - buf[10] != (buf[8] - 49))
            return (0);
    }
    if (lenght_boat_bis(av, c) == 0)
        return (0);
    return (1);
}
