#include <cstdio>
#include <cmath>

int main()
{
    for (int i = 1; i <= 9; i++)
        for (int j = 0; j <= 9; j++)
            for (int k = 0; k <= 9; k++)
            {
                int m = i * 100 + j * 10 + k;
                int t = pow(i, 3) + pow(j, 3) + pow(k, 3);

                if (m == t) printf("%d\n", m);
            }

    return 0;
}

