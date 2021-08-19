#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    if (a >= b + c || b >= a+c || c >= b + a) 
    {
        printf("falso\n");
    }
    if (!(a >= b + c) && !(b >= a+c) && !(c >= b + a)) 
    {
        printf("verdadero\n");
    }
    return 0;
}
