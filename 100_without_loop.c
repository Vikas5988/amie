#include<stdio.h>
#define N 100

void print(int n){

    if(n<=0)
    return;
//     printf(" %d ",n);
    print(n-1);
    
   printf(" %d ",n);
}


int main()
{

    print(N);

    return 0;
}