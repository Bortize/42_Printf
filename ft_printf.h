/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:35:04 by borjagrd          #+#    #+#             */
/*   Updated: 2020/08/24 12:41:58 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct  s_struct
{
	va_list ap;
	int	i;
	int	len;
	int	flag_minus;
	int	flag_zero;
	int	aux;
	int	width;
	int	flag_width;
}	t_struct;

int		ft_printf(const char *format, ...);
void	initialize_flags(t_struct *flags);
void	check_flags(const char *format, t_struct *flags):
int		main(void);

#endif
