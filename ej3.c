#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double a = atof(argv[1]);
    double arad = (a * M_PI ) /180;
    double resultado = cos(arad) * cos(arad) + sin(arad) * sin(arad);
    printf("el resultado es %f\n", resultado);
    return 0;
}









