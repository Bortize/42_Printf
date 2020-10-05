/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 13:58:19 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/05 11:28:49 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	type_pointer(t_struct *flags)
{
	unsigned int pointer;

	pointer= 0;
	flags->count = 0;
	pointer = va_arg(flags->ap, unsigned int);
	hexade_countdigits(flags, pointer);
	if (flags->flag_width)
		flag_width_integer(flags, pointer);
	if (pointer < 0)
		pointer = print_negative(flags, pointer);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);
	print_pointer(flags, pointer);
	if (flags->flag_minus)
		flag_minus_pointer(flags, pointer);
}
