/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 09:14:02 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/08/25 09:25:41 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	type_integer(const char *format, t_struct *flags)
{
	int	integer;

	integer  = 0;
	flags->count = 0;
	integer = va_arg(flags->ap, int);
	int_counter(flags, integer);

}
