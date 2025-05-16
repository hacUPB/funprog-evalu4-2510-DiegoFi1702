#include <stdlib.h>
#include <stdio.h>
// preguntar al usuario cuantas letras tiene su nombre y apellido.
//reservar la memoria para los datos usando malloc
// Y lo imprimimos con un saludo
int main()
{
    int tamano;
    char *puntero;
    printf("Ingrese la cantidad de letras en su nombre y apellido\n");
    scanf("%d\n", &tamano);
    printf("\n");
    
    puntero = (char*) malloc((tamano + 2)*sizeof(char));
    
    
    printf("Ingresa tu nombre\n");
    fflush(stdin);
    fgets(puntero, tamano+2, stdin);
    printf("Hola %s\n", puntero);
    
    free(puntero);
    return 0;
}
