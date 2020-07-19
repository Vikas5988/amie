#include<stdio.h>

int main()
{
int n1,n2;

printf("Enter first number  :");
scanf("%d",&n1);

printf("Enter second number     :");
scanf("%d",&n2);

printf("Before Swapping a =  %d  and b =  %d  \n\n ",n1,n2);
//Swapping value

n1=n1+n2;
n2=n1-n2;
n1=n1-n2;

printf("After Swapping a =  %d  and b =  %d  ",n1,n2);

return 0;

}

