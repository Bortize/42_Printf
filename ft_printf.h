/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:14:51 by bgomez-r          #+#    #+#             */
/*   Updated: 2020/07/22 12:53:41 by bgomez-r         ###   ########.fr       */
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
	int		flag_minus;
	int		flag_zero;
	int		flag_aux;
}				t_struct;

// ↓↓↓ FUNCTIONS PROTOIPES ↓↓↓
int		ft_printf(const char *format, ...);
int		check_flags(const char *format, t_struct *flags);
void	flags_trigger(const char *format, t_struct *flags);
void	flag_minus_zero(const char *format, t_struct *flags);
#endif
