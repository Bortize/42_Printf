/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadec_countdigits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:41:58 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/30 11:44:12 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	hexadec_countdigits(t_struct *flags, unsigned int hexa)
{
	flags->count = 0;
	while (hexa > 15)
	{
		hexa = hexa / 16;
		flags->count++;
	}
	flags->count++;
}
