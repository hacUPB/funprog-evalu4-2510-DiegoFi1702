#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    int i; //se guarda en la pila
    int *puntero, tamano; // También en la pila
    printf("ingrese tamaño:");
    scanf("%d",&tamano);
    printf("\n");
    puntero = (int *) malloc(tamano*sizeof(int)); // asterisco de multiplicación, tamaño no es un puntero
//(int *) Esto se llama un casting, se almacena en un puntero porque es el único que puede almacenar direcciones de memoria.
    for(i=0;i<tamano;i++){
          puntero[i]=i+1;
          printf("%d\n",puntero[i]); //Esto nos da los datos, que serán iguales al tamaño del arreglo.
    }
    free(puntero); // Libera la memoria del "heap"
        return 0;
}