/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:35:04 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/08 17:59:42 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_struct
{
	va_list ap;
	int	i;
	int j;
	int	len;
	int	flag_minus;
	int	flag_zero;
	int	aux;
	int	flag_aux;
	int	width;
	int	flag_width;
	int	precision;
	int	flag_precision;
	int	count;
	int	flag_integer_negative;
}				t_struct;

int		ft_printf(const char *format, ...);
void	initialize_flags(t_struct *flags);
void	check_flags(const char *format, t_struct *flags);
void	flags_trigger(const char *format, t_struct *flags);
void	flag_width_integer(t_struct *flags, long int integer);
int		print_negative(t_struct *flags, long int integet);
void	flag_zero_integer(t_struct *flags);
void	check_type(const char *format, t_struct *flags);
void	minus_zero_flag(const char *format, t_struct *flags);
void	width_flag(const char *format, t_struct	*flags);
void	precision_flag(const char *format, t_struct *flags);
void	flag_width_integer(t_struct *flags, long int integer);
void	print_integer_width(t_struct *flags);
void	type_integer(t_struct *flags);
void	int_counter(t_struct *flags, int integer);

#endif
