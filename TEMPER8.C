#include<stdio.h>
#include<conio.h>
 void main()
 {
  int num,a,count=0;
  clrscr();
  printf(" enter value =");
  scanf("%d",&num);
  for(a=1;a<=num;a++)
  {
    if(num%a==0)
    {
    count++;
    }
  }
  if(count==2)
  {
   printf(" \n %d prime number ",num);
  }
  else
  {
   printf(" \n %d not prime number",num);
  }
 getch();
 }