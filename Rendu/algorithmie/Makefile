# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/14 16:02:04 by jrivaux           #+#    #+#              #
#    Updated: 2014/05/02 13:52:55 by jrivaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = main.c

SRC_O = $(SRC:.c = .o)

all: $(NAME)
	
$(NAME):
	make -C printf re
	$(CC) -g -I printf -I printf/libft $(FLAGS) $(SRC) printf/libftprintf.a -L printf/libft -lft
