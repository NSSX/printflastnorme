# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avella <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 16:17:03 by avella            #+#    #+#              #
#    Updated: 2016/05/02 17:51:36 by avella           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_printf

CC = gcc

INCLUDES = "libft/includes"

FLAGS = -Wall -Wextra -Werror


SRC = converter.c conv_arg.c first_arg.c largeur_minimum.c \
	long_short.c precision.c printf.c my_itoa.c \
	my_utoa.c wchar.c all_d.c all_du_bis.c all_u.c arg_cs.c \
	arg_di.c arg_ou.c arg_p.c arg_percent.c arg_px.c arg_s.c \
	all_first_argc.c norme_first_arg.c norme_second_width.c norme_width.c \
	norme_wchar.c

LIB = libftprintf.a

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	make -C libft/
	$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDES)
	$(CC) $(FLAGS) -o $(NAME) $(SRC) $(LIB) -I $(INCLUDES)
clean :
	make -C libft/ clean
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB)
	rm -f $(NAME)

re : fclean all

