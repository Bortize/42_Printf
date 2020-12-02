 las variables $(CC), y $(CFLAGS). Estas variables contienen el comando del compilador y sus argumentos, el compilador por defecto es cc, pero podemos fácilmente anularlo cambiando la variable


%.o: %.c --> Es una regla especial llamada regla de "patron" donde el '%' de la regla tratará de coincidir con cualquier target requerido por el Makefile
