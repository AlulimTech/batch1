#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int a;
clrscr();
printf("enter any character:\n");
scanf("%c",&ch);
a=(int)ch;
printf("ASCII value of %c is %d",ch,a);
getch();
}