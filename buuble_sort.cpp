#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
}
 void bubble_sort(int array[], int n)
 {
     int i,j;

     for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        if(array[j]>array[j+1])
        swap(&array[j],&array[j+1]);
     }
 }

int main()
{
int bubble_array[10]={12,2,34,3,66,43,67,44,55,29};
cout<<"Original order of array is ";
for(int i=0;i<10;i++){
cout<<bubble_array[i]<<" ";
}
cout<<endl;

bubble_sort(bubble_array,10);

cout<<"Sorted array is ";

for(int i=0;i<10;i++){
cout<<bubble_array[i]<<" ";
}


return 0;
}