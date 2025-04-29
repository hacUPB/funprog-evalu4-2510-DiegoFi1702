#include <stdio.h>
#include <stdlib.h>

void func(void);

int main(void){
func();
func();
func();
func();

}

void func(void){
int contador = 0;
contador++; 
printf("Contador = %d\n", contador);
}