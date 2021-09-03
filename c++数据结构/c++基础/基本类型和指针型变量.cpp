# include <iostream>
using namespace std;

int main()
{
    int a;
    int b = 10;
    a = 11;
    cout<<"a:"<<a;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"endl的意思是换行，相当于c语言中的/n"<<endl;
    cout<<"cout 的意思是打印输出在控制台，相当于c语言中的printf函数"<<endl;
    cout<<"<<符号用来分隔字符串与变量"<<endl;


    int *p1 = &a;
    cout<<"*p1:"<<*p1<<endl;
    *p1 = *p1 + 1;
    cout<<"a:"<<a<<endl;
    
    p1 = NULL;
    cout<<"p1:"<<p1<<endl;
    return 0;
}
