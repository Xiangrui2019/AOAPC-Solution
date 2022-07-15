#include <cstdio>
#include <ctime>

#define MOD 1000000
typedef long long ll;

int main()
{
    int n;
    ll S = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        ll factoral = 1;
        for (int j = 1; j <= i; j++)
        {
            factoral = (j * factoral) % MOD;
        }

        S = (S + factoral) % MOD;
    }

    printf("%lld\n", S);
    printf("------- %f", (double) clock() / CLOCKS_PER_SEC);

    return 0;
}

