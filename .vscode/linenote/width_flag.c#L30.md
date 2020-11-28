Si no recibimos el el valor por '*' significa que ira a buscarlo en format.

Activamos el flag indicando que sabemos que tiene ancho pero su valor lo establecemos en cero ya que aun no se cuanto vale.

Ahora evaluo la condicion de que mientras exista un numero comprendido entre 0 y 9 en ascii ejecute el codigo de dentro.

Ahora explicaremos el codigo del while:
***************************************
Activamos el flag de ancho porque sabemos que si esta aqui es porque hay ancho. pero como psaba antes, no sabemos su valor, tendremos que recorres format para leerlo.

Inicializamos el valor del ancho en cero aunque no haria falta ya que lo hicimos fuera del while.

Imagina que nos pasan un flag con un valor de width de 169 en format, lo que quiere decir que esta en texto, estamos hablando por lo tanto de que esta en tipo 'char' y tenemos que pasarlo a int para que el compilador lo entienda. Debes de saber ya, que el programa avanza de char en char y solo puede leer un byte cada vez, no tiene la capacidad de un humano de leer los 3 numeros con la vista de un vez, por lo que necesitamos hacer la siguiente tecnica para leer los numeros de 1 en 1 para luego juntarlos en un unico numero entero y que el ordenador entienda ese numero.

Establecemos un condicionante de tipo while en el que mientras se cumpla que la iteracion en la que se encuentra format sea un char comprendido en la tabla
'ascci decimal' entre el 0 y el 9 o lo que es lo mismo, entre el 48 y el 57, se ejecute el codigo que contiene dentro...

Para que sea mas facil de entender imagina que nos han pasado un width de 169 en el string de format y llegados a este punto, el compilador necesita transformar 169 de string a entero.
En primer lugar lo que tendremos que hacer es multiplicar flags->width * 10, y puede que te estes preguntando (si flags->width vale 0 por que lo multiplico por 10 si algo por cero es cero?) correcto, pero esto solo nos ocurrira la primera vez y lo iras viendo a media que avancemos. Utilizamos esta multiplicacion para colocar cada entero en la unidad que le corresponde (ahora lo veras)

        flags->width = 0;

                     49 - 48 = 1
        1 = 0 * 10 + 49 - 48;

    flags->i++; --> avanzamos en format

La primera vez al multiplicar 0 * 10 nos da cero y si le sumamos la resta de 49 que es lo que vale 1 en ASCII - 48 que es el valor ASCII donde comienzan los numeros entonces nos da como resultado 1, que es el valor entero real.

Bien ahora flags->width vale 1 por lo que el tema se pone interesante y format[flags->i] vale 6, que es 54 en ASCII.

        flags->width = 1;

                      54 - 48 = 6
        16 = 1 * 10 + 54 - 48;

    flags->i++; --> avanzamos en format

Lo que hacemos al multiplicar * 10 es desplazar el valor de antes (1) hacia la izq para dejar espacio al nuevo numero que entra (6). Estamos creando las decenas, y si a una decena lo multiplicas * 10 estaras creando las centenas...lo vas pillando?

        flasg->width = 16;

                        57 - 48 = 9
        169 = 16 * 10 + 57 - 48;

    flags->i++; --> avanzamos en format

Ahora, con la llegada de un nuevo numero, hemos multiplicado denuevo por 10 para desplazar el 1 a las centenas, el 6 a las decenas y el 9 que necesitaba entrar ahora esta en las unidades. el valor de width ahora es de 169 en tipo entero.

        flags->width = 169;
