Lo primero que hagamos será incluir las directivas de preporcesamiento y las librerias que necesitamos utilizar.

A continuación escribimos nuestra función ft_printf donde:
		const char *format --> es la cadena de texo que va entre las comillas
		... -->  son los argumentos variádicos. Lo que tiene que pintar y esta relacionado conel especificador de formato, que es el %

La structura nos va a servir para no tener que estar creando las mismas variables durante todo el programa. A lo largo del programa, por ejemplo en los diferentes tipos mismamente, vamos a necesitar constadores que recorran las casdenas. Para que estar creando las mismas variables como puede ser "i" si podemos crearla en una estructura y asi evitarnos ese incomodo proceso.

Vamos a inicializar los flags a cero. Hacemos esto para eliminar los valores random que tenian las direcciones de memoría de las variables de la estructura en el momento que las declaramos. Las variables siguen consevardo el valor que tenian la pasada vez cuando fueron utilizadas. Para evitar que este valor intoxique nuestro programama, debemos de inicializar todos los flags a cero.

Protegemos nuestro programam y comprobamos si se le ha pasado algo por format. En caso de que no tenga nada no vamos a poder escribir nada porque no se le ha pasado especificador de formato por lo que si esto sucede devolvemos un -1.

Ahora tenemos que iniciar los argumentos variádicos para posicionarnos en el primero e irlos recorriendo.

Al reservar memoria para los flags, estas direcciones que hemos resevado siguen consevardo el valor que tenian la pasada vez cuando fueron utilizadas. Para evitar que este valor intoxique nuestro programama, debemos de inicializar todos los flags a cero.

Buscamos el '%' de especificador de formato en la cadena. Ojo, solo nos dice si esta dentro de format pero no nos dice donde. Nos sirve para saber si tiramos por check_flags o imprimimos todo el string de format con putstr_fd

Si no encuentra % significa que no hay nada mas que hace que imprimir la cadena str que se encuentra en format.
Una vez que a terminado de imprimir, calculamos su longitud y asignamos el resultado a flags->len

Para terminar, debemos de finalizar cerrando el argumento variadico con va_end y devolver la longitud de format que se encontraba alojado en flags->len. Devolvemos la longitud porque es lo que hace la función printf original.
