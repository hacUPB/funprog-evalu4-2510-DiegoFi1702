#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Array1[5];
    int Array2[5];
    int Array3[10];

    for(int i = 0; i < 5; i++)
    {
        printf("Escriba #\n");
        scanf("%d\n", &Array1[i]);
        printf("Escriba #\n");
        scanf("%d\n", &Array2[i]);
    }
    for(int J = 0; J < 5; J++)
    {
      printf("Array 1:%d\n", Array1[J]);
        printf("Array 2:%d\n", Array2[J]);
        
    }










    return 0;
}