#include<iostream>

using namespace std;

int main()
{
int n=4;
double sum = 0.0;
int i;

for( i=1;i<=n;i++)
{
    if(n==1){
    sum=sum+1;
    continue;
    }
if(i%2==1)
sum = sum+(1/double(i));
if(i%2==0)
sum = sum-(1/double(i));
}

cout<<sum;

    return 0;

}