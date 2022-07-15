#include<cstdio>//万能头
#include <set>
using namespace std;

void fj(int x,set<int>&s);//函数声明

int main(){
    for(int x=123;x<=333;x++)
    {
        set<int>s;
        fj(x,s);fj(2*x,s);fj(3*x,s);//分解
        if(s.size()==9)//判断 set函数，返回集合元素个数
            printf("%d\n",x);
    }
    return 0;
}
void fj(int x,set<int>&s)
{
    while(x)//当x不为0时，循环，存入x每一位的数字到set中
    {
        if(x%10==0) return ;
        s.insert(x%10);//set函数，存入元素
        x/=10;
    }
}
