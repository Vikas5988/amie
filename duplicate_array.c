#include<stdio.h>

int main()
{
int arr[50];
int i,j,k,size;

printf("Enter the size of array  ");
scanf("%d",&size);

for(i=1;i<=size;i++){
printf("Enter %d element of array  ",i);
scanf("%d",&arr[i]);
} 

printf("\n Original array \n");
for(i=1;i<=size;i++){
printf("%d ",arr[i]);
}

for(i=1;i<=size;i++)
{
    for(j=i+1;j<=size;j++)
    {
        if(arr[i]==arr[j])
        {
            for(k=j;k<=size;k++)
            {
                  arr[k]=arr[k+1];
            }
              size--;
                j--;
        }
    }

}

printf("  \n\n New Array \n");
for(i=1;i<=size;i++){
printf("%d ",arr[i]);

}
    return 0;
}