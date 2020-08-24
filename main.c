/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:27:10 by borjagrd          #+#    #+#             */
/*   Updated: 2020/08/24 09:07:42 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"
#include    <unistd.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    <stdarg.h>

int	main(void)
{
	ft_printf("El Numero es ese \n");
	ft_printf("El Numero es ese %i \n", 34);
	return (0);
}
