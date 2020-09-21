/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_zero_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:24:44 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/21 22:51:07 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_zero_integer(t_struct *flags)
{
	flags->j = 0;
	if (flags->flag_width && (flags->width > flags->count))
	{
		while (flags->j < (flags->width - flags->count))
		{
			ft_putchar("0");
			flags->len++;
			flags->j++;
		}
	}
}
