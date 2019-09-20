# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcloves <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 20:40:24 by hcloves           #+#    #+#              #
#    Updated: 2019/09/20 20:47:25 by hcloves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h

SRC = ft_strlen.c ft_strdup.c ft_putchar.c ft_strncpy.c ft_strcpy.c ft_bzero.c ft_strstr.c ft_strnstr.c \
	  ft_strcat.c ft_strncat.c

$(NAME):
			gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRC)
				ar rc $(NAME) *.o
					ranlib $(NAME)
			
all: $(NAME)

clean:
			/bin/rm -f *.o

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
