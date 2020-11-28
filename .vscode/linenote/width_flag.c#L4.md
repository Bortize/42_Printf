Esta función comprueba si nos estan pasando un ancho especificado.

Como siemrpe, lo primero que hacemos es inicializar nuestras variables a cero para eliminar cualquier valor anterios.

flags->aux --> va a contener el valor del argumento variadico, el cuál será obtenido con va_arg()
lags->width --> va a contener el valor del ancho a imprimir
flags->flag_width --> contiene el boleano (1 o 0) que servira para activar el flag o no.

Ahora ponemos un if con 2 condiciones para poder entrar dentro, asi que con que una de las 2 se cumpla ya podremos entrar dentro de la función.
Primero intentaremos saber si el índice dónde se encuentra el iterador de format es igual al asterisco "*" Esto lo que nos dice es que en vez de pasarle el tamaño del ancho en el format, se lo esta pasando por parámetro, como se muestra en el siguiente ejemplo:

			ft_printf("Test de ejemplo %-*.3d \n", 7, 12345);
										 👆🏻		 👆

Como puedes ver en el ejemplo de arriba, le esta diciendo con * que efectivamente tiene ancho pero que le pasamos su valor por parámetro, el cuál tendrá un valor de 7

La otra condición sería que directametne le pasara el valor del tamaño del ancho en el mismo string de format, por lo que solo tiene que comprobar el número.

			ft_printf("Test de ejemplo %-7.3d \n", 12345);
										 👆🏻

Si se cumple una de las 2 condiciones entramos dentro, pero claro, ahora se nos presenta el problema de que no sabemos por cual de las 2 condiciones hemos entrado, por lo que en esta parte vamos a averiguarlo y en función de por cual hemos entrado, haremos una cosa u otra.

Si el valor del ancho se le pasa por parametro "*" entonces lo primero que tenemos que hacer es acceder al valor que contiene el parámetro y para ello hacemos uso de va_arg(). Una vez que hemos obtenido su valor, se lo asignamos a la variable flags->aux

Lo siguiente que hacemos es comprobar si el justificado por la izq en vez de haberlo pasado en el format, se lo han pasado por parámetro. Si fuera el caso activariamos el flag de justificado.
Para entender un poco mejor esto, pasaremos a explicarlo mas en profundidad:

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


Bien, una vez comprendido este concepto, y en el caso de que hubiera tenido justificación por parámetro y ya habiendo sacado el valor, ahora lo que hacemos es devolverle al ancho su valor. Recordemos que el símbolo negativo la única utilidad es la de justificar, por lo que en esta línea vamos a volver a poner el valor del ancho en positivo que es realmente nel valor original. Para ello,  utilizamos un ternario en el que indicamos que si es negativo, lo multiplicque por menos "-" para devolverle la positividad ( ya sabeos que menos por menos es mas) y en caso de que el valor ya fuera positivo, pues se deja igual.

e activaría por lo tanto el flag de width con un 1 "true"

y avanzamos una posición en el iterador que recorre el formart


***********+   else   ************


Si no recibimos el el valor por '*' significa que ira a buscarlo en format.

Activamos el flag indicando que sabemos que tiene ancho pero su valor lo establecemos en cero ya que aun no se cuanto vale.

Ahora evaluo la condicion de que mientras exista un número comprendido entre 0 y 9 en ascii ejecute el codigo de dentro.

Ahora explicaremos el codigo del while:
***************************************
Imagina que nos pasan un flag con un valor de width de 169 en format, lo que quiere decir que esta en texto, estamos hablando por lo tanto de que esta en tipo 'char' y tenemos que pasarlo a int para que el compilador lo entienda. Debes de saber ya, que el programa avanza de char en char y solo puede leer un byte cada vez, no tiene la capacidad de un humano de leer los 3 números con la vista de un vez, por lo que necesitamos hacer la siguiente técnica para leer los números de 1 en 1 para luego juntarlos en un único número entero y que el ordenador entienda ese nnúmero.

Establecemos un condicionante de tipo while en el que mientras se cumpla que la iteración en la que se encuentra format sea un char comprendido en la tabla 'ascci decimal' entre el 0 y el 9 o lo que es lo mismo, en valores ASCII entre el 48 y el 57, se ejecute el código que contiene dentro...

Para que sea más fácil de entender, imagina que nos han pasado un width de 169 en el string de format y llegados a este punto, el compilador necesita transformar 169 de char a entero.
En primer lugar lo que tendremos que hacer es multiplicar flags->width * 10, y puede que te estes preguntando (si flags->width vale 0 por que lo multiplico por 10 si algo por cero es cero?) correcto, pero esto solo nos ocurrira la primera vez y lo iras viendo a media que avancemos. Utilizamos esta multiplicacion para colocar cada entero en la unidad que le corresponde (ahora lo verás)

		flags->width = 0;

					 49 - 48 = 1
		1 = 0 * 10 + 49 - 48;
		👆
	flags->i++; --> avanzamos en format

La primera vez al multiplicar 0 * 10 nos da cero y si le sumamos la resta de 49 que es lo que vale 1 en ASCII - 48 que es el valor ASCII donde comienzan los numeros entonces nos da como resultado 1, que es el valor entero real.

Bien, ahora flags->width vale 1 por lo que el tema se pone interesante y format[flags->i] vale 6, que es 54 en ASCII.

		flags->width = 1;

					  54 - 48 = 6
		16 = 1 * 10 + 54 - 48;
		👆
	flags->i++; --> avanzamos en format

Lo que hacemos al multiplicar * 10 es desplazar el valor de antes (1) hacia la izq para dejar espacio al nuevo numero que entra (6). Estamos creando las decenas, y si a una decena lo multiplicas * 10 estaras creando las centenas...lo vas pillando?

		flasg->width = 16;

						57 - 48 = 9
		169 = 16 * 10 + 57 - 48;
		👆
	flags->i++; --> avanzamos en format

Ahora, con la llegada de un nuevo número, hemos multiplicado de nuevo por 10 para desplazar el 1 a las centenas, el 6 a las decenas y el 9 que necesitaba entrar ahora esta en las unidades. el valor de width ahora es de 169 en tipo entero.

		flags->width = 169;
