/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 00:36:47 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/07 20:33:22 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.c"

void    print_unsigned(t_struct *flags, unsigned int unsign)
{
    char    *format;

    flags->j = 0;
    if (flags->flag_precision == 1 && flags->precision == 0 && unsign == 0)
        flags->j = 0;
    else
    {
        format = itoa_unsigned(unsign);
        while (format[flags->j] != '\0')
        {
            write(1, &format[flags->j], 1);
            flags->len++;
            flags->j++;
        }
        free(format);
        format = NULL;
    }  
}