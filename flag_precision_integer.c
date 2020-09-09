/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_integer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:44:17 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/09/08 12:46:57 by bgomez-r         ###   ########.fr       */
=======
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:04:07 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/08 21:44:03 by borjagrd         ###   ########.fr       */
>>>>>>> 49240591b421322e1de5b9e7d800c59d9503fb00
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

<<<<<<< HEAD
void	flag_precision_integer(t_struct *flags, int integer)
{
	if (flags->flag_precision > flags->flag_count)
	{
		
	}
}
=======
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
>>>>>>> 49240591b421322e1de5b9e7d800c59d9503fb00
