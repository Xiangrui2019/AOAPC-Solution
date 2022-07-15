#include <cstdio>
#include <cmath>

#define THRSHOLD 1E-128

int main()
{
    for (int i = 1; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            int n = i * 1100 + j * 11;
            double m = sqrt(n);

            if (m * m - n <= THRSHOLD) printf("%d\n", n);
        }

    return 0;
}

