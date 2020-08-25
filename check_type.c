/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 08:53:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/08/25 09:12:44 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	check_type(const char *format, t_struct *flags)
{
	if (format[flags->i] == 'i' || format[flags->i] == 'd')
		type_integer(flags);
}
