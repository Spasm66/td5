#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

bool    stat_of_tab(int *tab, int l, int *min, int *max, int *moy)
{
    int low;
    int up;
    int av;

    low = INT_MAX;
    up = INT_MIN;
    av = 0;
    if (l < 1)
        return (false);
    for (int i = 0; i < l; i++)
    {
        if (tab[i] < low)
            low = tab[i];
        if (tab[i] > up)
            up = tab[i];
        av += tab[i];
    }
    *min = low;
    *max = up;
    *moy = av / l;
    return (true);
}

int main()
{
    int tab[] = {5, 1, 8, 9, 2};
    int min;
    int max;
    int moy;

    stat_of_tab(tab, 5, &min, &max, &moy);
    printf("%d\n%d\n%d\n", min, max, moy);
}