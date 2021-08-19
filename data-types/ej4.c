#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]); 
    int b = atoi(argv[2]);
    if (a < 0 || b < 0) 
    {
        printf("no negativos");
        exit(0);
    }
    if (a % b == 0 || b % a == 0){
        printf("verdadero");
    }
    return 0; 
}
