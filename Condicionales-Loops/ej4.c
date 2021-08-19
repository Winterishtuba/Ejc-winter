#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    int cnt = 0;

    while (cnt < n)
    {
        printf("hola mundo\n");
        cnt++;
    }
    
    return 0;
}

