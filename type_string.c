/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:21:40 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/12 16:36:30 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    type_string(t_struct *flags)
{
    char    *str;

    flags->count = 0;
    str = va_arg(flags->ap, char *);
    if (!(str))
        str = (NULL);
    flags->count = ft_strlen(str);
    if (flags->aux < 0)
        flags->precision = flags->count;// si aux es menor que 0 la precision es la longitud del numero.
    if (flags->flag_width)
        flag_widht_string(flags, str);
    if (flags->flag_zero)
        flags_zero_integer(flags)
    if (flags->flag_precision)
        flag_precision_string(flags, str);
    print_string(flags, str);
    if (flags->flag_minus)
        flag_minus_string(flags);
}