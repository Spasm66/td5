#include <stdio.h>
#include <stdlib.h>
#define ALLRIGHT 1

int pgcd_pccm(int a, int b, int *pgcd, int *ppcm)
{
    int temp_a;
    int temp_b;

    temp_a = a;
    temp_b = b;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    *pgcd = a;
    *ppcm = temp_a * temp_b / (*pgcd); 
    return(ALLRIGHT);
}

int main()
{
    int pgcd;
    int ppcm;

    pgcd_pccm(4, 6, &pgcd, &ppcm);
    printf("%d\n%d\n", pgcd, ppcm);
}