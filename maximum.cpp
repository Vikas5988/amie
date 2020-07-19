#include<iostream>
using namespace std;
#define CHARBIT 8

int max(int x,int y)
{
//return x-((x-y)&((x-y)>>(sizeof(int)*CHARBIT - 1)));
return x-((x-y)&((x-y)>>(sizeof(int) - 1)));
}

int main()

{
int x,y;
//cout<<sizeof(int)<<endl;
cout<<"Enter the value of first number:   ";
cin>>x;
cout<<"Enter the value of second number:   ";
cin>>y;

cout<<"Maximum of given two number is "<<max(x,y);

return 0;


}