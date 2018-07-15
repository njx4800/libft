# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jxie <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/14 20:18:55 by jxie              #+#    #+#              #
#    Updated: 2018/07/15 16:21:42 by jxie             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -c -Wall -Werror -Wextra

NAME = libft.a

SRCS =	ft_memset.c\
	   	ft_bzero.c\
	   	ft_memcpy.c\
	   	ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strdup.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strcmp.c\
		ft_strncmp.c\
	   	ft_atoi.c\
		ft_isalpha.c\
	   	ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putstr.c\
		ft_putstr_fd.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_isspace.c	

OBJS = $(SRCS:.c=.o)
CC = gcc
ARRC = ar rc
RANLIB = ranlib

all:$(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:fclean all

.PHONY: clean fclean all re
