#include<stdio.h>
#include<conio.h>
 void main()
 {
  char i;
  clrscr();
  i='A';

  do
  {
    printf("%c \t",i);
    i++;
  }while(i<='Z');

  getch();
 }