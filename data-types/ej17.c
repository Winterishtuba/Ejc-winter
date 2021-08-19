#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double x  = atof(argv[1]);
    double y  = atof(argv[2]);
    double z  = atof(argv[3]);
    double x1 = atof(argv[4]);
    double y1 = atof(argv[5]);
    double z1 = atof(argv[6]);

    double Xres = (y * z1) + (z * y1) ;
    double Yres = (z * x1) + (x * z1) ;
    double Zres = (x * y1) + (y * x1) ;

    printf("%f %f %f", Xres, Yres, Zres);

    return 0;
}











