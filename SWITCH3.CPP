#include<stdio.h>
#include<conio.h>
void main()
{

char M,F,W;
clrscr();
printf("enter your choice M or F\n");
scanf(" %c",&W);
switch(W)
{
case 'M':
printf("you have choosed M=Male\n");
break;
case 'F':
printf("you have choosed F=Female\n");
break;
default:
printf("invalid entry") ;
 }
getch();
}