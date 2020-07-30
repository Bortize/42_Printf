/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_ghostplus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 10:53:28 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/30 11:12:22 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	flag_ghostplus(const char *format, t_struct *flags)
{
	lags->flag_ghostplus = 0;
	if (format[flags->i] == " ")
		flags->flag_ghostpllus = 1;
	flags->i++;
}
