#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int imp = atoi(argv[1]);
    int contador; 
    while (contador == imp)
    {
        printf("hola mundo");
        contador++;
    }
    return 0;
}
