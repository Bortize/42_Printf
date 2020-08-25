/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 10:18:13 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/08/25 12:48:13 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	precision_flag(const char *format, t_struct *flags)
{
	flags->aux = 0;
	flags->precision = 0;
	flags->flag_precision = 0;
	if	(format[flags->i] == '.')
	{
		flags->flag_zero = 0;
		flags->flag_precision = 1;
		flags->i++;
		if (format[flags->i] == '*')
		{
			flags->aux = va_arg(flags->ap, int);
			if (flags->aux >= 0)
				flags->precision = flags->aux;
			flags->i++;
		}
		else
		{
			flags->flag_precision = 1;
			flags->precision = 0;
			while (ft_isdigit(format[flags->i]))
			{
				flags->precision = flags->precision * 10 + format[flags->i] - 48;
				flags->i++;
			}
		}
	}
}
