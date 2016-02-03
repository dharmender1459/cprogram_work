#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
 {
  int i,low=0,cap=0,len,space=0;
  char strg[1000];
  scanf("%[^\n]s",strg);
  len=strlen(strg);
  for(i=0;i<len;i++)
   {
    if((strg[i]>=65)&&(strg[i]<=90))
      ++cap;
    else if(strg[i]==' ')
      ++space;
    else
     ++low;
   }
   printf("spaces are=%d",space);
   printf("capital letters are=%d\n",cap);
   printf("lower letters aer =%d\n",low=low-space);
}
   
