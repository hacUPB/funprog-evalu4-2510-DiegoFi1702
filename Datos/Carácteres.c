#include <stdio.h>

int main()
{
    FILE *pfile;
    int letra = '1';
    char caracter;

    pfile = fopen("Carac.txt","a");
    if(pfile) //Sintaxis correcta, si no se crea el archivo, devuelve NULL, NULL es falso y cualquier otro valor es verdadero
    {
        while(letra != '?')
        {
            caracter = fgetc(stdin);
            if(caracter != '?')
            {
            letra = fputc(caracter, pfile);
            }
        }
    }

    fclose(pfile);
    return 0;
}