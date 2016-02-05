#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,arr[100],t=0;
  char arr1[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
    t++;
   }
   printf("length of integer array=%d",t); 
   return 0;
 }
