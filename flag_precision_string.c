/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 22:58:33 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/21 23:07:08 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    flag_precision_string(t_struct *flags, char *string)
{
    char *str;
    int total;

    str = string;
    if ((flags->flag_precision == 1) && (flags->precision < flags->count))
        total = ft_strlen(str);
    else
        total = ft_strlen(flags->count);
    while (flags->j < total)
    {
        ft_putchar(str[flags->j]);
        flags->len++;
        flags->j++;
    }
}