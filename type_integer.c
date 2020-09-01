/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 09:14:02 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/01 19:29:24 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_integer(const char *format, t_struct *flags)
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
}
