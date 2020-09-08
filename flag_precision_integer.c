/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_integer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:04:07 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/08 21:44:03 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    flag_precision_integer(t_struct *flags)
{
    int num_len;

    num_len = flags->count;
    flags->j = 0;
    if (flags->width > num_len)
    {
        write(1, "0", 1);
        flags->len++;
        flags->j++;
    }
}