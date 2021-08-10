#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int a = rand() % 6 + 1;
    int b = rand() % 6 + 1;
    int suma = a + b;
    printf("%d", suma);
    return 0;
}















