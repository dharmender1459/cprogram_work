#include<stdio.h>
int main()
 {
  int i,j,k,n,l,t,u,arr[100],temp1=0,temp=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
  for(i=0;i<n;i++)
   {
    if(i==0)
     {
      for(l=0;l<n;l++)
       {
         if(temp<=arr[l])
          {
           temp=arr[l];
          }
       }
    }
   else
     {
      for(j=0;j<n-i;j++)
      {
       for(k=1+j;k<=j+i;k++)
        {
         if(k==1+j)
          {
           temp1=arr[j]+arr[k];
          }
         else
          {
           temp1=temp1+arr[k];
          }
         }
         if(temp<=temp1)
          {
           temp=temp1;
          }
       } 
    }
  }
  printf("%d\n",temp);
  return 0;
 }
