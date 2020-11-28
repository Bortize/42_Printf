La función unicamente recibe la estructura porque son los unicos valores que vamos a trabajar.

Declaramos una variable de tipo entero "integer" que nos servirá para guardar el valor del número.

Inicializamos flasg->count a cero para eliminar posibles valores random. Esta variable la emplearemos en la linea 22 para calcular la longitud de integer

Inicializamos la variable que va a guardar el numero a cero para poder trabajar con ella.

Ahora, vamos a acceder al número por variádico con la función va_arg() cuyo proposito es ir avanzando en la lista de argumentos variadicos que haya pasado el usuario para poder acceder a su valor. Una vez que va_arg() nos ha traido su valor, se lo asignamos a integer

Con int_counter() comprobaremos si el numeo que hemos obtenido es negativo. Transfromaremos el numero de entero a char y calcularemos la longitud del numero siendo ya un string.

*********************** I M P O R T A N T E ***********************

Antes de nada, es importante conocer el planteamiento de como se van a trabajar todos los tipos de ahora en adelante para poder controlar la impresión del justificado por la izq.
Para poder pintar, se va a dividir el código cómo en 3 zonas, siendo la función print_integer() la que marque el centro de la división. En la primera parte vamos a trabar, si lo tuvera, el pintar en pantalla o bien los espacios vacíos, o poner el signo negativo o rellenar de ceros.
print_integer() es la función que pintara los digitos que compone el número, el valor realmente importate.
La 3 y última zona es la que utilizaremos en caso de que haya justificado, ya que primer habremos pintado el número y ya después va el resto.

Dicho esto, comenzamos a explicar el código.

Primero comprobaremos si le han pasado ancho, justificado y cero. Si cumple la condición, entonces se deberá desactivar el flag que activa los ceros ya que en los tipos enteros no esta permitido tener estos 2 flags (justificado y cero)en combinación. Tiene prioridad el justificado, y será tratado al final del código cuando ya hayamos pintado nuestro número, que como hemos comentado arriba, nos sirve para controlas el justificado precisamtne.
Que no este permitido en enteros combinar justificado y ceros tiene una respuesta explicación sencilla: si un número tiene justificado y se imprime por la izq y a continuació se rellena por la drecha de ceros, entonces cambiaría su valor, y si nuestro printf fuera, por ejemplo, a ser utilizado en un bacno, claramene lo llevariamos a la ruina.

Vale, ahora viene otro concepto que es muy importante entender. Habíamos dicho que tanto el ancho(width), como la precisión(.), nos lo pueden pasar o por el format directametne o por variádico si aparecia con "*". Si lo hacía por variádico, necesitabamos obtener el valor haciendo uso de va_arg() y el valor obtenido, se lo asignabamos a flags->aux. Bien, entonces flags->aux lo que hace es guardar el valor cuando es recibido por "*" tanto para el width como para la precisión.
Ahora es muy importante recordar que en el width ya explicamos que quería decir cuando el variádico iba acompañado del símbolo negativo (si no lo recuerdas vuelve a repasarlo) pero basicamente a modo de resumem, en la función printf original, se permite poder activar el justificado por aquí también. Sin embargo, en la precisión ni siquiera tratamos la posibilidad de que fuera negativo porque la precision simplemente no puede ser negativa, eso no tendría sentido. La precision nos sirve para pintar mas o menos carácteres pero no tendria sentido decir que le pasaran pintar -2 caracteres a que no? eso esta claro, el minimo de pintar es cero, osea nada.
Ahora, volviendo a la función, cuando aquí estamos comprobando si flags->aux es menor que 0, únicamente se esta refiriendo a la precision, porque en el width eso ya lo trabajamos y lo dejamos resuelto. Entonces basicamente lo que estamos haciendo es decir que si es negativa, el flag de la precision lo ponga en cero, osea que no hay precisión.

Lo siguiente que hara sera preparar el ancho siempre mientas no tenga justificado por la izq.

El código avanza y ahora comprobará si el número es negativo para que en el caso de que así sea, imprimir el símbolo "-" con write y devolver el numero como positvo ya que ahora lo estamos tratanso como char y ya estamos transformándolo a negativo pintando el "-"

Lo siguiente que va a hacer es pintar los ceros para rellenar los espacios que sobren, si es que sobran, del ancho.

Con la precisión, segun las reglas de los flags, un numero entero nunca puede ser partido por la precision. Entonces porque hacemos su precision? porque lo que si que puede pasar es que la precision indicada sea mayor que la longitud del entero, y en ese caso tendremos que rellenar de ceros a la izq porque como hemos dicho un numero no puede ser partido.

En el siguiente ejemplo se muestra como el numeor tieene 3 valores pero se le pasa una precision de 5 valors por lo que es necesario rellenar los 2 huecos restantes con cero que sera siepre por la izq ya que por la derecha estariamos modificando el valor del numero.

        printf("Esto es una prueba %.5i \n", 123);

        Esto es una prueba 00123


Una vez hecho esto, debemos proceder a hacer un reajuste de flags, porque aunque el usuario nos haya pasado unos flags, puede resultar que algunos no esten permitidos o la combinación de distintos tipos de flags no sean compatibles.

Dicho esto, vamos a hacer una comprobación per
