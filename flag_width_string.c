/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:36:22 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/21 22:13:12 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    flag_width_string(t_struct *flags, char *string)
{
    flags->j;
    if (flags->flag_minus == 0 && flag->flag_zero == 0)
    {
        if (string == 0 && flag->precision == 0)
            flags->count = 0;
        flags->aux = flags->precision > flags->count ? 
            flags->precision : flags->count;
        if (flags->flag_integer_negative && (flags->precision > flags->count))
            flags->aux += 1;
        if (flags->width > flags->aux)
            print_string_width(flags);
        if (flags->width < flags->count)
            print_string_width(flags);
        else
            while (flags->j < (flags->width - flags->count))
            {
                ft_putchar(" ");
                flags->len++;
                flags->j++;
            }
    }
}