Cuando se trata de width, flags->aux en este caso si que puede ser negativo, no como en la precision y te explicaré por qué.

Recuerda que width es el ancho de una cadena. Imagina un string de tu nombre "Borja" en un ancho de 9 como en el ejemplo de abajo.

 					_ _ _ _ b o r j a
					1 2 3 4 5 6 7 8 9

Pues bien, aquí (a diferencia de la precision en la cual no tendría sentido calcular si es negativo porque significaria que simplemente no tiene precision) cuando el valor es negativo no esta reduciendo los espacios del ancho, lo que esta haciendo es activar el flag flags->flag_minus el cual justifica el string por la izq quedando de la siguiente manera.

					b o r j a _ _ _ _
					1 2 3 4 5 6 7 8 9

Esto es importante entenderlo porque el justificado puede que nos lo pasen directamente en el format, o pude que en format no ponga nada y nos lo pasen por variadico junto al valor del ancho. A continuación muestro 2 ejemplos de cada caso

Justificado en el format -->		ft_printf("Test de ejemplo %-*.3d \n", 7, 12345);
																👆
Justificado en el parámetro -->		ft_printf("Test de ejemplo %-*.3d \n", -7, 12345);
																		   👆

