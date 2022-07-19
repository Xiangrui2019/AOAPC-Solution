// 蛇形填数(左闭右开)
#include <cstdio>
#include <cstring>

#define MAX_N 15
int array[MAX_N][MAX_N];

int main()
{
    memset(array, 0, sizeof(array));
    int n;
    scanf("%d", &n);
    int start_x = 0, start_y = n - 1, x, y, cnt = 1;
    int loop = n / 2, offset = 1;

    // (x, y)为当前需要填写的坐标
    while (loop--)
    {
        /**
        *  向下填写
        *  [start_x, x) 为已经填写的部分 [x, n - offset) 未填写部分
        *  最终我们将会[start_x, n - offset)填写完
        */
        for (x = start_x; x < n - offset; x++) array[x][start_y] = cnt++;

        /**
        *  向左填写
        *  (y, start_y] 是已经填写的部分 [offset - 1, y] 未填写部分
        *  最终我们将会(offset, start_y]填写完
        */
        for (y = start_y; y > offset - 1; y--) array[x][y] = cnt++;

        /**
        *  向上填写
        *  (x, 进入循环之前的x] 是已经填写的部分 (offset - 1, x] 是未填写部分
        *  最终我们将会(offset, 进入循环前的x]填写完
        */
        for (; x > offset - 1; x--) array[x][y] = cnt++;

        /**
        *  向右填写
        *  [进入循环之前的y, y) 为已经填写的部分 [y, start_y) 未填写部分
        *  最终我们将会(start_y, 进入循环前的y]填写完
        */
        for (; y < start_y; y++) array[x][y] = cnt++;

        // 缩圈
        // 改开始位置
        start_x += 1;
        start_y -= 1;
        // 缩小循环范围
        offset += 1;
    }

    if (n % 2 != 0) array[n / 2][n / 2] = cnt;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", array[i][j]);
        putchar('\n');
    }

    return 0;
}
