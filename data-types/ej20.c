#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    double sph = atoi(argv[1]);
    double htb = atoi(argv[2]);

    double salario = (sph * htb);

    printf ("%.2f", salario);
    return 0;
}





