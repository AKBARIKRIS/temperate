#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a=1,b,c;
  clrscr();
  printf("enter start tabel=");
  scanf("%d",&b);
  printf("how many tabel=");
  scanf("%d",&c);


  for(a;a<=c;a++)

  {
   printf("%d*%d=%d \n",b,a,a*b);
  }
  getch();
 }