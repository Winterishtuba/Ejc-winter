#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);

    if ((x > y && y > z) || (x < y && y < z))
    {
        printf("verdadero\n");
        return 0;
    }
    else{
        printf("falso\n");
        return 0;
    }
    return 0;
}
