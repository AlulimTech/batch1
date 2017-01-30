#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=20,c=30,d,e;
clrscr();
d=a>b?a:b ;
printf("maximum of %d and %d is %d\n",a,b,d);
e=a>b&&a>c?a:b>c?b:c;
printf("maximum of %d %d and %d is %d\n",a,b,c,e);
getch();
}