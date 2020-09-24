/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:37:47 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/24 12:52:12 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	type_char(t_struct *flags)
{
	char c;

	flags->j;
	c = (char)va_arg(flags->ap, int);
	if (flags->flag_width && flags->flag_minus == 0)
		while (flasg->j < (flags->width - 1);
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	write(1, &c, 1);
	flags->len++;
	if (flags->flag_minus)
		while (flasg->j < flags->while - 1)
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
}
