oid	initialize_flags(t_struct *flags)
{
	flags->i 👉 iterador de format para avanzar, incluyendo % y especificador de formato

	flags->j 👉 contador que usa en cada funcion desde cero para contar lo que o el ancho, precison, etc.. en definitiva, lo que se de en cada caso

	flags->len 👉 total de caracteres impresos en la salida por pantalla de terminal. Cuenta la cadena de format (hasta que encuentra el %) más los variádicos

	flags->aux 👉 guarda el valor de los flags cuando este es recibido por parámetro con "*"

	flags->count 👉 contador variádicos impresos

	flags->flag_minus 👉 Indicador para saber si hay justificado por la izquierda o no

	flags->flag_zero 👉 Indicador para saber si hay ceros o no

	flags->flag_width 👉 Indicador para saber si le estan pasando ancho o no

	flags->width 👉 Cuando le pasan ancho, guarda el valor del tamaño del ancho

	flags->flag_precision 👉 Indicador para saber si le estan pasando precisión

	flags->precision 👉 Cuando le pasan precisión, guarda el valor de la precisión

	flags->flag_integer_negative 👉  Indicador para saber si el número es negativo
}
