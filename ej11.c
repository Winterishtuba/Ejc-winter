#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int day = atoi(argv[1]);
    int month =atoi(argv[2]);
    if (day > 31)
    {
        exit(0);
    }
    if (month == 2)
    {
        if (day > 29)
        {
            exit(0);
        }
    }
    if (month == 9)
    {
        if (day >30)
        {
            exit(0);
        }
    }
    if (month == 11)
    {
        if (day > 30)
        {
            exit(0);
        }
    }
    if (3 <= month && month <= 6)
    {
        if (3 == month)
        {
            if (20 > day)
            {
                printf("falso");
                exit(0);
            }
            printf("verdadero");
            exit(0);
        }
        if (month == 4)
        {
            if (day > 30)
            {
                exit(0);
            }
        }
        if (6 == month)
        {
            if (day > 30)
            {
                exit(0);
                printf("falso");
            }
            
            if (20 < day)
            {
                printf("falso");
                exit(0);
            }
            printf("verdadero");
            exit(0);
        }
        printf("verdadero");
            exit(0);
    }
    printf("falso");
    return 0;
}

