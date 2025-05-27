#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int edad;
    char nombre[30];
    FILE *archivo;
    archivo = fopen("Texto.txt", "w");
    fprintf(stdout, "Escribe tu nombre porfavor\n");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strlen(nombre) - 1] = '\0';
    fprintf(stdout, "¿Que edad tienes?\n");
    scanf("%d", &edad);

    if (archivo != NULL){
        printf("Se creó el archivo\n");
        //Escribir una cadena de caracteres.
        fprintf(archivo, "Hola mundo, adios tonotos\n");
        //Escribir el nombre en el archivo.
        fprintf(archivo, "Escribiste %s\n", nombre);
        //Escribir la edad en el archivo
        fprintf(archivo, "Y tenés %d años\n", edad);

    }
    fclose(archivo);
    return 0;

}