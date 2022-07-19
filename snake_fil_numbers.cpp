// 蛇形填数(左开右闭)
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
        /**
         * (0, x] 是已经填充数值的部分 (x, 停止位置) 是没有填写的部分
         * x+1是需要新填写的部分
         * **/
        while (x < n - 1 && !array[x + 1][y]) array[++x][y] = ++cnt;
        /**
         * (0, y) 是没有填写的部分 [y, y最开始的值 静止)
         * y-1是需要新填写的部分
         * **/
        while (y > 0 && !array[x][y - 1]) array[x][--y] = ++cnt;
        /**
         * (0, x) 是没有填写的部分 [x, x上次的值 静止)
         * x-1是需要填写的部分
         * **/
        while (x > 0 && !array[x - 1][y]) array[--x][y] = ++cnt;
        /**
         * (0, y] 是已经填充数值的部分 (y, 停止位置) 是没有填写的部分
         * y+1是需要新填写的部分
         * **/
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
