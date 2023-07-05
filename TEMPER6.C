#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a=1,i,f=1;
  clrscr();
  printf("enter value =");
  scanf("%i",&i);

  for(i;a<=i;a++)
  f=f*a;
  {
   printf("f=%d \t",f);
  }
  getch();
 }