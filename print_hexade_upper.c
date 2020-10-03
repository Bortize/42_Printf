/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexade_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:08:39 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/03 13:22:14 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	print_hexade_upper(t_struct *flags, unsigned int hexade)
{
	if (hexade != 0)
	{
		print_hexade_low(flags, hexade / 16);
		if (hexade % 16 >= 10)
		{
			ft_putchar_hexade('A' + (hexade % 16 % 10));
			flags->len++;
		}
		else
		{
			ft_putchar_hexade('0' + hexade % 16);
			flags->len++;
		}
	}
}