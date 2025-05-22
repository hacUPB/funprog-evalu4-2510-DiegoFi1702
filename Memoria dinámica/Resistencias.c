#include <stdio.h>
#include <stdlib.h>
int main(){
    int cant_resist;
    float *resistencias;
    float sum, total;   
    printf("¿Cuantas resistencias tiene?\n");
    scanf("%d", &cant_resist);
    
    resistencias = (float *)calloc(cant_resist, sizeof(float));
    for(int i = 0; i < cant_resist; i++){
        printf("Ingrese la resistencia número %d\n", i + 1);
        scanf("%f", &resistencias[i]);
    }
    
    for(int i = 0; i < cant_resist; i++){
        sum += 1/resistencias[i];
    }
    total = 1/sum;
    printf("La suma de las resistencias paralelas = %f\n", total);
    free(resistencias); 
    return 0;
}