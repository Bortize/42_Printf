/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 14:52:49 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/05 11:45:46 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void	flag_minus_pointer(t_struct *flags, int pointer)
{
	flags->count = 0;

	if (flags->flag_precision && (flags->precision > flags->count))
	{
		if (flags->flag_integer_negative)
			flags->precision = +1;
		while (flags->j < (flags->width - flags->precision))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
	else
	{
		if (flags->flag_precision == 1 && flags->precision == 0 && pointer == 0)
			flags->count = 0;
		while (flags->j < (flags->width - flags->count - 2))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
	 	}
	}
}
