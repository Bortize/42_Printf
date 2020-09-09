La finalidad de esta función es comprobar si el valor de la precisión es mayor que el valor de la longitud del entero, porque en ese caso tendremos que rellenar los espacios que sobran por la derecha de ceros.

Tambien va a comprobar si el numero es negativo para tenerlo en cuenta y que el simbolo no cuente como un espacio porque sino me comeria un cero. Y es por eso que hace una copia de la longitud, porque necesita modificarla si es negativo y no quiere joder el valor para todoo el programa, solo quiere hacerlo en esta función concreta.
