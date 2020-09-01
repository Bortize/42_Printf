/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_zero_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:29:12 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/01 16:03:54 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_zero_flag(const char *format, t_struct *flags)
{
	flags->flag_minus = 0;
	flags->flag_zero = 0;
	while (format[flags->i] == '0' || format[flags->i] == '-')
	{
		if (format[flags->i] == '0')
			flags->flag_zero == 1;
		if (format[flags->i] == '-')
			flags->flag_minus == 1;
		if (flags->flag_minus == 1)
			flags->flag_zero == 0;
		flags->i++;
	}
}
