#include<stdio.h>

int factorial(int n){
int c;
int result =1;
for(c=1;c<=n;c++)
result= result*c;
return result ;

}

int main()
{
 int i,c,n=8;

 for(i=0;i<8;i++)
 {
     for (c=0;c<=(n-i-2);c++)
    printf(" ");
    for(c=0;c<=i;c++)
    printf("%d ", factorial(i)/(factorial(c)*factorial(i-c)));
    printf("\n");
 }
  return 0;
}