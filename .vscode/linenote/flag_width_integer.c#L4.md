La finalidad de esta funcion es imprimir el ancho donde se va a situar cualquier numero entero que imprimamos.

Solo podemos entrar en la funcion si no tenemos activado el flag de ceros y el flag de justificado. ¿Por qué? pues porque el flag de justificado a la hora de crear espacios donde va a ir situado el numero, no tiene sentido. El numero entero podrá imprimirse por la izq o dcha en base a los limites de width. En cambion width no tiene una base sobre la que justificarse, él es la base. 👇 Ejemplo visual

										integer			1 9 8
	width	_ _ _ _ _ _ _				width	_ _ _ _ _ _ _

La otra razon es que manejar el ancho cuando tiene ceros de por medio implica la utilizacion de otra funcion, donde se maneja el width y se colocan los ceros, por lo que esta unicamente se reserva para cuando unicamente tiene ancho o ancho con una precision dada.

Si a la hora de manejar el ancho vemos que tambien se le pasa un precision entramos en la primera parte de la funcion donde antes de nada comprobaremos si el numero entero y la precision sobre la que vamos a trabajar tienen un valor real, porque si no fuera así es aburdo seguir. Si no comprende aun muy bien a que me refiero fijate en el ejemplo de abajo.

				ft_printf("Esto es una prueba %.0i \n", 0);

El codigo que acabas de ver tiene precision y realmente se le pasa un entero pero no tienen valor, por lo que si esto ocurre, indicaremos que la longitud del numero es cero.

Seguidamente en la linea 23 lo que hacemos es comprobar mediante un operador ternario cual de los 2 valores es mayor, si la precision o la longitud del entero y el resultado se lo asignamos a flags->aux el que tenga siempre mayor longitud. Lo necesitaremos mas tarde en la funcion print_integer_width para pintar con espacios la diferencia que hay entre lo que va a ocupar el entero y que queda reservado y lo que sobra hasta llegar al limite del ancho.
Suponte que tienes un ancho de 9 y un entero con valor 1988 y una precision de 3. Deberas coger el de mayor numero siempre ya que hemos dicho que la precision no puede cortar numeros enteros para el ancho asi que lo que hacemos es restar a 9 la cantidad de espacios que ocupa 1988 que es 4 y nos da como resultado los espacios que nos quedan disponibles para pintar con " " ya que los otros seran ocupados.

						x x x	precision = 3;
					  1 9 8 8	flags->count = 4;
			- - - - - - - - -	width = 9;

Por lo que si al ancho le resto lo que ocupa el entero (9 - 4 = 5) me da como resultado el numero de espacios libres que debo imprimir

						x x x	precision = 3;
					  1 9 8 8	flags->count = 4;
			- - - - -			width = 9;

A continuacion comprobamos si el entero que nos pasan es negativo y si la precision es mayor que la longitud del entero, en tal caso tendremos espacio para añadir el signo y por ello le damos un tamaño mas a flags->count;

Por ultimo solo me queda valorar si el ancho es mayor que flags->count o la precision para pintar los espacios. En caso de no serlo, no pintare nada ya que no hay espacios que sobren para pintar.

					*******************************************

Si no tiene precision simplemente resta al ancho que le pasan (width) el tamaño de la longitud del entero y el resultado son los espacios que deben de pintarse para rellenar el ancho. Para ello, utilizaremos un contador (flags->j) y entableceremos la condicion que mientras se menor que el numoero de espacios que hay que pintar siga pintando.
Luego avanzamos en el contador del total de width (flags->len) y en el de los espacios pintados (flags->j)
