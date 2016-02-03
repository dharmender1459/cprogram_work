#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char arr[1000];
 int i,j,len,intg=0,space=0;
 scanf("%[^\n]s",arr);
 len = strlen(arr);
 for(i=0;i<len;i++)
  {
   if(arr[i]==1+48||arr[i]==2+48||arr[i]==3+48||arr[i]==4+48||arr[i]==5+48)
    {
     intg++;
    }
   else
     {
      if(arr[i]==' ')
       {
        space++;
       }
     }
  }
 //printf("total space are=%d",space);
 printf("total digits are=%d\n",intg);
 printf("total characters are=%d\n",len=len-intg-space);
 return 0;
}
