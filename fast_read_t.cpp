#include <cstdio>
#include <cmath>
#include <string>

#define getchar() (tt == ss && (tt = (ss = ln) + fread(ln, 1, 1 << 20, stdin), ss == tt) ? EOF : *ss++)
char ln[1 << 20], *ss = ln, *tt = ln;

using std::string;

inline int readInt(int *val)
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

inline int readLL(long long *val)
{
    long long x = 0;
    int f = 1;
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

inline int readFloat(float *val)
{
    float x = 0, f = 0;
    int F = 1;
    char ch = getchar();

    while (ch < '0' | ch > '9')
    {
        if (ch == '-') F = -1;
        if (ch == EOF) return -1;

        ch = getchar();
    }

    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }

    if (ch == '.')
    {
        int k = 1;
        ch = getchar();
        
        while (ch >= '0' && ch <= '9')
        {
            f += (ch - '0') / pow(10, k);
            ch = getchar();
            ++k;
        }
    }

    *val = (x + f) * F;

    return 0;
}

inline int readDouble(double *val)
{
    double x = 0, f = 0;
    int F = 1;
    char ch = getchar();

    while (ch < '0' | ch > '9')
    {
        if (ch == '-') F = -1;
        if (ch == EOF) return -1;

        ch = getchar();
    }

    while (ch >= '0' && ch <= '9')
    {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }

    if (ch == '.')
    {
        int k = 1;
        ch = getchar();
        
        while (ch >= '0' && ch <= '9')
        {
            f += (ch - '0') / pow(10, k);
            ch = getchar();
            ++k;
        }
    }

    *val = (x + f) * F;

    return 0;
}

inline int readChar(char *val)
{
    char ch = getchar();
    
    if (ch == EOF) return -1;
    *val = ch;
    
    return 0;
}

inline bool isBlank(char ch)
{
    return ch == ' ' || ch == '\r' || ch == '\n' || ch == '\t' || ch == EOF;
}

inline int readCharArray(char *val)
{
    int i = 0;
    char ch = getchar();
    
    while (isBlank(ch)) ch = getchar();
    if (ch == EOF) return -1;
    
    while (!isBlank(ch))
    {
        val[i++] = ch;
        ch = getchar();
    }
    val[i] = '\0';
    if (ch == EOF) return -1;
    
    return 0;
}

inline int readString(string &val)
{
    char ch = getchar();
    
    while (isBlank(ch)) ch = getchar();
    if (ch == EOF) return -1;
    
    while (!isBlank(ch))
    {
        val.push_back(ch);
        ch = getchar();
    }
    if (ch == EOF) return -1;
    
    return 0;
}

int main()
{
    return 0;
}
