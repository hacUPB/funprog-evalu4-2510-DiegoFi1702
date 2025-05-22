#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int menu(void);
int submen_1(void);

int main(int argc, char const *argv[]){
    int vocal_a, vocal_e, vocal_i, vocal_o, vocal_u, espacios, lineas, caracteres, palabras, texto;
    FILE *punt_archivo;
    char nom_archivo[100], minusculas;
    char Palabra[20], Tex_str[caracteres];
    char string_text[caracteres];
    int remp;
    
    printf("Por favor ingrese el nombre del archivo con la extension txt.\n");
    fgets(nom_archivo, 100, stdin);
    punt_archivo = fopen(nom_archivo, "r");
    if (punt_archivo == NULL){
        printf("No se pudo abrir el archivo\n");
        return 1;
    }
    caracteres = 0; 
    while(!feof(punt_archivo)){
        texto = fgetc(punt_archivo);
        if (isspace(texto))
        palabras++;
        caracteres++;
        texto = fgetc(punt_archivo);
        if (isspace(texto))
        espacios++;
         texto = fgetc(punt_archivo);
        if(iscntrl(texto))
        lineas++;    
    }

    while(!feof(punt_archivo)){
        texto = fgetc(punt_archivo);
        minusculas = tolower((char)texto);
        if(minusculas == 'a'){
            vocal_a++;
        }
        if(minusculas == 'e'){
            vocal_e++;
        }
        if(minusculas == 'i'){
            vocal_i++;
        }
        if(minusculas == 'o'){
            vocal_o++;
        }
        if(minusculas == 'u'){
            vocal_u++;
        }
    }

    fgets(string_text, caracteres, punt_archivo);
    
    switch(menu()){
        case 1: switch(submen_1()){
            case 1:
            printf("El texto contiene %d caracteres.\n", caracteres);
            break;
            
            case 2:
            printf("Hay %d palabras en el texto.\n", palabras); 
            break;
            
            case 3:
            printf("Hay %d espacios en blanco.\n", espacios); 
            break;
            
            case 4:
            printf("Hay %d lineas en el texto.\n", lineas);
            break;

            default:
            printf("Opcion no valida.\n");
            break;
        }
        break;
            
        case 2: //acá colocar el cálculo de la cantidad de vocales.
        printf("La cantidad de vocales es: A:%d, E:%d, I:%d, O:%d, U:%d \n", vocal_a, vocal_e, vocal_i, vocal_o, vocal_u);
        break; 
        
        case 3: //buscar y reemplazar.
        printf("Por favor escriba la palabra que desea buscar.\n");
        fgets(Palabra, 20, stdin);
        remp = strlen(Palabra) - 1;
        //Profe es la 1:17am, me rindo con esto, no sé como hacerlo TT.
        //Le pedí ayuda a la Ia pero me da unas funciones muy complejas, y no entiendo como usa strstr, tengo una idea, pero hasta acá es hasta donde desarrollé yo solo TT.
        break;
        
        case 4: //Crear archivo nuevo con los datos.
        break;
        
        default: printf("Opcion no valida\n");
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