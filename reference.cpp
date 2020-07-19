#include<iostream>
using namespace std;

void swap(int& first,int& second)
{

int temp;
temp=first;
first=second;
second=temp;
}
int main()

{
    int x=10;
    int y= 20;

cout<<" before swapping x =  "<<x<<" and y =  " <<y<<endl;

  swap(x,y);
  
cout<<" after swapping  x =   "<<x<<" and y =  " <<y<<endl;    


    return 0;

}