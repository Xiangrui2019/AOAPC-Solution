#include <cstdio>
#include <ctime>

#define getchar() (tt == ss && (tt = (ss = ln) + fread(ln, 1, 1 << 20, stdin), ss == tt) ? EOF : *ss++)
char ln[1 << 20], *ss = ln, *tt = ln;

int readInt(int *val)
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-') f = -1;
        if (ch == EOF) return -1;
        ch = getchar();
    }

    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }

    *val = x * f;

    return 0;
}

int main()
{
    int x;

    while (scanf("%d", &x) != EOF);
}

