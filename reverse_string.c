// C program to reverse a string using recursion 
# include <stdio.h> 
//#include<string.h>


/* Function to print reverse of the passed string */
char *reverse(char *str) 
{ 
  static int i=0;
  static char rev[100];
  
if (*str) 
{ 
	reverse(str+1); 
	rev[i++]= *str; 
} 
  
  return rev;
} 

/* Driver program to test above function */
int main() 
{ 
  char *rev;
//char a[100] = "Geeks for 545454Geeks"; 
  char input[100];
  
  printf("Enter a string ");
  //scanf("%s",input);
  gets(input);
  
   printf("  %s \n",input);
rev = reverse(input); 
   printf(" Reverse of string is  \n %s",rev);
 
return 0; 
} 