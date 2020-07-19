#include<iostream>
using namespace std;

void func1(int x,int y)
{
    cout<<"The value of a in func1 is "<<x<<endl;
     cout<<"The value of b in func1  is "<<y<<endl;
}

void func2(int *c,int *d)
{
    cout<<"The value of m with pointer is "<<*c<<endl;
    *c=*c+1;
    cout<<"The value of n with pointer is "<<*d<<endl;
    *d=*d+1;
    
}

int main()
{
int a=10,b=20;
int m=30,n=40;

func1(a,b);

cout<<"The value of a  and b after func1 execution is "<<a<<" "<<b<<endl;

func2(&m,&n);

cout<<"The value of m after func2 execution is "<<m<<endl;
cout<<"The value of n after func2 execution is "<<n<<endl;

return 0;
}


