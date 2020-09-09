/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_flags.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:18:28 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/08 19:21:41 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	initialize_flags(t_struct *flags)
{
	flags->j = 0;
	flags->len = 0;
	flags->flag_minus = 0;
	flags->flag_zero = 0;
	flags->aux = 0;
	flags->width = 0;
	flags->flag_width = 0;
	flags->count = 0;
}
