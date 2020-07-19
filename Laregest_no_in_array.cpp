#include<iostream>

using namespace std;

int main()
{

int Array[10];

for(int i=0;i<10;i++){
cout<<"Enter "<<i+1<<"th element of the array  ";
cin>>Array[i];
}

int largest=Array[0];

for(int i=0;i<10;i++)
{
if(largest < Array[i])
largest=Array[i];
}

cout<<"Largest number in given array is "<<largest<<endl;

    return 0;
}