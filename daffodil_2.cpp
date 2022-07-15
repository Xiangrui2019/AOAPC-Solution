#include <cstdio>
#include <cmath>

int main()
{
    for (int i = 100; i <= 999; i++)
    {
        int C = i % 10;
        int B = (i / 10) % 10;
        int A = i / 100;

        int m = pow(A, 3) + pow(B, 3) + pow(C, 3);

        if (m == i) printf("%d\n", i);
    }

    return 0;
}

