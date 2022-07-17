#include <cstdio>
#include <cstring>

#define MAX_N 15
int array[MAX_N][MAX_N];

int main()
{
    memset(array, 0, sizeof(array));
    int n, x, y, cnt = 1;
    scanf("%d", &n);
    x = 0, y = n - 1; // 放置填充的初始位置
    array[x][y] = 1;

    // (x, y)上一个填写的坐标
    while (cnt < n * n)
    {
        // 向下填充
        while (x < n - 1 && !array[x + 1][y]) array[++x][y] = ++cnt;
        // 向左填充
        while (y > 0 && !array[x][y - 1]) array[x][--y] = ++cnt;
        // 向上填充
        while (x > 0 && !array[x - 1][y]) array[--x][y] = ++cnt;
        // 向右填充
        while (y < n - 1 && !array[x][y + 1]) array[x][++y] = ++cnt;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", array[i][j]);
        putchar('\n');
    }

    return 0;
}
