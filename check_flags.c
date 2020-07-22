/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 09:07:16 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/22 11:16:28 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_flags(const char *format, t_struct *flags)
{
	while (format[flags->i])
	{
		if (format[flags->i] == '%')
		{
			flags->i++;
			if (ft_strcht("*.-0123456789", format[flags->i]))
				parse_flags(format, flags);
			if (ft_strchr("scupidxX%", format[flags->i]))
				check_type(format, flags);
		}
		else
		{
			write(1, &format[flags->i], 1);
			flags->len++;
		}
		if (format[flags->i] == '\0')
			flags->i++;
	}
}
