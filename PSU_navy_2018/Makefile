##
## EPITECH PROJECT, 2018
## makekile
## File description:
## makefile printf
##

NAME	=	navy

CFLAGS	=	-I./include

SRC	=	src/creating_maps/tab_one.c			\
		src/creating_maps/tab_two.c			\
		src/creating_maps/tab_bis.c			\
		src/creating_maps/tab_two_bis.c			\
		src/creating_maps/writting.c			\
		src/navy.c					\
		src/creating_maps/filling_tab_one.c		\
		src/creating_maps/filling_tab_two.c		\
		src/errors/errors_tab.c				\
		src/errors/boat_lenght.c			\
		src/errors/errors_tab_two.c			\
		src/creating_maps/fonctions_in_main.c		\
		src/creating_maps/get_next_line.c		\
		src/sending_pid/binary.c			\
		src/sending_pid/connecting.c			\
		src/errors/handle_errors.c			\
		src/sending_pid/sending_positions.c		\
		src/printing_maps/player_one.c			\
		src/printing_maps/player_two.c			\
		src/sending_pid/checking_attack_p_one.c		\
		src/sending_pid/checking_attack_p_two.c		\
		src/creating_maps/fonctions.c			\
		src/sending_pid/connection_and_game.c		\
		src/creating_maps/my_put_nbr.c			\
		src/creating_maps/fonctions_in_main_two.c	\
		src/transforming_attak_one.c			\
		src/transforming_attak_two.c			\
		src/sending_pid/binary_two.c			\
		src/sending_pid/sending_positions_two.c		\
		src/sending_pid/connection_and_game_two.c	\
		src/sending_pid/filling_tab_one_two.c		\
		src/errors/boat_lenght_two.c			\
		src/sending_pid/connection_two.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -g3

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:	clean fclean all
