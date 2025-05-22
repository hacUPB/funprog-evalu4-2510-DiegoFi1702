|Nombre|Prototipo|Parametros|Retorno|Ejemplo|
|------|---------|----------|-------|-------|
|Calloc()|void *calloc(size_t nitems, size_t size)|2 enteros, aunque se recomienda en la segunda usar sizeof y ya. | Un puntero vacío, por lo que toca declararlo a la hora de usar la variable.| Podemos verlo en resistencias.c| 
|realloc()| void *realloc(void *ptr, size_t size) | Un puntero, este es el que se va a reasignar. Size, un entero, que declara el nuevo valor que va a tomar el puntero que colocamos en el parámetro anterior.| El retorno es un puntero en donde queda ubicada la nueva memoria, si falla la función, entonces devuelve NULL.|

Ejercicio:
1. Reservar memoria para ingresar el nombre de un curso de la carrera.
2. Solicitar y guardar el nombre.
3. Redimensionar memoria para que el nombre quede exacto.
4. Solicitar el NRC.
5. Redimensionar Memoria para el nuevo dato.