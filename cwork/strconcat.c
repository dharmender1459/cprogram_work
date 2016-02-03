#include<stdio.h>
#include<string.h>
int main()
 {
  char string1[100],string2[100];
  //scanf("%[\^n]",string1);
  //printf("%s\n",string1);
  //scanf("%[\^n]",string2);
  gets(string1);
  gets(string2);
  strcat(string1 ,string2);
  printf("%s",string1);
  return 0;
 }
  
