/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:26:30 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/08 14:03:17 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	width_flag(const char *format, t_struct *flags)
{
	flags->aux = 0;
	flags->width = 0;
	flags->flag_width = 0;
	if (format[flags->i] == '*' || ft_isdigit(format[flags->i]))
	{
		if (format[flags->i] == '*')
		{
			flags->aux = va_arg(flags->ap, int);
			flags->flag_minus = flags->aux < 0 ? -(flags->aux) : flags->aux;
			flags->width = flags->aux < 0 ? -(flags->aux) : flags->aux;
			flags->flag_aux = 1;
			flags->i++;
		}
		else
		{
			flags->flag_width = 1;
			flags->width = 0;
			while (ft_isdigit(format[flags->i]))
			{
				flags->width = flags->width * 10 + format[flags->i] - 48;
				flags->i++;
			}
		}
	}
}
