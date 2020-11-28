La función recibe por parámetro valores que voy a necesitar trabajr dentro de la función como son el format de donde lee los flags y la estructura donde se encuentran las variables para poder trabajar con ellas.

Lo primero que hacemos es inicializar a cero las variables que vamos a utilizar para eliminar el rastro de cualquier asignación de valor pasada en esas mismas direcciones de memoría.

Al contrario que en width, donde entrabamos dentro del código mientras se cumpliera una de las 2 condiciones, aquí solo entraremos mientras encuentre en el índice de format un punto, que es el indicador de que le están pasando precisión, ya que será en la siguiente posición donde entrará a valorar si el valor de la precision se lo esta pasando en el propio format o por parámetro.






Aquí a diferencia del width, no se comprueba que flags->aux sea negativo porque no tiene ningun significado. Simplemente que sea negativo es que no hay precision y por lo tanto tiene preferencia la longitud de lo que vayamos a imprimir. vease flags->count

