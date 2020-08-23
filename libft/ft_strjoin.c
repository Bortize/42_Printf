/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 01:39:00 by bgomez-r          #+#    #+#             */
/*   Updated: 2019/11/27 17:49:41 by bgomez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Asigna memoria para devolver una cadeda terminada en '\0', que sera el resultado 
** de la concatenacion de la cadena s1 y s2. Si la asignacion falla devuelve NULL
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str1;
	size_t	str2;

	if (s1 == 0 || s2 == 0) // Si cualquiera de las 2 cadenas no existe, devuelve 0
		return (0);
	str1 = ft_strlen(s1); // asigna la longitud de s1
	str2 = ft_strlen(s2); 
	str = (char *)malloc(sizeof(char) * (str1 + str2 + 1)); // Reserva memoria para la nueva cadena reservando 1 para el NULL del final
	if (str == 0) // Si falla la reserva de memoria devuelve 0
		return (0);
	ft_strcpy(str, s1); // Copia la cadena s1 en 'str'
	ft_strlcat(str, s2, (str1 + str2 + 1)); // Devuelve la longitud de bytes de la suma de la concatenacion de dst y src
	return (str);
}
