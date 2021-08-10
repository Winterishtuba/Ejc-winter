#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int numsreqs= atoi(argv[1]);
    int i = 0;
    int sum = 0;
    int gna = 0;

    srand(time(NULL));
    while (i < numsreqs)
    {
        gna = rand()%101;
        printf("%d\n", gna);
        sum = sum + gna;
        i++;
    }
    double avg = sum/numsreqs;
    printf("average= %f", avg);
    return 0;
}
