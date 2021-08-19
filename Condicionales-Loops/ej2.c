#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char const *argv[])
{

    double a; 
    double b; 
    double c; 

    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);
    if (a == 0)
    {
        printf("error\n");
        return 0;
    }
    else if ((b * b - 4 * a * c) < 0)
    {
        printf("error\n");
        return 0;
    }
    double funcion =  ((b * -1) + sqrt(b * b - 4 * a * c)) / (2 * a);
    double funcion2 = ((b * -1) - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf( "%f %f", funcion, funcion2);
    return 0;
}
