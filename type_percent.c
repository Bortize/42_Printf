/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 17:00:59 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/12 18:48:30 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    type_percent(t_struct *flags)
{
    flags->count = 0;
    if (flags->flag_minus == 0 && flags->flag_zero == 0 && 
    flags->flag_width == 1)
    {
        flags->j = 0;
        while (flags->j < (flags->width - flags->count - 1))
        {
            write(1, " ", 1);
            flags->len++;
            flags->j++;
        }
    }
}