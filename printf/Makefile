# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 12:38:10 by meltremb          #+#    #+#              #
#    Updated: 2022/05/09 11:50:46 by meltremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

HEADER = ft_printf.h

SRCS = ft_printf.c \
	   printc.c \
	   printd.c \
	   printf_utils.c \
	   printi.c \
	   printmajx.c \
	   printminx.c \
	   printp.c \
	   printpercent.c \
	   prints.c \
	   printu.c \

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar rc
RM = rm -f
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
