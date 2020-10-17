/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:27:10 by borjagrd          #+#    #+#             */
/*   Updated: 2020/10/17 18:58:14 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int number = 123;

	printf("Esto es una prueba %5i \n", 102);
	ft_printf("Esto es una prueba %2i \n", 102);
	printf("Esto es una prueba %-9i \n", 42);
	ft_printf("Esto es una prueba %-9i \n", 42);
	printf("Prueba de decimales %.*f \n", 10, 2.235);
	ft_printf("Prueba de decimales %.*f \n", 10, 2.235);
	printf("Prueba de decimales %.3f \n", -2.235675);

	ft_printf("Prueba de decimales %.3f \n", -2.235675);
	printf("Esto es una prueba %-5i \n", 23);
	ft_printf("Esto es una prueba %-5i \n", 23);
	printf("Esto es una prueba %5i \n", 23);
	ft_printf("Esto es una prueba %5i \n", 23);
	printf("Esto es una prueba %-6.3f \n", 1234.56789);
	ft_printf("Esto es una prueba %-4.5f \n", 1234.56789);
	printf("Esto es una prueba %-9.7s \n", "Borja");
	ft_printf("Esto es una prueba %-9.7s \n", "Borja");
	ft_printf("Esto es una prueba %-9.4s \n", "Borja");
	printf("Esto es una prueba %169i \n", 234);
	printf("Esto es una prueba %94d \n", 234);
	ft_printf("Esto es una prueba %9.3% \n", '%');
	ft_printf("Esto es una prueba %.3% \n", '%');
	ft_printf("Esto es una prueba %-9.3% \n", '%');
	ft_printf("Esto es una prueba %9.3i \n", 7);
	ft_printf("Esto es una prueba %.3i \n", 7);
	ft_printf("Esto es una prueba %-9.3i \n", 7);

	ft_printf("Esto es una prueba %9.3% \n", '%');
	ft_printf("Esto es una prueba %.3% \n", '%');
	ft_printf("Esto es una prueba %-9.3% \n\n\n", '%');

	ft_printf("Esto es una prueba %9.3i \n", 7);
	ft_printf("Esto es una prueba %.3i \n", 7);
	ft_printf("Esto es una prueba %-9.3i \n\n\n", 7);

	ft_printf("Esto es una prueba %9i \n", 7);
	ft_printf("Esto es una prueba %-9i \n", 7);
	ft_printf("Esto es una prueba %9.i \n", 7);
	ft_printf("Esto es una prueba %.3i \n\n\n", 7);

	ft_printf("Esto es una prueba %-9i \n", number);
return 0;
}
