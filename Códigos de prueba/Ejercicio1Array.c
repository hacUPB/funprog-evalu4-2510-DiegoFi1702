#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 11;
        printf("%d\n", array[i]);
    }

    return 0;
}