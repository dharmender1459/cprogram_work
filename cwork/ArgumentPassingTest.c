#include<stdio.h>
void fun();
int main()
 {
  int i,n;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<5;i++)
   {
    scanf("%d",&arr[i]);
   }
    fun(&arr);
   return 0;
 }
  void fun(int pt[])
   {
    int i;
    for(i=0;i<5;i++)
     {
      pt[i]=pt[i]+10;
     }
     for(i=0;i<5;i++)
      {
       printf("%d\n",pt[i]);
      }
   }
