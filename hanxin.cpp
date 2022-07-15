#include <cstdio>

int main()
{
    int a, b, c, kase = 1;

    freopen("hanxin.in", "r", stdin);
    freopen("hanxin.out", "w", stdout);

    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        int n = 10;

        while (n <= 100)
        {
            if (n % 3 == a && n % 5 == b && n % 7 == c)
            {
                printf("Case %d: %d\n", kase, n);
                break;
            }
            else n++;

            if (n > 100) printf("Case %d: No answer\n", kase);
        }
        kase++;
    }

    return 0;
}

