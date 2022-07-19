#include <cstdio>
#include <cmath>
#include <string>
#include <iostream>

#define THRESHOLD 1E-8

using std::string;

char buf[10000000], pbuf[10000000], *p = pbuf, *s = buf, *t = buf;
#define putchar(ch) (p - pbuf == 10000000 ? fwrite(pbuf, 1, 10000000, stdout), p = pbuf, *p++ = ch : *p++ = ch)

void printInt(int x)
{
    if (x < 0) putchar('-');
    x = abs(x);
    
    if (x > 9) printInt(x / 10);
    putchar(x % 10 + '0'); // 输出最高位数字(base case)
}

void printLL(long long x)
{
    if (x < 0) putchar('-');
    x = abs(x);
    
    if (x > 9) printLL(x / 10);
    putchar(x % 10 + '0'); // 输出最高位数字(base case)
}

void printFloatIRec(long long x, int d, bool pure_int)
{
    if (x > 9) printFloatIRec(x / 10, d - 1, pure_int);
    if (d == 1 && pure_int == false) putchar('.');
    putchar(x % 10 + '0'); // 输出最高位数字
}

void printFloat(float x)
{
    int d = 0;
    
    if (x < 0) putchar('-');
    x = abs(x);
    
    while (x - (long long)x > THRESHOLD)
    {
        x *= 10;
        d++;
    }
    
    printFloatIRec((long long) x, d, d == 0);
}

void printFloat(float x, int d)
{
    if (x < 0) putchar('-');
    x = abs(x);
    
    for (int i = d; i > 0; i--) x *= 10;
    
    printFloatIRec((long long) x, d, d == 0);
}

void printDoubleIRec(long long x, int d, bool pure_int)
{
    if (x > 9) printDoubleIRec(x / 10, d - 1, pure_int);
    if (d == 1 && pure_int == false) putchar('.');
    putchar(x % 10 + '0'); // 输出最高位数字
}

void printDouble(double x)
{
    int d = 0;
    
    if (x < 0) putchar('-');
    x = abs(x);
    
    while (x - (long long) x > THRESHOLD)
    {
        x *= 10;
        d++;
    }
    
    printDoubleIRec((long long) x, d, d == 0);
}

void printDouble(double x, int d)
{
    if (x < 0) putchar('-');
    x = abs(x);
    
    for (int i = d; i > 0; i--) x *= 10;
    
    printDoubleIRec((long long) x, d, d == 0);
}

void printChar(char x)
{
    putchar(x);
}

void printCharArray(char *x)
{
    for (int i = 0; x[i] != '\0'; i++)
        putchar(x[i]);
}

void printString(string& x)
{
    for (int i = 0; x[i] != '\0'; i++)
        putchar(x[i]);
}

int main()
{
    return 0;
}
