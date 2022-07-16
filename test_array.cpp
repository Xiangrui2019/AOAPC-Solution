#include <cstdio>
#include <cstring>

#define MAX_N 10
int array[MAX_N];
int b[MAX_N];

int main()
{
    memset(array, 5, sizeof(array));
    memset(b, 0, sizeof(b));

    memcpy(b, array, sizeof(int) * 10);

    for (int i = 0; i < MAX_N; i++) printf("%d ", array[i]);
    putchar('\n');

    for (int i = 0; i < MAX_N; i++) printf("%d ", b[i]);
    putchar('\n');

    return 0;
}