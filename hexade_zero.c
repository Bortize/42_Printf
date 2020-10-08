/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexade_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:42:53 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/08 21:33:14 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	hexade_zero(t_struct *flags, unsigned int hexade)
{
	if (hexade == 0 && flags->flag_precision == 0)
	{
		ft_putchar_fd('0', 1);
		flags->len++;
	}
	if (hexade == 0 && flags->flag_precision == 1 && flags->precision != 0)
	{
		ft_putchar_fd('0', 1);
		flags->len++;
	}
}
