/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 23:17:10 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/09 23:30:19 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    number_print(t_struct *flags, int integer)
{
    char *number_str;

    flags->j = 0;
    if (flags->flag_precision && flags->precision == 0 && integer == 0)
        flags->j = 0;
    else
    {
        number_str = ft_itoa(integer);
        while (number_str[flags->j] != '\0')
        {
            flags->len += write(1, &number_str[flags->j], 1);
            flags->j++;
        }
        free(number_str);
        number_str = NULL;
    }
    
}