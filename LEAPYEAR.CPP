#include<stdio.h>
#include<conio.h>
void main()
{
int  year;
clrscr();
printf("enter the year:\n");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
printf("it is aleap year\n");
else
printf("not a leap year\n");
}
else
{
if(year%4==0)
printf("it is a leap year");
else
printf("not a leap year");
}
getch();
}