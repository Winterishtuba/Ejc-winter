#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]); 
    int y = atoi(argv[2]);
    int pitagoras = (x * x + y * y);
    double lol = sqrt(pitagoras);
    printf("%f", lol);
    return 0;
}
