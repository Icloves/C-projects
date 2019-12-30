# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcloves <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 20:40:24 by hcloves           #+#    #+#              #
#    Updated: 2019/09/30 19:35:18 by hcloves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = fillit

# HEADERS = fillit.h

# SRC = main.c

# LIBFT = libft/libft.a

# OBJCT = $(SRC:.c=.o)

# all: $(NAME)

# $(LIBFT):
# 				@make -C libft

# %.o: %.c $(HEADERS)
# 	gcc -c $< -I $(HEADERS)
# 	# gcc -c -Wall -Wextra -Werror $< -I $(HEADERS)

# $(NAME): $(LIBFT) $(OBJCT)
# 				ar rc $(NAME) $(LIBFT) -o $(OBJCT)
# 					ranlib $(NAME)

# clean:
# 			/bin/rm -f $(OBJCT)

# fclean: clean
# 			/bin/rm -f $(NAME)

# re: fclean all

NAME = fillit

SRC = validation_side.c get_next_line.c validation.c

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

HEADER = -c -I fillit.h

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -g -c -I libft/ $< -o $@

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIBFT) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
	@make -C libft clean

fclean: clean
	/bin/rm -f $(NAME)
	@make -C libft fclean

re: fclean all

.PHONY: clean fclean