#include<stdio.h>
void main()
{
int arr[10];
int i,n,sum=0;
int *ptr;
printf("\n\n using pointers sum of all the elements in an array\n");
printf("input the number of elements in the array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("elments %d: ",i+1);
scanf("%d",&arr[i]);
}
ptr=arr;
for(i=0;i<n;i++)
{
sum=sum+*ptr;
ptr++;
}
printf("the sum of array is %d \n\n",sum);
return;
}
