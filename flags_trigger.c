/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_trigger.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:23:06 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/16 20:42:57 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	flags_trigger(const char *format, t_struct *flags)
{
	minus_zero_flag(format, flags);
	width_flag(format, flags);
	precision_flag(format, flags);
}