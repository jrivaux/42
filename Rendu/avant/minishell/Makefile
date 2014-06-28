# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/12 14:10:21 by jrivaux           #+#    #+#              #
#    Updated: 2014/03/02 16:15:16 by jrivaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

CC = gcc $(FLAG) $(INC)

FLAG = -Wall -Wextra -Werror -g

SRC = ft_sh.c ft_prompt.c ft_shell.c ft_echo.c

OBJ = $(SRC:.c=.o)

INC = -I libft

LIB = -L libft -lft

all: $(MAKE) $(NAME)

$(MAKE):
	$(MAKE) -C libft

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean flclean re
