#include <stdio.h>

int main(void)
{
    int line1 = 995;    
    int line2 = 996;
    int line3 = 997;
    int line4 = 998;
    int line5 = 999;
    while (line5 <=1999)
    {
        line1 = line1 + 5;    
        line2 = line2 + 5;
        line3 = line3 + 5;
        line4 = line4 + 5;
        line5 = line5 + 5;
        printf("%d\t%d\t%d\t%d\t%d\n", line1, line2, line3, line4, line5);
    }
    printf("1996\t1997\t1998\n");
    return 0;
}
