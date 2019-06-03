/*
** EPITECH PROJECT, 2019
** navy
** File description:
** fonctions
*/

#include "header.h"

int    my_getnbr(char const *str)
{
    int neg = 0;
    int a = 0;

    for (int compteur = 0; str[compteur] <= '9' && str[compteur] >= '0'||
             str[compteur] == '-'; compteur++) {
        if (str[compteur] == '-') {
            neg++;
        }
        if  (str[compteur] >= 48 && str[compteur] <= 57) {
            a = (str[compteur] - 48) + a * 10;
        }
    }
    if (neg % 2 == 1) {
        a = a * -1;
    }
    return (a);
}

int    lenght_nb(int nb)
{
    int d = 0;

    while (nb / 10 != 0)
        d++;
    return (d);
}

int    testing_letters(char *str)
{
    int len = 0;

    if (str[0] == 'A' || str[0] == 'B' ||
        str[0] == 'C' || str[0] == 'D' ||
        str[0] == 'E' || str[0] == 'F' ||
        str[0] == 'G' || str[0] == 'H')
        len++;
    if (str[1] == '1' || str[1] == '2' ||
        str[1] == '3' || str[1] == '4' ||
        str[1] == '5' || str[1] == '6' ||
        str[1] == '7' || str[1] == '8')
        len++;
    return (len);
}
