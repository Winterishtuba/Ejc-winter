#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int gna = rand()%80 + 1;
    if (gna <= 10)
    {
        printf("1");
    }
    if (gna <= 20 && gna > 10)
    {
        printf("2");
    }
    if (gna <= 30 && gna > 20)
    {
        printf("3");
    }
    if (gna <= 40 && gna > 30)
    {
        printf("4");
    }
    if (gna <= 50 && gna > 40)
    {
        printf("5");
    }
    if (gna <= 80 && gna > 50)
    {
        printf ("6");
    }
    return 0;
}
