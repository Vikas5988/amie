#include<stdio.h>


int main()
{
int input,remainder,reverse=0;

printf("Enter a  number  ");
scanf("%d",&input);

while(input!=0){
    remainder = input%10;
    reverse =  10*reverse + remainder;
    input = input/10;
}

printf("Reverse of the given number is %d  ",reverse);



return 0;
}