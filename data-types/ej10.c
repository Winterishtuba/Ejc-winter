#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    double X0 = atof(argv[1]);
    double Vo = atof(argv[2]);
    double T = atof(argv[3]);
    double resultado = X0 + Vo * T + (9.807 * (T * T)) / 2;
    printf("%f", resultado);
    return 0;
}
