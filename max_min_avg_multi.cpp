#include <cstdio>

int main()
{
    int val, n, kase = 1;

    freopen("./max_min_avg.in", "r", stdin);
    freopen("./max_min_avg.out", "w", stdout);

    while (scanf("%d", &n) == 1 && n != 0)
    {
        int max_s, min_s, sum = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &val);

            if (i == 0) max_s = min_s = val;
            if (val > max_s) max_s = val;
            if (val < min_s) min_s = val;
            sum += val;
        }
        if (kase > 1) printf("\n");

        printf("Case %d: %d %d %.3f\n", kase, min_s, max_s, (double) sum / n);
        kase++;
    }

    return 0;
}

