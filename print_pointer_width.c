/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:22:22 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/16 16:34:47 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void	print_pointer_width(t_struct *flags)
{
	int total;

	flags->j = 0;
	total = flags->width - flags->aux;
	while (flags->j < total - 2)
	{
		write(1, " ", 1);
		flags->len++;
		flags->j++;
	}
}
