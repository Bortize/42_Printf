/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:08:14 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/29 12:17:43 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

flags->precision = 0;
flags->flag_precision = 0;
flags->aux = 0;
while (format[flags->i] == '*' || format[flags->i] == '.')
{
	if (format[flags->i] == '*')
	{
		flags->aux = va_arg(flags->ap, int);
		flags->precision = flags->aux > 0 ? flags->aux : flag->precison;
		flags->flag_precison = 1;
		flags->i++;
	}
	else
	{
		flags->i++
		while (flags->aux = ft_isdigit(format[flags->i]))
		{
			
		}
	}
}
