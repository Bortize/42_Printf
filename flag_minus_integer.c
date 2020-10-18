/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 23:39:07 by borjagrd          #+#    #+#             */
/*   Updated: 2020/10/19 01:13:32 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_minus_integer(t_struct *flags, int integer)
{
	flags->j = 0;
	if (flags->flag_precision && flags->precision > flags->count)
	{
		if (flags->flag_integer_negative)
			flags->precision += 1;
		while (flags->j < (flags->width - flags->precision))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
	else
	{
		if (flags->flag_precision && flags->precision == 0 && integer == 0)
			flags->count = 0;
		while (flags->j < (flags->width - flags->count))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
}
