#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int x1 = atoi(argv[3]);
    int y1 = atoi(argv[4]);

    int Xres = (x + x1);
    int Yres = (y + y1);
    
    printf("%d %d", Xres, Yres);

    return 0;
}

