/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:48:45 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/15 14:04:39 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	flag_minus_percent(t_struct *flags)
{
	flags->j = 0;
	if (flags->precision && (flags->precision > flags->count))
	{
		if (flags->flag_integer_negative)
			flag_precision += 1;
		while (flasg->j < (flags->width - flags->precision))
		{
			ft_putchar(" ");
			flags->len++;
			flags->j++;
		}
	}
	else
	{
		while (flags->j < (flags->width - flags->count))
		{
			ft_putchar(" ");
			flags->len++;
			flags->j++;
		}
	}
}

