/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:06:03 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/19 01:03:59 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_integer_width(t_struct *flags)
{
	int total;

	flags->j = 0;
	total = flags->width - flags->aux;
	while (flags->j < total)
	{
		write(1, " ", 1);
		flags->len++;
		flags->j++;
	}
}
