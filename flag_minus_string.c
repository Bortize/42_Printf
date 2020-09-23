/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:52:38 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/23 12:04:34 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	flag_minus_string(t_struct *flags)
{
	int total;

	total = 0;
	flags->j = 0;
	if (flags->flag_minus && (flags->count > flags->precision))
		total = flags->width - flags->precision;
	else
		total = flags->width - flags->count;
	while (flags->j < total)
	{
		ft_putchar(" ");
		flags->len++;
		flags->j++;
	}
}
