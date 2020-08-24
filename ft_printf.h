/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 11:35:04 by borjagrd          #+#    #+#             */
/*   Updated: 2020/08/24 09:09:37 by bgomez-r         ###   ########.fr       */
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
}	t_struct;

int		ft_printf(const char *format, ...);
void	initialize_flags(t_struct *flags);
int		main(void);

#endif
