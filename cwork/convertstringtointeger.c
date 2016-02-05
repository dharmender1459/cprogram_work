#include<stdio.h>
#include<stdlib.h>
int main()
  {
   int i,n;
   char arr[100];
   scanf("%d",&n);
    for(i=0;i<n;i++)
     {
      scanf("%s",&arr[i]);
      }
   i = atoi(arr);
   printf("The value entered is %d",i);
   return 0;
} 
