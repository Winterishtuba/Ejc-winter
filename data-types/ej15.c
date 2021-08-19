#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("%d %d\n", a , b);

    int temp = a;

    a = b;     
    b = temp;

    printf ("%d %d", a, b);

    return 0;
}
