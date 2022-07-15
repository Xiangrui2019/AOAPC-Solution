#include <cstdio>
#include <cmath>
#include <string>

using std::string;

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

int readLL(long long *val)
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

int readFloat(float *val)
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

int readDouble(double *val)
{

}

int readChar(char *val)
{

}

int readCharArray(char *val)
{

}

int readString(string &val)
{

}

int main()
{
    float sum;

    readFloat(&sum);

    printf("%f\n", sum);

    return 0;
}

