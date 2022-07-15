#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for (int k = n; k > 0; --k)
    {
        for (int i = 0; i < n - k; i++) putchar(' ');
        for (int i = 0; i < 2 * k - 1; i++) putchar('#');
        putchar('\n');
    }

    return 0;
}

