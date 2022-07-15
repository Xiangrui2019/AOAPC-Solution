#include <cstdio>

#define MAX_N 100
int numbers[MAX_N];

int main()
{
    int x, n = 0;
    while (scanf("%d", &x) == 1)
        numbers[n++] = x;
    
    for (int k = n - 1; k >= 1; k--)
        printf("%d ", numbers[k]);
    printf("%d\n", numbers[0]);
    
    return 0;
}
