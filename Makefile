# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 11:25:34 by borjagrd          #+#    #+#              #
#    Updated: 2020/08/25 09:38:21 by bgomez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT		=	libft.a

SRCS		=	ft_printf.c \
				initialize_flags.c \
				check_flags.c \
				flags_trigger.c \
				minus_zero_flag.c \
				width_flag.c \
				precision_flag.c \
				check_type.c \
				int_counter.c

				main.c
#Compilador
CC			= @gcc
#Indica los argumentos que se van a pasar al ßcompilador
CFLAGS		= -Wall -Wextra -Werror -g
#Variable que contiene todos los ficheros .o evitando que tenga que listarlos todo el tiempo. Ademas en la misma variable los pasa de .c a .o
OBJS		= $(SRCS:.c=.o)
# indica una lista separada por comas de directorios donde buscar los archivos de cabecera
INCLUDE		= ./libft

AR			= ar rcs

RM			= rm -rf

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
				$(CC) $(CFLAGS) -c $(SRCS)
				make -C $(INCLUDE)
				cp libft/libft.a .
				mv libft.a $(NAME)
				@$(AR) $(NAME) $(OBJS)
				ranlib $(NAME)
				#Esta linea produce el archivo de salida 'a.out' para poder ver el main
				$(CC) -g -L . libftprintf.a main.c

clean:
			$(RM) $(OBJS)
			make -C $(INCLUDE) clean

fclean:     clean
				$(RM) $(NAME)
				make -C $(INCLUDE) fclean
				$(RM) a.out a.out.dSYM

re:			fclean all

.PHONY:		all clean fclean re
