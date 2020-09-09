/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borjagrd <borjagrd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:27:10 by borjagrd          #+#    #+#             */
/*   Updated: 2020/09/09 23:36:50 by borjagrd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"
#include    <unistd.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    <stdarg.h>

int	main()
{
	int number;
	float number2;

	number = 12345;
	number2 = 123.456;
// Imprimir numero sin flags
	printf("El Numero es %i \n", number);
	ft_printf("El Numero es %i \n\n", number);
//  Alineado por la izquierda
	printf("El Numero es %-9i \n", number);
	ft_printf("El Numero es %-9i \n\n", number);
// Alineado por la derecha
	printf("El Numero es %9i \n", number);
	ft_printf("El Numero es %9i \n\n", number);

	printf("El Numero es %f \n", number2);
	ft_printf("El Numero es %f \n\n", number2);


	return (0);
}
