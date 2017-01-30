#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter two digits:\n");
scanf("%d%d",&a,&b);
if(a<b)
printf("%d is smaller than %d\n",a,b);
else
printf("%d is smaller than %d\n",b,a);
getch();
}