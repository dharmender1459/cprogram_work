#include<stdio.h>
#include<string.h>
int main()
 {
  char strn[100],freq;
  int i,len,count=0;
  scanf("%[^\n]s",strn);
  len=strlen(strn);
  printf("%d",len);
  scanf("%s",&freq);
  for(i=0;i<len;i++)
   {
    if(strn[i]==freq)
     {
      count++;
     }
   }
    printf("frequency of character is=%d\n",count);
    return 0;
 }
