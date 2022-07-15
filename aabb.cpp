#include <cstdio>

int main()
{
    for (int i = 1; ; i++)
    {
        int m = i * i;
        if (m < 1000) continue;
        if (m > 9999) break;

        int hi = m / 100;
        int lo = m % 100;

        if (hi % 10 == hi / 10 && lo % 10 == lo /10)
            printf("%d\n", m);
    }

    return 0;
}

