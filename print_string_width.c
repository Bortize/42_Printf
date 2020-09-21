/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:56:40 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/21 22:05:15 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    print_string_width(t_struct *flags)
{
    int total;

    flags->j = 0;
    if (flags->count > flags->precision && flags->flag_precision == 1)
        total = (flags->width - flags->precision);
    else
        total = (flags->width - flags->count);
    while (flags->j < total)
    {
        ft_putchar(" ");
        flags->len++;
        flags->j++;
    }
}