#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double a = atof(argv[1]);
    double T = (a * M_PI ) /180;
    double resultado = sin(2 * T) + sin(3 * T);
    printf("el resultado es %f\n", resultado);
    return 0;
}