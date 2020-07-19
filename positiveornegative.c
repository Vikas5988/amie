#include<stdio.h>

int numcheck(int n){
return 1+(n>>31)-(-n>>31);
}

int main()
{
int input,result;

printf("Enter a interger number \n");
scanf("%d",&input);
result = numcheck(input);
if(result==0)
    printf("%d is a negative number ",input);
else if(result==2)
    printf("%d is a positive number. ", input);
else
printf("You have entered 0(zero)");

return 0;
}