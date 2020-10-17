/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_countdigits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:46:13 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/15 21:47:04 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void	pointer_countdigits(t_struct *flags, unsigned long pointer)
{
	flags->count = 0;
	while (pointer >= 16)
	{
		pointer = pointer / 16;
		flags->count++;
	}
	flags->count++;
}