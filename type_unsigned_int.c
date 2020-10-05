/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_unsigned_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:10:46 by borjagrd          #+#    #+#             */
/*   Updated: 2020/10/05 13:16:34 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void	type_unsigned_int(t_struct *flags)
{
	unsigned int integer;

	integer = va_arg(flags->ap, unsigned int);
	int_counter_unsigned(flags, integer);
	if (flags->flag_minus && flags->flag_zero && flags->flag_width)
		flags->flag_zero = 0;
	if (flags->flag_width)
		flag_width_integer(flags, integer);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);//rellena de 0 si la precision es mayor que count
	print_unsigned(flags, integer);
	if (flags->flag_minus)
		flag_minus_integer(flags, integer);
}

void	int_counter_unsigned(t_struct *flags, unsigned int integer)
{
	char *str;

	flags_integer_negative == 0;
	str = ft_itoa(integer);
	flags->count = ft_strlen(integer);
	if (integer < 0)
		flags->flag_minus_integer == 1;
}
