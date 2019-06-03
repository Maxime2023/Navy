/*
** EPITECH PROJECT, 2019
** header
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

struct a
{
    char **game;
    char **game_two;
    char **game_bis;
    char **game_two_bis;
    int v;
    int w;
    int x;
    int y;
    int z;
    int z_bis;
    int z_ter;
    int y_bis;
    int y_ter;
    int check;
    int pid;
    char *str;
    char *str_two;
    char *res;
    char *a_one;
    char *a_two;
    char *a_three;
    char *pos_one;
    char *pos_two;
    char *attack_one;
    char *attack_two;
    int t_or_n;
    int wait_one;
    int wait_two;
}c;

void    mallocing_game_two(struct a *c);
void    completing_game_two_one(struct a *c);
void  	my_putchar(char c);
int    my_putstr(char *str);
int    my_strlen(char *str);
void    completing_game_bis(struct a *c);
void  	completing_game_two_bis(struct a *c);
int    my_strlen(char *str);
int    my_putstr(char *str);
void    completing_game(struct a *c);
int    completing_tab(char **av, struct a *c);
char    *adding_file(char *a);
int    filling_tab_two(char **av, struct a *c);
int    counting_lines(char *buf);
int    counting_boats(struct a *c);
int    lenght_boat(char *av, struct a *c);
int    counting_boats_two(struct a *c);
int    checking_first_numbers(char *av);
char    *adding_file(char *a);
char    *my_strcpy(char *str, char *str_two);
char    *get_next_line(int fd);
int    f_x(char e, struct a *c);
int    f_y(char e, struct a *c);
int    f_x_two(char e, struct a *c);
int    f_y_two(char e, struct a *c);
char    *bina(int a);
char    *my_revstr(char *str);
char    *my_revstr_two(char *str);
int    sending_pid(char **av);
void    check(int sig);
void    transform_data(int sig);
char    *receive_data();
int    refounding_deci(struct a *c);
int    my_getnbr(char const *str);
int    errors_one(char **av, struct a *c);
int    errors_two(char **av, struct a *c);
int    sending_attack_one(struct a *c);
char    *receive_attack_one(struct a *c);
void  	transcripting_attack(struct a *c);
int    my_strcmpr(char *str, char *str_two);
int    my_strcmpr_f(char *str, char *str_two);
int    my_strcmpr_s(char *str, char *str_two);
void    calling_gnl(struct a *c);
void    printing_screen_one(struct a *c);
void    printing_screen_one_wait(struct a *c);
int    testing_letters(char *str);
void    calling_gnl_two(struct a *c);
void    printing_screen_two(struct a *c);
void    printing_screen_two_wait(struct a *c);
int    checking_attack_p_one(struct a *c, char **av);
int    attac_one(struct a *c);
int    find_x_tab_two(struct a *c);
int    find_y_tab_two(struct a *c);
int    sending_attack_two(struct a *c, char **av);
char    *receive_attack_two(struct a *c);
void    transcripting_attack_two(struct a *c);
int    checking_attack_p_two(struct a *c, char **av);
int    attac_two(struct a *c);
void    connection_player_one(void);
void    connection_player_two(char **av);
int    game_one(struct a *c, char **av);
int    game_two(struct a *c, char **av);
void    transforming_attack_one(struct a *c);
void    transforming_attack_two(struct a *c);
void    res_attac_one(struct a *c);
void    res_attac_two(struct a *c);
int    map_limit(char *av, struct a *c);
int    my_put_nbr(int nb);
int    number_map_one(struct a *c);
int    number_map_two(struct a *c);
int    red(int ac, char **av);
int    testing_ac(int ac, char **av);
void    comp(struct a *c);
void    call(struct a *c);
int    e_one(int ac, char **av, struct a *c);
int    e_two(int ac, char **av, struct a *c);
void    transforming_a_one(struct a *c);
void    transforming_a_two(struct a *c);
void    transforming_a_three(struct a *c);
void    transforming_a_four(struct a *c);
void    transforming_a_five(struct a *c);
void    transforming_b_one(struct a *c);
void    transforming_b_two(struct a *c);
void    transforming_b_three(struct a *c);
void    transforming_b_four(struct a *c);
void    transforming_b_five(struct a *c);
int    count_nb(char *str);
void    touch_or_one(struct a *c);
void    touch_or_two(struct a *c);
void    transcripting_attack_b(struct a *c);
void    transcripting_attack_c(struct a *c);
int    end_game(struct a *c);
int    end_game_two(struct a *c);
void    print_wait_one(struct a *c);
void    print_wait_two(struct a *c);
void    connection_player_one(void);
int    completing_tab_two_one(struct a *c, char **av);
