#include <cstdio>

int main()
{
    int a, b, c, kase = 1;
    
    while (scanf("%d %d %d", &a, &b, &c) != EOF && a != 0 && b != 0 && c != 0)
    {
        int mer, rem, cnt = 1;
        
        mer = a / b; // 计算整数商
        rem = a % b; // 计算余数(余数商一定在0-1之间了!)
        
        printf("Case %d: %d.", kase, mer);
        // 循环不变量: 
        // 1. rem始终是上一步的余数
        // 2. mer始终是上一步的商
        // 运行到最后的时候: rem是最后一步的余数  mer是上一步的商
        for (; cnt <= c + 1; cnt++)
        {
            rem *= 10;

            if (cnt == c + 1)
            {
                if ((rem / b) >= 5) printf("%d", mer + 1);
                else printf("%d", mer);
                break;
            }

            mer = rem / b;
            if (cnt < c) printf("%d", mer);
            rem = rem % b;
        }
        putchar('\n');

        kase++;
    }

    return 0;
}

