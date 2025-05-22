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
``` 
### Preguntas de control
1. ¿Por que sizeof("Hola) devuelve 5 pero strlen("hola") devuelve 4

Es debido a que sizeof cuenta bytes, y por tanto el carácter nulo, mientras que strlen, solo cuenta los carácteres de la cuerda (string)

2. ¿Cuál es la diferencia práctica entre declarar una cadena como arreglo (char saludo[]) y como puntero (char *saludo)? 

La diferencia es que al declararlo con el asterisco, se declara como puntero y por tanto el preprocesador entiende que es algo que no se va a cambiar, mientras que al usarlo como arreglo es algo que podemos cambiar continuamente.

3. ¿Cómo evitas un "buffer overflow" al copiar o concatenar cadenas?

La mejor forma de evitarlo es usando un comando seguro, como seria el caso de fgets.
```
char cadena [5]
scanf ("%s", cadena);  función insegura.
sgets (cadena, sizeof(cadena), stdin); función segura.
```
4. ¿Qué hace exactamente la función strcspn() y por qué es útil usarla junto con fgets()?

La función Strcspn() se encarga de decirnos cuantos caracteres hay hasta que llegue a coincidir con uno que nosotros le damos a la función.
``` 
Ejemplo: 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    
    char frase[12] = "ceeeeeeeo";
    int contador = strcspn(frase, "o");

    printf("Cantidad de o = %d\n", contador);
    return 0;
}
 Al ejecutar, nos dice que la cantidad de caracteres antes de la o es de 8, que si contamos, es correcto.
 ```
 Lo bueno de combiar esto con "fgets" es que de esa forma podemos obtener la cantidad de caracteres antes de cierto símbolo, etc. en una frase que hayamos creado nosotros mismos.

5. (No resolver por ahora.)

## Dibujo de memoria
![dibujo](/Images/Dibujomemoria.png)
