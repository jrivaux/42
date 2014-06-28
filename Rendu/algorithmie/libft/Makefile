# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/14 14:44:36 by jrivaux           #+#    #+#              #
#    Updated: 2014/04/23 15:27:18 by jrivaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -g

CFLAGS = -Wall -Wextra -Werror

SRC = ft_tolower.c\
	  ft_toupper.c\
	  ft_isprint.c\
	  ft_isascii.c\
	  ft_isalnum.c\
	  ft_isdigit.c\
	  ft_isalpha.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_atoi.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strlcat.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_strsplit.c\
	  ft_strsub.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_itoa.c\
	  ft_putnbr.c\
	  ft_putchar.c\
	  ft_strtrim.c\
	  ft_strjoin.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_putstr.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_putendl.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c

SRC_0 = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(CFLAGS)
	ar rc $(NAME) $(SRC_0)
	ranlib $(NAME)

clean:
	rm -f $(SRC_0)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
