#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int upper = atoi(argv[1]);
    int lower = atoi(argv[2]);
    if (lower > upper)
    {
        lower = atoi(argv[1]);
        upper = atoi(argv[2]);
    }
    int rng = (rand() % (upper - lower + 1)) + lower;
    printf("%d", rng);
    return 0;
}

