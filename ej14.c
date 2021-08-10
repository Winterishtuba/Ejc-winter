#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main(int argc, char const *argv[])
{
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int n3 = atoi(argv[3]);
    if (n1 == n2 && n2 == n3)
    {
        printf("Iguales");
    }
    printf("no iguales");
    return 0;
}
