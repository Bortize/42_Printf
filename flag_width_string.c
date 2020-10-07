/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:36:22 by borjagrd          #+#    #+#             */
/*   Updated: 2020/10/07 11:57:40 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	flag_width_string(t_struct *flags, char *format)
{
	flags->j = 0;
	if (flags->flag_minus == 0 && flags->flag_zero == 0)
	{
		if (format == 0 && flags->precision == 0)
			flags->count = 0;
		flags->aux = flags->precision > flags->count ?
			flags->precision : flags->count;
		if (flags->flag_integer_negative && (flags->precision > flags->count))
			flags->aux += 1;
		if (flags->width > flags->aux)
			print_string_width(flags);
		if (flags->width < flags->count)
			print_string_width(flags);
		else
			while (flags->j < (flags->width - flags->count))
			{
				ft_putchar(" ");
				flags->len++;
				flags->j++;
			}
	}
}
