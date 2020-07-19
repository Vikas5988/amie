#include<stdio.h>

int main()
{
int n;
float sum = 0.0;
int i;

printf("Enter the value of n  \n");
scanf("%d",&n);

for( i=1;i<=n;i++)
{
  if(n==1){
  sum=sum+1;
  continue;
}
if(i%2==1)
sum= sum+1/(float)i;
if(i%2==0)
sum=sum-1/(float)i;
}

printf(" Result  is %f ",(sum+1/2));
    return 0;

}