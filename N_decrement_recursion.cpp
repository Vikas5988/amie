#include<iostream>
using namespace std;

int decrement(int n)
{
if(n==0)
return 0;

cout<<n<<"  ";

return decrement(n-1);

}

int main()
{
int N;
cout<<"Enter a number   ";
cin>>N;
cout<<"Output is ";
cout<<decrement(N);
return 0;

}