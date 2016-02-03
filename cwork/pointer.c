#include<stdio.h>
void main()
 {
  int x =5;
  int *p=&x;
  *p=6;
  int ** q=&p;
  int *** r=&q;
  printf("%d %d %d %d",x,*p,**q,***r);
 }
