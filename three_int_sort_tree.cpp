#include <cstdio>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // left
    if (a <= b && b <= c) printf("%d %d %d", a, b, c);
    if (a <= b && b > c && a <= c) printf("%d %d %d", a, c, b);
    if (a <= b && b > c && a > c) printf("%d %d %d", c, a, b);
    // right
    if (a > b && a <= c) printf("%d %d %d", b, a, c);
    if (a > b && a > c && b <= c) printf("%d %d %d", b, c, a);
    if (a > b && a > c && b > c) printf("%d %d %d", c, b, a);

    return 0;
}

