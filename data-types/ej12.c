#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    double t = atof(argv[1]);
    double p = atof(argv[2]);
    double rporciento = atof(argv[3]);
    double r = rporciento/100;
    double resultado = p*exp(r*t);
    printf("%f", resultado);
    return 0;
}
