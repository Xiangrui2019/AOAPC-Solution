#include <cstdio>

// a/b 取m位余数
// 读取多组数据
// 0 为结束
int main()
{
    int a, b, m, kase = 1;

    freopen("sim_div.in", "r", stdin);
    freopen("sim_div.out", "w", stdout);

    while (scanf("%d%d%d", &a, &b, &m) != EOF && a != 0 && b != 0 && m != 0) {
        int cnt = 0, d, y, flag = 0;
        d = a / b; // 整数商
        y = a % b; // 剩余的小数部分
        printf("Case %d: %d.", kase, d);
        
        while (cnt <= m) {
            y *= 10;
            
            if (cnt == m) {
                if ((y / b) >= 5) flag++;
                printf("%d", flag);
            }
            
            if (cnt + 1 < m) printf("%d", y / b);
            else flag = y / b;
            y = y % b;

            cnt++;
        }
        putchar('\n');
        
        kase++;
    }
    
    return 0;
}

