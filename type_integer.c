/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 09:14:02 by bgomez-r          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/09/08 12:43:41 by bgomez-r         ###   ########.fr       */
=======
/*   Updated: 2020/09/08 19:20:35 by borjagrd         ###   ########.fr       */
>>>>>>> 49240591b421322e1de5b9e7d800c59d9503fb00
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
		flag_precision_integer(flags, integer);
<<<<<<< HEAD
	return (0);
=======
>>>>>>> 49240591b421322e1de5b9e7d800c59d9503fb00
}
