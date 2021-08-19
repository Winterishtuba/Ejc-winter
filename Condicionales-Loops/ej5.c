#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);

    while (n > 1000 && n <= 1999);
    {
        printf("%d\n", n);
        n++;
    }

    return 0;
}
