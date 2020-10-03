/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 23:36:54 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/21 23:41:33 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    print_string(t_struct *flags, char *str)
{
    if (!(flags->precision))
    {
        flags->j = 0;
        while (str[flags->j] != '\0')
        {
            ft_putchar(&str[flags->j]);
            flags->len++;
            flags->j++;
        }
    }
}