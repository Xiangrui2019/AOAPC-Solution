#include <cstdio>
#include <cmath>

#define MAX_N 10000

int main()
{
    int m, n, r, p; // m: 数字    n: 数字位数
    int res[MAX_N];
    scanf("%d %d", &m, &n);
    r = m;

    for (int i = n; i > 0; i--)
    {
        p = pow(10, i - 1);
        res[n - i] = r / p;
        r = r % p;
    }

    for (int i = 0; i < n; i++) printf("%d ", res[i]);
    printf("\n");

    return 0;
}

