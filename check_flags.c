/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:19:07 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/01 16:04:05 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flags(const char *format, t_struct *flags)
{
	while (format[flags->i])
	{
		if (ft_strchr("%", format[flags->i]))//podria poner format[flags->i] == '%'
		{
			flags->i++;
			if (format[flags->i] == '%')
				flags_trigger(format, flags);
			if (ft_strchr("idscupxX%", format[flags->i]))
				check_type(format, flags);
		}
		else
		{
			write(1, &format[flags->i], 1);
			flags->len++;
		}
		if (format[flags->i] != '\0')
			flags->i++;
	}
}
