#include <cstdio>
#include <cstring>

#define MAX_LEN 300
#define INF -10000000

int numbers[MAX_LEN];
int j;

void splitNum(int x)
{
    if (x > 9) splitNum(x / 10);

    numbers[j++] = x % 10;
}

int main()
{
    int x;

    for (int i = 0; i < MAX_LEN; i++) numbers[i] = INF;
    
    scanf("%d", &x); 
    splitNum(x);

    for (int i = 0; numbers[i] != INF; i++)
        printf("%d ", numbers[i]);
    putchar('\n');

    return 0;
}

