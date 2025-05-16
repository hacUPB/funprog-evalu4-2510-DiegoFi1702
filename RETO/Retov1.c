#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(void);
int submen_1(void);

int main(int argc, char const *argv[]){
    int vocales, espacios, lineas, caracteres, palabras;
    FILE *punt_archivo;
    char nom_archivo[100];
    
    
    
    
    
    printf("Por favor ingrese el nombre del archivo con la extension txt.\n");
    fgets(nom_archivo, 100, stdin);
    punt_archivo = fopen(nom_archivo, "r");
    if (punt_archivo == NULL){
        printf("No se pudo abrir el archivo\n");
        return 1;
    }
        
        switch(menu()){
            case 1: switch(submen_1()){
                
                case 1:
                break;
                
                case 2: ;
                break;
                
                case 3: ;
                break;
            }
            break;
            
            case 2:
            //acá colocar el cálculo de la cantidad de vocales.
            printf("La cantidad de veces que aparecen vocales es: %d\n", vocales);
            break; 
            
            case 3: printf("Por favor ingrese el nombre del archivo\n");
            break;
            
            case 4: printf("Por favor ingrese el nombre del archivo\n");
            break;
            
            default: printf("no");
            break;
        }
        
        
        
        fclose(punt_archivo);
        
        return 0;
    }






int menu(void)
{
    int opciones;
    printf("Bienvenido a la consola de texto\n");
    printf("Por favor elija que quiere realizar\n");
    printf("1. Calcular estadísticas del archivo\n");
    printf("2. Calcular frecuencia de vocales\n");
    printf("3. Cambiar una palabra del texto por otra\n");
    printf("4. Guardar los cálculos en un archivo nuevo\n");
    scanf("%d", &opciones);
    return opciones;
}

int submen_1(void){
    int opciones;
    printf("¿Que desea calcular?\n");
    printf("1. Cantidad de caracteres\n");
    printf("2. Cantidad de palabras\n");
    printf("3. Cantidad de espacios en blanco\n");
    printf("4. Cantidad de lineas\n");     
    scanf("%d", &opciones);
    return opciones;
}