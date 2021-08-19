#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double x = atof(argv[1]);
    double y = atof(argv[2]);    
    double x1 = atof(argv[3]);
    double y1= atof(argv[4]);    

    double cordx = x * x1; 
    double cordy = y * y1;

    printf("%f %f", cordx, cordy);

    return 0;
}   

