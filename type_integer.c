/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 09:14:02 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/10 00:21:32 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_integer(t_struct *flags)
{
	int	integer;

	integer = 0;
	integer = va_arg(flags->ap, int);
	flags->count = 0;
	int_counter(flags, integer);
	if (flags->flag_minus && flags->flag_zero && flags->flag_width)
		flags->flag_zero = 0;
	if (flags->aux < 0)
		flags->precision = 0;
	if (flags->flag_width)
		flag_width_integer(flags, integer);
	if (integer < 0)
		integer = print_negative(flags, integer);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);
	number_print(flags, integer);
	if (flags->flag_minus)
		flag_minus_integer(flags, integer);
}
