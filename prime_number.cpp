#include <iostream>
using namespace std;

// int isPrime(int n)
// {
//      int i=2;
//      if (n<=1)
//      return 0;
// for (i;i<n;i++)
// if(n%i==0)
// {
// return 0;
// break;
// }
// return 1;
//  }
 
int main()
{

int num,i=2;
//short a=0,b=1;
//cout<<a<<endl;
cout<<"Enter a number "<<endl;
cin>>num;
//result=isPrime(num);

for (i;i<num;i++)
if(num%i==0){
  cout<<"0";
   break;
}

 if(i==num)
 {
 cout<<"1"<<endl;
 }

if(num<=1)
cout<<"0"<<endl;
  
return 0;
}