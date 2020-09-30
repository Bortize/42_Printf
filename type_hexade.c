/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexade.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:36:34 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/30 11:41:21 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	type_hexa_low(t_struct *flags)
{
	unsigned int	hexa;

	flags->count = 0;
	hexa = 0;
	hexa = va_arg(flags->ap, unsigned int);
	hexa_countdigits(flags, hexa);
}
