### Cadenas De Carac.
https://www.geeksforgeeks.org/c-library-string-h/ (Para terminar)

    strlen() Nos dice el tamaño de la cadena.
    
    Prototipo:
    unsigned int strlen (char *s);

    Ejemplo:
    char *str1 = "http://see.xidian.edu.cn/cpp/u/shipin/"; Como puntero
    
    char str2[100] = "http://see.xidian.edu.cn/cpp/u/shipin_liming/"; Como cadena

     printf("strlen(str1)=%d", strlen(str1));
     printf("strlen(str2)=%d", strlen(str2));

 strcpy() Copia una cadena a otra 

 Prototipo: 
 strcpy( <variable_destino>, <cadena_fuente> )

 |Nombre|Función|Prototipo|
 |------|-------|---------|
 |strlen|Nos dice el tamaño de la cadena| unsigned int strlen (char *s);| 
 |strcpy| Copia una cadena a otra| strcpy( <variable_destino>, <cadena_fuente> )
 | 


 ### Ejercicio guiado
``` 
#include<stdio.h>
#include<string.h>

 int main(void)
{
    char nombre[20];
    printf("Ingresa tu nombre\n");
    fgets(nombre, sizeof(nombre), stdin);
    for (int i = 0; i < 20; i++)
    {
        printf("%c", nombre[i]);
    }

} 

```
``` 
Ejemplo de la cadena entera

#include<stdio.h>
#include<string.h>

int main(void)
{
    char nombre[20];
    printf("Ingresa tu nombre\n");
    fgets(nombre, sizeof(nombre), stdin);
    printf ("%s\n", nombre);


}