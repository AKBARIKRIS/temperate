#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a,count=0;
  clrscr();
  printf(" enter value =");
  scanf("%d",&a);
  while(a>0)
  {
    a=a/10;
    count++;
  }
   printf("number of digit=%d",count);
 getch();
 }