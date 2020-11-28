flag_minus_integer se encarga de imprimir los espacios hasta completar el ancho cuando el numero esta justificado por la izquierda. Por lo tanto, primero se imprime el numero para que quede a la izquierda y a continuacion se empiza a rellenar de espacios hasta completar el valor que nos pasan

Hacemos lo mismo que en la funcion flag_width_integer lo unico que despues de number_print.

number_print sirve como divisor entre cuando hay que imprimir los espacios por la derecha o por la izquierda ya que si el ordenador siempre imprime de izquierda a derecha, por lo tanto, si imprimo primero los espacio que tengo que colocar y luego los caracteres, me quedara justificado por la derecha. En cambio, si primero imprimo la cadena o el entero y luego imprimo los espacios, me quedar justificado a la izq.

Bien, ya has entendido porque ponemos como condicion en flag_width_integer que si tiene el flag_minus activado no entre en la funcion, y es porque toca hacerlo despues de imprimir la cadena o numero.

Ejemplo para entenderlo:

                        ft_printf("Esto es una prueba %-9.3i \n", 7);

                        Esto es una prueba ..7mmmmmm
