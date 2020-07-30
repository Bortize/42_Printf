/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_trigger.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 12:06:21 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/30 11:12:36 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flags_triggers(const char *format, t_struct *flags)
{
	flag_ghostplus (format, flags);
	flag_minus_zero(format, flags);
	flag_width(format, flags);
	flag_precision(format, flags);
}
