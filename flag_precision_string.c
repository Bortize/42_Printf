/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 22:58:33 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/28 10:42:57 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	flag_precision_string(t_struct *flags, char *str)
{
	int paint;

	flags->j = 0;
	paint = flags->precision < flags->count ? flags->precision : flags->count;
	while (flags->j < paint)
	{
		ft_putchar(&string[flags->j]);
		flags->len++;
		flags->j++;
	}
}
