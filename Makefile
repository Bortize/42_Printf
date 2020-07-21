# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/21 11:14:54 by bgomez-r          #+#    #+#              #
#    Updated: 2020/07/21 12:09:32 by bgomez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FUNCTIONS = ft_printf.c \

OBJS = ${FUNCTIONS:.c=.o}

all: ${NAME}

NAME: ${FUNCTIONS} ft_printf.h

clean:
		@-${RM} ${OBJS}

fclean: clean
		@-${RM} ${NAME}

re:		fclean all


