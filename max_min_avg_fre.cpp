#include <cstdio>

int main()
{
    int max_s, min_s, val, cnt = 0, sum = 0;

    freopen("./max_min_avg.in", "r", stdin);
    freopen("./max_min_avg.out", "w", stdout);

    while (scanf("%d", &val) == 1)
    {
        if (cnt == 0) max_s = min_s = val;
        
        sum += val;
        if (val > max_s) max_s = val;
        if (val < min_s) min_s = val;
        
        cnt++;
    }

    printf("%d %d %.3f\n", max_s, min_s, (double) sum / cnt);

    return 0;
}

