# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gzafer <gzafer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 13:45:39 by gzafer            #+#    #+#              #
#    Updated: 2024/11/11 10:21:10 by gzafer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
       ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_memset.c ft_bzero.c \
       ft_strnstr.c ft_atoi.c ft_memcpy.c ft_memchr.c ft_memcmp.c \
       ft_memmove.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strdup.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	 
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR)  $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all