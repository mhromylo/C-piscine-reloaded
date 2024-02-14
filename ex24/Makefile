# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 15:39:48 by mhromylo          #+#    #+#              #
#    Updated: 2023/11/09 17:08:37 by mhromylo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
HEADER = ./includes/
FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(FILES) -I $(HEADER)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
