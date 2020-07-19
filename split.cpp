#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int num,remainder,count=0;
cout<<"Enter a number  ";
cin>>num;

if(num==0)
count=1;

while(num!=0){
    num=num/10;
    count++;
}
cout<<"The number of digit in given number is  "<<count;
  return 0;
}