Para explicarlo, check_flags podemos dividirlo en 3 partes dentro del while que se ejecutan en orden.

comenzamos con un while bajo la condicion que mientras que no termine de recorrer format siga ejecutandose. Esta condición es importante, porque tendremos que recorrer todo el string para poder comprobar si en algun byte de su posición encuentra un especificador de formato.


1ERA PARTE
*************************************************
Va a comparar si el punto donde se encuentra en la cadena es igual al % del identificador de formato.

En caso de que asi sea, avanza una posicion (flags->i++) porque ahora nos interesa leer si tiene algun flag y despues el especificador.
Utilizamos el mismo metodo y comparamos si la direccion de memoria donde se encuentra format[flags->i] coincide con algun char de la cadena "*.-0123456789" En caso de que asi sea, sabemos que hemos encontrado un flag pero no sabemos cual por lo que pasa a entrar en la funcion parse_flags para localizar que flag es el que ha encontrado y activarlo.

Hacemos exactamente lo mismo con el especificador de formato. En caso de que no haya encontrado un flag saltara aqui. Ocurre lo msimo, si lo encuentra sabemos que hay especificador de formato peoro no sabemos cual, por lo que entrara en la funcion check_type para averigualrlo.




2PARTE
************************************************
Aqui llega en caso de que no haya encontrado ni flags ni especificador de formato. Entonces lo que hacemos es escribir con un write el char del punto donde se encuentre en la cadena 'format' y avanza una posicion (flags->len) que es el contador de los caracteres que ha impreso




3PARTE
************************************************
Despues de avanzar una posicion de flags->len aqui nos preguntamos si hemos llegado al final. Si no es el caso, avanzamos una  posicion en el iterador de format. que incluye incluso los caracteres que no tiene que imprimir como es especifiicador de formato.



🧪 La diferencia entre "len" e "i" es que len se utiliza como contador de los caracteres que estamo imprimiendo, los cuales comprenden los que aparecen en la cadena format y los que corresponden a los argumentos variadicos y excluye todos aquellos caracteres correspondientes al especificador de formato, esto es, todos aquellos a partir de % en adelante.
El contador de i se utiliza para recorrer todo format, incluso los caracteres del especificador de formato. Con i, iremos avanzando sobre que flags tiene cada variable que hay que imprimir y cuales no (si tiene ancho, ceros, justificado, precision, etc...)
