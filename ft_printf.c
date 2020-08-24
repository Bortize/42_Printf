/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:34:12 by borjagrd          #+#    #+#             */
/*   Updated: 2020/08/24 09:14:38 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	t_struct	*flags;

	if (!(flags = (t_struct *)malloc(sizeof(t_struct))))
		return (0);
	initialize_flags(flags);
	if (format == NULL)
		return (-1);
	va_start(flags->ap, format);
	if (ft_strchr(format, '%'))
		return (0);
	else
	{
		ft_putstr_fd((char *)format, 1);
		flags->len = ft_strlen(format);
	}
	va_end(flags->ap);
	return (flags->len);
}
