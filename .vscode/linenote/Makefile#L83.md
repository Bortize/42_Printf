Make, al igual que c, asigna los valores de derecha a izq y de abajo arriba.

Con $(NAME) podremos verlo mas claro


@$(CC) $(CFLAGS) -c $(SRCS) --> Convierte todos los ficheros .c en .o Es lo mismo que si hiciera gcc -Wall -Wextra -Werror -c TodosFicheros.c

@make -C $(INCLUDE) --> Esta compilando los archivos de la libreria que esta incluida en el INCLUDE que en este caso el libft

@cp libft/libft.a ./  --> copia la librería generada arriba en el directorio dónde se encuentra el proyecto.

ranlib $(NAME) --> Crea un índice en la biblioteca y le permite a gcc saber donde buscar la función adecuada de una manera mas rápida y eficiente.
