#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i=0,j=1,n,t,a;
  clrscr();
  printf("enter value =");
  scanf("%d",&n);
  printf("%d , %d ,",i,j);
  for(a;i<=n;i++)
  {
  t=i+j;
  i=j;
  j=t;

  printf("%d , \n ",t);
  }
  getch();
 }