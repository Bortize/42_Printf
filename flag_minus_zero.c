/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 12:14:49 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/22 12:33:44 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_minus_zero(const char *format, t_struct *flags)
{
	flags->flag_minus = 0;
	flags->flag_zero = 0;
	while (format[flags->i] == '0' || format[flags->i] == '-')
	{
		if (format[flags->i] == '-')
			flags->flag_minus = 1;
		if (format[flags->i] == '0')
			flags->flag_zero = 1;
		if (flags->flag_minus = 1)
			flags->flag_zero = 0;
	}
	flags->i++;
}
