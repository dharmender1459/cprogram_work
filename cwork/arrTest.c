#include<stdio.h>
#include<string.h>
int main()
 {
  int i=0,j,lop,n,arr[100],mod,t,len,m=0,p,count=0;
  scanf("%d",&n);
  while(n>0)
  {
   mod=n%10;
   arr[i]=mod;
   n=n/10;
   printf("%d",arr[i]);
   i++;
   t=i;
  }
   lop=t/2;
   for(i=0;i<lop;i++)
    {
      if(arr[i]==arr[t-1-i])
       {
        count++;
       }
     }
   if(count==lop)
     printf("\nnumber is palindrome");
   else
     printf("\nnumber is not palindrome");

   printf("\n");
    for(i=0;i<t;i++)
      printf("%d",arr[i]);
    for(i=0;i<t;i++)
      {
       p=10;
     while(arr[i]>=p)
       p=p*10;
      m=m*p;
      m=m+arr[i];
      }
     printf("\nnormal integer number=%d",m);
  return 0; 
  }
