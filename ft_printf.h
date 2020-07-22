/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:14:51 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/22 10:27:29 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_struct
{
	va_list	ap;
	int		i;
	int		len;
}				t_struct;

// ↓↓↓ FUNCTIONS PROTOIPES ↓↓↓

#endif
