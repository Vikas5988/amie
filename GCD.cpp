#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int num1,num2;

cout<<"Enter first number  ";
cin>>num1;

cout<<"Enter second number  ";
cin>>num2;

while(num1!=num2)
{
if(num1>num2)
    num1=num1-num2;
else
    num2=num2-num1;
}

if(num1==num2)
    cout<<"The GCD of two given number is "<<num1<<endl;

getch ();
}