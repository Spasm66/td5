#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

bool    minmax1(int *tab, int l, int *min, int *max)
{
    int low;
    int up;

    low = INT_MAX;
    up = INT_MIN;
    if (l < 1)
        return (false);
    for (int i = 0; i < l; i++)
    {
        if (tab[i] < low)
            low = tab[i];
        if (tab[i] > up)
            up = tab[i];
    }
    *min = low;
    *max = up;
    return (true);
}

bool    minmax2(int *tab, int l, int *borne)
{
    int low;
    int up;

    low = INT_MAX;
    up = INT_MIN;
    if (l < 1)
        return (false);
    for (int i = 0; i < l; i++)
    {
        if (tab[i] < low)
            low = tab[i];
        if (tab[i] > up)
            up = tab[i];
    }
    borne[0] = low;
    borne[1] = up;
    return (true);
}

int main()
{
    int tab[] = {5, 1, 8, 9, 2};
    int min;
    int max;
    int borne[2];

    minmax1(tab, 5, &min, &max);
    minmax2(tab, 5, borne);
    printf("%d\n%d\n", min, max);
    printf("%d\n%d\n", borne[0], borne[1]);
}