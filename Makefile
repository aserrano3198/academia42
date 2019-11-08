# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aserrano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 16:32:01 by aserrano          #+#    #+#              #
#    Updated: 2019/11/07 17:10:58 by aserrano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a

SRC =	ft_atoi.c		ft_memccpy.c	ft_putnbr_fd.c	ft_strmapi.c \
		ft_bzero.c		ft_memchr.c		ft_putstr_fd.c	ft_strncmp.c \
		ft_calloc.c		ft_memcmp.c		ft_split.c		ft_strnstr.c \
		ft_isalnum.c	ft_memcpy.c		ft_strchr.c		ft_strrchr.c \
		ft_isalpha.c	ft_memmove.c	ft_strdup.c		ft_strtrim.c \
		ft_isascii.c	ft_memset.c		ft_strjoin.c	ft_substr.c \
		ft_isdigit.c	ft_putchar.c	ft_strlcat.c	ft_tolower.c \
		ft_isprint.c	ft_putchar_fd.c	ft_strlcpy.c	ft_toupper.c \
		ft_itoa.c		ft_putendl_fd.c	ft_strlen.c

SRCO = ft_atoi.o		ft_memccpy.o	ft_putnbr_fd.o	ft_strmapi.o \
		ft_bzero.o		ft_memchr.o		ft_putstr_fd.o	ft_strncmp.o \
		ft_calloc.o		ft_memcmp.o		ft_split.o		ft_strnstr.o \
		ft_isalnum.o	ft_memcpy.o		ft_strchr.o		ft_strrchr.o \
		ft_isalpha.o	ft_memmove.o	ft_strdup.o		ft_strtrim.o \
		ft_isascii.o	ft_memset.o		ft_strjoin.o	ft_substr.o \
		ft_isdigit.o	ft_putchar.o	ft_strlcat.o	ft_tolower.o \
		ft_isprint.o	ft_putchar_fd.o	ft_strlcpy.o	ft_toupper.o \
		ft_itoa.o		ft_putendl_fd.o	ft_strlen.o

all:	$(NAME)

$(NAME):
		gcc -Werror -Wall -Wextra -c $(SRC)
		ar rc $(NAME) $(SRCO)
		ranlib $(NAME)

clean:	
		rm -f $(SRCO)

fclean:	clean
		rm -f $(NAME)

re: 	fclean all
