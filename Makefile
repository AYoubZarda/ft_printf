# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azarda <azarda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 21:51:15 by azarda            #+#    #+#              #
#    Updated: 2022/11/18 18:43:54 by azarda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

INC = ft_printf.h

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

AR = ar -rc

SRCS =		ft_printf.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_putex.c\

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(OBJS) $(INC)
	$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:clean
	@$(RM) $(NAME)

re: fclean all