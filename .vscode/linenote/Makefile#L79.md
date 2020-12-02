 las variables $(CC), y $(CFLAGS). Estas variables contienen el comando del compilador y sus argumentos, el compilador por defecto es cc, pero podemos fácilmente anularlo cambiando la variable


 $<  --> es una macro interna del sistema cuyo valor depende de la regla que estemos ejecutando. En este es el primer fichero de dependencia que permitió que la regla se ejecutase


%.o: %.c --> Es una regla especial llamada regla de "patron" donde el '%' de la regla tratará de coincidir con cualquier target requerido por el Makefile
