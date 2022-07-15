#include <cstdio>

int main()
{
    long long n; // 输入数据
    int i; // 变换次数
    scanf("%lld", &n);

    while (n != 1)
    {
        if (n % 2 != 0) n = 3 * n + 1;
        else n /= 2;
        i++;
    }

    printf("%d\n", i);

    return 0;
}

