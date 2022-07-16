#include <cstdio>
#include <cstring>

#define MAX_N 1005
bool lights[MAX_N];

int main()
{
    memset(lights, 0, sizeof(lights));
    int n, k;
    bool first = true;
    scanf("%d%d", &n, &k);

    // i: 人的编号
    for (int i = 1; i <= k; i++)
    {
        // j: 灯的编号
        for (int j = 1; j <= n; j++)
            if (j % i == 0) lights[j] = !lights[j];
    }

    for (int i = 0; i <= n; i++)
    {
        if (lights[i])
        {
            if (first) first = false;
            else putchar(' ');

            printf("%d", i);
        }
    }
    putchar('\n');

    return 0;
}
