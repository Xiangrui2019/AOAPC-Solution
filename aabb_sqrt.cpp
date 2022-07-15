#include <cstdio>
#include <cmath>

int main()
{
    for (int i = 1; i <= 9; i++)
        for (int j = 0; j <= 9; j++)
        {
            int n = 1100 * i + 11 * j;
            int m = floor(sqrt(n) + 0.5);

            if (m * m == n) printf("%d\n", n);
        }

    return 0;
}

