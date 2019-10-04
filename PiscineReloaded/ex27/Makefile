# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcloves <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 21:46:26 by hcloves           #+#    #+#              #
#    Updated: 2019/09/12 20:52:15 by hcloves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

HEADERS = ftlist.h

all: $(NAME)

$(NAME):
			gcc -Wall -Werror -Wextra -I $(HEADERS) -o $(NAME) $(SRC)
			
clean:
			/bin/rm -f *.o

fclean: clean
			/bin/rm -f $(NAME)
