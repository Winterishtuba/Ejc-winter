#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);

    srand(time(NULL));
    int randnum = rand()%100;

    if (n == randnum)
    {
     printf("%d ganaste!", randnum);
     return 0;
    }
    else
    {
     printf("%d perdiste", randnum);
     return 0;
    }

    return 0;
}
