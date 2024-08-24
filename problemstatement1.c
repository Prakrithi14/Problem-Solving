Given array of numbers starting with index position 0.The element in each position indicates the number of steps.Write a program to check whether if there is exact number of step print true else print false.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int index=0,n,i,a[5];
   printf("enter number of elements in array:");
  scanf("%d",&n);
  printf("enter array:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 while(a[index]<n-1)
{
 if(a[index]==0)
break;
index=index+a[index];
}
if(index==n-1)
{
printf("true");
}
else
{
printf("false");
}
}
