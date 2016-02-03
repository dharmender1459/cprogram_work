#include<stdio.h>
int main()
 {
  int i,j,n=123,arr[100],mod;
  char arr1[100];
  while(n>0)
  {
   mod=n%10;
   arr[i]=mod;
   n=n/10;
   //printf("%d",arr[i]);
  }
   for(i=0;i<3;i++)
     {
    
  printf("%d\n",arr[i]);
}
  return 0; 
  }
