#include <cstdio>

#define INF 10000000

int main()
{
    int max_s = -INF, min_s = INF, val, cnt = 0, sum = 0;

    while (scanf("%d", &val) == 1)
    {
        sum += val;
        if (val > max_s) max_s = val;
        if (val < min_s) min_s = val;
        
        cnt++;
    }

    printf("%d %d %.3f\n", max_s, min_s, (double) sum / cnt);

    return 0;
}

