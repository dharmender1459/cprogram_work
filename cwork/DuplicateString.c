#include<stdio.h>
#include<string.h>
int main()
 {
  char *p1;
  char *p2;
  //scanf("%s",p1);
  gets(p1);
  p2=strdup(p1);
  printf("Duplicate string is : %s\n",p2);
  return 0;
 }
