Vale, esto que viene es importante de entender. Recuerda que el contador de "i" nos servía para recorrer los caracteres de format que NO tenían que imprimirse como es el caso del especificador de formato %. Recuerda que estamos en este punto porque venimos de la funcion check_flags(). En esa función, ya recorrimos todos los caracteres imprimibles de format y si estamos aquí es porque encontró el simbolo de "%" y ahora tenemos que averiguar que flags estan a su derecha.

Esta función basicamente nos sirve de apoyo para alojar las 3 funciones que servirán para controlar los disparadores de los flags. Podríamos haberlas puesto directamente en la función check_flags pero la norminette no deja tener mas de 25 lineas por función por lo que he tenido que separarlas.

Es necesario recorrerlos todos, ya que de la función anterior sabemos que ha encontrado un flags, pero no sabemos cual de todos o cuales de todos. Simplemente sabemos que flags haberlo hay, pero cuál exactamente? Para eso sirven estas 3 funciones que veremos.

Al llegar aqui, vamos a comprobar estas 3 funciones en orden, y además tiene que ser en orden porque cuando el programa se ejecuta siempre va de arriba abajo en un orden y también va relacionado con que los flags se deben colocar siguiendo un orden. No puedes colocar los flags donde te de la gana ya que si por ejemplo colocaras la funcion de precision el primerod de todos en parse_flags, el programa iria avanzando y saltaria la funcion de minus_zero y width y entraria en precision, haria la precision y ya avanzaria en format al tipo de formato, pero si ahora quisieras comprobar width tendrias que volver para atras habiendo guardado el punto de especificador de formato y comenzando de nuevo pero esta forma es menos eficiente y gasta  mas recursos.

        ft_printf("Hello %-9.4s \n", "Borja");

        1 --> recorre format y encuentra el '-'
        2 --> avanza una posicion (flasg->i++) y encuentra el 'width' que vale 9
        3 --> rvanza una posicion (flasg->i++) y encuentra la '.' que es precision
        4 --> rvanza una posicion (flasg->i++) y encuentra el valor que se le pasa a la precision que es 4
