/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexade_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 22:14:25 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/10/02 23:51:18 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

void    type_hexade_upper(t_struct *flags)
{
    unsigned int    hexa;

    flags->count = 0;
    hexa = 0;
    hexa = va_arg(flags->ap, unsigned int);
    hexa_countdigits(flags, hexa);//la finalidad es recoger flags->count
}