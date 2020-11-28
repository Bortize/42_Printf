Lo que hace esta función es comprobar si el numero que recibe por variádico es negativo. Tambien convierte en número de integer a char para que pueda ser representado por pantalla y le asigna el valor del camvio al puntero "str"

Termina calculando la longitud del número pero ya estando en tipo "char" para asignar la longitud a la variable flags->count

Por último, libera la memoria de str porque ya no la vamos a utilizar mas, porque unicamente fue necesaría para transformas el numero de integer a char.
