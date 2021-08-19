#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    
    int dias = atoi(argv[1]);
    int idias;
    int iddias;

    int anios = (int)(dias / 365);
    idias = (dias%365);
    int meses = (idias / 30);
    idias = (idias%30);
    int semanas = (idias / 7);
    idias = (idias % 7);    
    


    printf("%d anios, %d semanas, %d dias", anios, semanas, idias);

    return 0;
}
