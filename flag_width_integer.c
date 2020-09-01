/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 19:30:51 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/01 22:25:55 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    flag_width_integer(t_struct *flags, long int integer)
{
    flags->j = 0;
    if (!(flags->flag_minus) && !(flags->flag_zero))
    {
        if (flags->flag_precision)
        {
            if (integer == 0 && flags->precision == 0)
                flags->count = 0;
            flags->aux = flags->precision > flags->count ? 
            flags->precision : flags->count;
            if ((flags->flag_integer_negative) && 
            (flags->precision > flags->count))
                flags->aux += 1;
            if (flags->width > flags->aux)
                print_integer_width(flags);
        }
        else
            while (flags->j < (flasg->widht - flags->count))
            {
                write(1, " ", 1);
                flags->len++;
                flags->j++;
            }
    }
}