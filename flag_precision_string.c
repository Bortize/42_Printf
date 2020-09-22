/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 22:58:33 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/21 23:29:09 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    flag_precision_string(t_struct *flags, char *string)
{
    int paint;

    flags->j = 0;
    paint = flags->precision < flags->count ? flags->precision : flags->count;
    while (flags->j < paint)
    {
        ft_putchar(&string[flags->j]);
        flags->len++;
        flags->j++;
    }
}