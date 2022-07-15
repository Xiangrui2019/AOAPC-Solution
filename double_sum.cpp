#include <cstdio>

#define EPS 1e-13

int main()
{
    double i;
    for (i = 0; i - 10 < EPS; i += 0.1)
        printf("%.1f\n", i);

    return 0;
}
