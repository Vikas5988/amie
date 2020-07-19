
#include <iostream>
//#include<conio.h>
using namespace std;

int main()
{
int num;

cout<<"Enter the number "<<endl;
cin>>num;

if((num&1)==0)
cout<<num<<" is an even number.";
else
cout<<num<<" is a odd number."<<endl;

return 0;
}