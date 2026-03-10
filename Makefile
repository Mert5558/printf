# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merdal <merdal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 14:18:08 by merdal            #+#    #+#              #
#    Updated: 2023/11/27 13:51:07 by merdal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SOURCES = \
	src/ft_printf.c src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_strlen.c src/ft_print_char.c src/ft_print_int.c src/ft_print_str.c \
	src/ft_print_unsigned.c src/ft_print_x_hex.c src/ft_print_xx_hex.c src/ft_print_ptr.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re