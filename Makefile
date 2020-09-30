# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/21 11:25:34 by borjagrd          #+#    #+#              #
#    Updated: 2020/09/30 12:16:16 by bgomez-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DELETE_ON_ERROR:# Borra el target en caso de que falle la creacion del target por cualquier motivo

NAME		=	libftprintf.a

LIBFT		=	libft.a

SRCS		=	ft_printf.c \
				initialize_flags.c \
				check_flags.c \
				flags_trigger.c \
				minus_zero_flag.c \
				width_flag.c \
				flag_width_integer.c \
				print_integer_width.c \
				print_negative.c \
				flag_zero_integer.c \
				precision_flag.c \
				check_type.c \
				int_counter.c \
				type_integer.c \
				flag_precision_integer.c \
				number_print.c \
				type_string.c \
				flag_width_string.c \
				print_string_width.c \
				print_string.c \
				flag_minus_string.c \
				type_char.c \
				type_hexade.c \
				main.c
#Compilador
CC			= gcc
#Indica los argumentos que se van a pasar al compilador
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
				@echo "\n\n\n		FASE DE COMPILADO DEL PROGRAMA 'libft.a' \n"
				@$(CC) $(CFLAGS) -c $(SRCS)
				@make -C $(INCLUDE)
				@cp libft/libft.a ./
				@mv libft.a $(NAME)
				@echo "\n\n\n		GENERANDO LIBRERIA 'libftprintf.a' \n"
				$(AR) $(NAME) $(OBJS)
				@ranlib $(NAME)
				@echo "\n		INDEX libftprintf.a GENERADO CON ÉXITO\n\n\n"
				#Esta linea produce el archivo de salida 'a.out' para poder ver el main
				@$(CC) -g -L ./ libftprintf.a main.c

clean:
			$(RM) $(OBJS)
			make -C $(INCLUDE) clean

fclean:		clean
				$(RM) $(NAME)
				make -C $(INCLUDE) fclean
				$(RM) a.out a.out.dSYM

re:			fclean all

.PHONY:		all clean fclean re
