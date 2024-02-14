# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhromylo <mhromylo@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 14:37:56 by mhromylo          #+#    #+#              #
#    Updated: 2023/11/10 16:17:37 by mhromylo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCD = ft_disp_file.c

OBJS = $(SRCD:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
