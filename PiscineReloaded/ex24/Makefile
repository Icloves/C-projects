# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcloves <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 20:17:18 by hcloves           #+#    #+#              #
#    Updated: 2019/09/11 21:11:39 by hcloves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_swap.c ./srcs/ft_strcmp.c

HEADERS = ./includes/*.

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRC)
		ar rc $(NAME) *.o

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
