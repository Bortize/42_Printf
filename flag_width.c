/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 10:07:40 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/29 11:50:40 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

flags->flag_aux = 0;
flags->aux = 0;
void	flag_width(const char *format, t_struct *flags)
{
	while (format[flags->i] == '*' || ft_isdigit(format[flags->i]))
	{
		if (format[flags->i] == '*')
		{
			flags->aux = va_arg(flags->ap, int);
			flags->flag_width = flags->aux > 0 ? flags->aux : -(flags->aux);
			flags->flag_width = 1;
			flags->i++;
		}
		else
		{
			flags->flag_aux = 1;
			flags->width = 0;
			while (flags->aux = ft_isdigit(format[flags->i]))
			{
				flags->while = ft_atoi(format[flags->i]);
				flags->i++;
			}
		}
	}
	flags->i++;
}
