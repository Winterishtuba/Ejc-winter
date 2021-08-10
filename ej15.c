#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(int argc, char const *argv[])
{
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]); 
    if (a == 0)
    {
        printf("no se puede dividir por cero");
        exit(0);
    }

    double discriminante = (b*b)+(-4*a*c);
    if (discriminante < 0)
    {
        printf ("la equacion no tiene solucion");
        exit(0);
    }
    double r1 = (-b + sqrt(discriminante)) /(2*a);
    printf("raiz 1 = %f\n",r1);
    double r2 = (-b - sqrt(discriminante)) /(2*a);
    printf("raiz 2 = %f\n",r2);
    return 0;
}
