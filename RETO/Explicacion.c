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