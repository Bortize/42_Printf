/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:19:07 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/08/24 09:40:48 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	check_flags(const char *format, t_struct *flags)
{
	while (format[flags->i])
	{
		if (ft_strchr("%", format[flags->i]))
		{
			flags->i++;
			if (format[flags->i] == '%')
				flags_trigger (format, flags);
			if (ft_strchr("idscupxX%", format[flags->i]))
				check_type (format, flags);
		}
		else
		{
			write (1, &format[flags->i], 1);
			flags->len++;
		}
		if (format[flags->i] != '\0')
		flags->i++;
	}
}
