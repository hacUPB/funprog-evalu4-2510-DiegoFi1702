## Definición:
Grupo de datos estructurados que son almacenados en algún medio que pueden ser usados por las aplicaciones.
Hay 2 tipos, archivos de texto y archivos binarios.

#### Archivo de texto
Secuencia de carácteres organizadas en lineas terminadas por un caracter de nueva linea (\n).
Son planos, todas las letras tienen el mismo formato.

### Archivo binario
Es una secuencia de bytes que contiene información de cualquier tipo, codificada en binario para el propósito de almacenamiento y procesamiento en ordenadores.
Ejecutables, compilados, etc. 

Las funciones están en <stdio.h>

### Puntero a un archivo
Declaro un puntero tipo "FILE" el cual estará en <stdio.h>

FILE *archivo;

La función fopen() abre una secuencia para que pueda ser utilizada y la asocia con un archivo.
#### Prototipo:
FILE *fopen (const char *nombreAr, cons char *modo)

### Modos  
1. "r" se abre un archivo solo para lectura.
2. "w" Se abre solo para esccritura. Si el archivo ya existe, el apuntador se coloca al inicio y sobreescribe, destruyendo el archivo anterior.
3. "a" se abre para agregar nuevos datos al final, si el archivo no existe, crea uno nuevo.
4. "r+" se abre un archivo para realizar modificaciones. Permite leer y escribir. El archivo tiene que existir.
6. "w+" Se abre un archivo para leer y escribir. Si el archivo existe, el apuntador se coloca al inicio, sobreescribe y destruye el archivo anterior. 
5. "a+" Se abre un archivo para lectura y para incorporar nuevos datos al final, si el archivo no existe se crea uno nuevo.
