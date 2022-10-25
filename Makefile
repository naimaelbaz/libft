# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 14:39:43 by nel-baz           #+#    #+#              #
#    Updated: 2022/10/25 14:18:04 by nel-baz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc 

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isascii.c ft_memcpy.c ft_strjoin.c ft_strrchr.c\
ft_atoi.c ft_isdigit.c ft_strlcat.c ft_strtrim.c\
ft_bzero.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_substr.c\
ft_calloc.c ft_itoa.c ft_split.c ft_strlen.c ft_tolower.c\
ft_isalnum.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_toupper.c\
ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_strmapi.c\
ft_striteri.c ft_memmove.c ft_putchar_fd.c ft_putstr_fd.c\
ft_putendl_fd.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

.o: .c libft.h
			$(CC) $(CFLAGS) -c $<  -o $@
			
$(NAME):	$(OBJS)
		ar cr $(NAME) $(OBJS)

clean:	
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)
re : fclean all
.PHONY : all fclean clean re 