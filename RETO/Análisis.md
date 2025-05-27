# Reto 4, sustentación.
### Análisis.
Primero que nada empezamos leyendo lo que se nos está pidiendo:
"Crear una aplicación de consola que permita analizar un archivo de texto plano mediante un menu interactivo." 

Teniendo esto en cuenta, lo que yo haría es lo siguiente: 
1. Leer las opciones que se necesitan.
2. Crear el menu como una función aparte para no tener que reescribirlo cada vez que se necesite.
5. Como no se pueden calcular cosas usando solo el puntero tipo FILE, lo convertimos a una cadena de caracteres que si pueda ser operada.
4. Calculamos las variables que necesitemos usando funciones como las que están en la biblioteca "Ctype.h" que nos permite evaluar cuando sea un tipo de caracter en específico. Cuando la evaluación sea positiva, aumentamos un contador y de esa forma tomamos el registro.
3. Crear un switch que tenga como parámetro un entero que tenga el menu y dentro del switch colocar que se impriman las variables que necesito. 
6. Básicamente el mismo proceso con cada requisito, un análisis previo y luego aplicar funciones para contar lo que se nos pide y luego un menu para imprimirlo.

### Estructura del código:
1. Primero tenemos las bibliotecas de cabecera en donde incluimos todas las que necesitaremos para realizar los diferentes cálculos.

    ![cabecera](/Images/cabecera.png)


2. Luego tenemos las funciones definidas, estas son los menus y submenus que cree, como mencione en el análisis para evitar tener que reescribir, además de que esto permite que se pueda volver al menu con un "back" o "atrás". 

   ![Prototipos](/Images/Prototipos.png)
   ![Def](/Images/Definiciones.png)
Estos menus como se puede observar retornan un entero, que ingresa el usuario y es lo que usaremos en el switch que nos imprimirá el dato que pidamos.

3. Luego creamos el switch que nos imprimirá lo que pidamos, en este caso las estadisticas del texto, previamente calculadas. 
    ![switch](/Images/Switch.png)

4. Como se ve en la imagen anterior, ahí hacemos uso de la función que creamos, llamada submenu, esta función nos permite acceder a las opciones de estadísticas del texto, ya que en el primer menú, las opciones son las de vocales,  cambiar palabra, guardar cambios y ver las estadísticas del texto. 

5. Definir variables: 
Como no tenía del todo claro que variables usaría al inicio, fuí definiendolas a medida que las iba necesitando. Aquí una foto de las que usé.
  ![variables](/Images/Variables.png) 


### Variables
|Función|Variable|Tipo|Rol|
|---|------|----|---|
|Menu|Opciones|Entero| Entrada y salida
|Submenu|Opciones|Entero| Entrada y salida
|Main| Vocales (a, e, i, o, u)| Entero|Salida
Main| Espacios|Entero|Salida
Main| Lineas|Entero|Salida
Main|Caracteres|Entero|Salida 
Main| Palabras|Entero| Salida
Main| Texto|Entero| Salida
Main| Punt_archivo| Puntero FILE| Entrada
Main|Nom_archivo |Char| Entrada
Main|Minusculas|Char| Salida
Main|Text_str|Char| Entrada
Main|Palabra|Char| Entrada
Main| string_text|Char| Salida

### Diagramas
Código de la asesoría con el profe para el cuarto punto (Find&replace)
```
#include <string.h>
#include <stdio.h>

int main()
{
    char String[100000] = "Hola mundo, buenos dias ¿Como estan?";
    char string_remp[100] = "buenos dias";
    char str_con_remp[100000];
    char *punt, *punt2;
    int carac_NNC;
    
    punt2 = String;
    
    punt = strstr(String, string_remp);
    int carac_remp = strlen(string_remp);
    //printf("%d\n", carac_remp);
    //punt += carac_remp;
    //printf("%s\n", punt);
    carac_NNC = 0;
    while(punt2 <= punt){
        punt2++;   
        carac_NNC++;
    }
    //Caracteres no necesarios -1 es la cantidad que puedo usar para copiar en la cadena nueva.
    printf("%d\n", carac_NNC);  
    return 0;
    }
```
Y ya, es todo, no se guardó el diagrama que hice en la asesoría :(.