#include <cstdio>

int main()
{
    int i = 0;
    double sum = 0, term = 1;

    do {
        term = 1. / (2.*i + 1.);
        
        if (i % 2 == 0) sum += term;
        else sum -= term;
        
        ++i;
    } while (term >= 1e-6);

    printf("%.6f\n", sum);

    return 0;
}

