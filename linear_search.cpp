#include<iostream>
using namespace std;

int main()
{
int array[10]={10,20,30,40,880,60,70,80,90,100};
int input,found=0,location;

cout<<"Enter a number to check in array"<<endl;
cin>>input;

for(int i=0;i<10;i++)
{
    if(array[i]==input)  
    { 
        found=1;
        location=i;
               break;
    }  
}

if(found==1)
cout<<"Number is present in array at index "<<location;
else 
cout<<"Number is not present in array"<<endl;


return 0;
}