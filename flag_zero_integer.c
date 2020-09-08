/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_zero_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:24:44 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/08 12:38:18 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_zero_integer(t_struct *flags)
{
	flags->j = 0;
	if (flags->flag_width && (flags->width - flags->count))
	{
		while (flags->j < (flags->width - flags->count))
		{
			write(1, "0", 1);
			flags->len++;
			flags->j++;
		}
	}
}
