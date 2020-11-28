Esta función comprobará 2 flags al mismo tiempo. Sabremos si tiene el flags de justificado por la izquierda, o si hay que rellenar de ceros

Los parametros que recibe son la cadena format y las variables de la estructura. Debemos de tener en cuenta que se esta trayendo los parametros de fuera para trabajarlos dentro de la función.

Ahora inicializamos a cero las variables que nos servirán para activar los flags o no. Aunque ya estaban inicializadas en la estructura, debemos hacerlo cada vez ya que en una cadena format pueden haber multitud de especificadores de formato, y si no las inicializaramos a cero cada vez, guardaría el valor del anterior y nuestro progrmama no funcionaría.

En este punto tenemos que trasladar nuesta cabeza al momento antes de entrar aqui.

Entramos aqui porque format[flags->i] encontro un flag pero no sabe cual. Tienes que tener presente que format[flags->i] esta detenido en este punto y ahora va a comprobar si el 'char' en le que se encuentra (dentro de la cadena format) es igual al flag '-' o '0' entonces entra dentro para averiguar cual de los 2 esta activado. Nunca podran estar los 2 activados ya que si hay justificado por la izquierda no puede haber ceros.

Una vez que termina de averiguar que flag es el que esta activado, itera un posicion para avanzar. Solo iteramos al finalizar la funcion en caso de que hayamos encontrado un flags. Si no encontraramos ningun flag en ninguna de las funciones de parse flag pasariamos directamtne a check_type
