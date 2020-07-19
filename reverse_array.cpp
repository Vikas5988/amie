#include<iostream>
using namespace std;

int main()
{
int array[10];

 cout<<"Enter 10 numbers"<<" ";
for(int i=0;i<10;i++){
      cin>>array[i];
}



//Reverse Array
cout<<"Reverse of given numbers is "<<endl;
for(int j=9;j>=0;j--){
cout<<array[j]<<" ";
}

    return 0;
}