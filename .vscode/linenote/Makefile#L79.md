 las variables $(CC), y $(CFLAGS). Estas variables contienen el comando del compilador y sus argumentos, el compilador por defecto es cc, pero podemos fácilmente anularlo cambiando la variable


 $<  --> Indica el fichero dependencia que produjo que se ejecutara la regla. Es decir que era más nuevo que el target. En caso de que la regla tenga varios ficheros dependencias más modernos que el target, aquí se nos pasa el primero de los que cumplió con esta condición.
Debido a que en la lista de dependencias puede haber más de uno más modernos que el target, muchas veces en vez de $< se usa $?


%.o: %.c --> Es una regla especial llamada regla de "patron" donde el '%' de la regla tratará de coincidir con cualquier target requerido por el Makefile
