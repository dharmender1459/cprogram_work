#include<stdio.h>
#include<string.h>
int main()
 {
  char strn1[1000],strn2[100];
  //gets(strn1);
  gets(strn2);
  strcpy(strn1,strn2);
  printf("%s",strn1);
  return 0;
 } 
