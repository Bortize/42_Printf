Lo primero que hacemos es preparar el ancho en el caso de que unicamente nos pasen por flags este valor. Como en otras ocasiones, si nos pasan minus y zero tengo otras funciones preparadas para ello. Por lo tanto, lo unico que tendremos que hacer es pintar el ancho y seguidametne el signo de porcentaje.

Ahora lo que hago es establecer el contador que ira contadno cuantos especios vacios estoy colocando. Atencion, aqui no hace falta hacer ancho menos longitud de la cadena par saber cuantos espacio vacios tengo que impirmir para el ancho ya que lo uico que va a imprimir esta funcion es el caracter especial '%' por ello hacemos un condicionante de tipo while indicando que mientras que el contador de j no sea menor que ancho menos 1 imprima espacios.
Avanzamos en longitud de cadena y en longitud de contador de espacios.

Ahora comprobamos si el flag de zero esta activado, que lo que hace es rellenar de ceros siempre que haya espacio, esto es, siempre que el ancho (width) sea mayor que la longitud de la cadena. En este tipo en concreto no hay longitud de cadena (si te fijas no hacemos va_arg al comienzo) esto es porque este tipo solo sirve para imprimir % y solo es un caracter que no nos hace falta recuperar por variadico porque siempre va a ser el mismo por lo que ya lo conocemos.

Comprobamos si nos pasan precision. Esta funcion lo que hace es rellenar de '0' la diferencia que hay entre el valor de la precision y el valor de la longitud de flags->count (que en este caso vale 1)


            flags->precision = 4;           x x x x             x x x x
            flags->count = 1                      %       "" "" 0 0 0 %
            flags->width = 6;           - - - - - -         - - - - - -
