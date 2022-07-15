#include <cstdio>

void exch(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) exch(&a, &b);
    if (a > c) exch(&a, &c);
    if (b > c) exch(&b, &c);

    printf("%d %d %d\n", a, b, c);

    return 0;
}

