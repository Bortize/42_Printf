Muchas veces es necesario representar números enteros con signo (es decir tanto positivos como negativos como el cero).
Para eso se usan distintas formas.

Una de ellas consiste en destinar un bit para representar el signo del número, por ejemplo, el bit que
se encuentra más a la izquierda. En este caso, los bits 11111111 ya no serían el número 256 sino el -127, mientras
que el -1 sería 10000001

Como hemos dicho, el primer bite de la izquierda se emplea para representar el signo y para entenderlo, haremos un ejemplo con un numero, por ejemplo el 100.

imagina que quremos hacer de 100 un numero entero con signo, esto es que tiene valor tanto negativo como positivo. Como hemos dicho que el primer bite por la izq se reserva para el signo, entonces el valor que podremos usar sera de 99

					(+)
	1 0 0	---> 	   9 9
					(-)

Ahora que ya tienes claro esto debemos dividir el valor entre 2 ya que vamos a representar tanto numeros negativos como positvios.

		99 / 2 =
