#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int plata = atoi(argv[1]);

    int plata1000 = (plata/1000);
    int platas  = (plata%1000);
    int plata500= (platas/500);
    platas  = (platas%500);
    int plata200= (platas/200);
    platas  = (platas%200);
    int plata100= (platas/100);
    platas  = (platas%100);   
    int plata50 = (platas/50);
    platas  = (platas%50);
    int plata20 = (platas/20);
    platas  = (platas%20);
    int plata10 = (platas/10);

    printf("1000:%d, 500:%d, 200:%d, 100:%d, 50:%d, 20:%d, 10:%d", plata1000, plata500, plata200, plata100, plata50, plata20, plata10);


    return 0;   
}
