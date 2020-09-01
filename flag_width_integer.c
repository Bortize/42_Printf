/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 19:30:51 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/01 20:57:08 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    flag_width_integer(t_struct *flags, long int integer)
{
    flags->j = 0;
    if (!(flags->flag_minus) && !(flags->flag_zero))
        flags->count = 0;
        
}