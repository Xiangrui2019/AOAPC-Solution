#include <cstdio>

int main()
{
    int n, m, kase = 1;

    freopen("subseq.in", "r", stdin);
    freopen("subseq.out", "w", stdout);

    while (scanf("%d%d", &n, &m) != EOF && n != 0 && m != 0)
    {
        double sum = 0, term;

        for (int k = 0; n + k <= m; k++)
        {
            term = 1. / (n + k) / (n + k); // 注意较大的(n+k)^2可能会溢出，拆成/(n+k)/(n+k)的形式更加安全
            sum += term;
        }

        printf("Case %d: %.5f\n", kase, sum);
        kase++;
    }

    return 0;
}

