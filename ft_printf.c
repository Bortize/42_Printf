/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:14:47 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/21 13:31:22 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_struct	*flags;

	if (!(flags = (t_struct *)malloc(sizeof(t_struct))))
		return (0);
	start_flags(flags);
	if (format == NULL)
		return (-1);
	va_start(flags->ap, format);
	if (ft_strcht(format, '%'))
		check_flags(format, flags);
	else
	{
		ft_putstr_fd((char *)format, 1);
		flags->len = ft_strlen(format);
	}
	va_end(flags->ap);
	return (flags->len);
}
