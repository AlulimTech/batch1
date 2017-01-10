#include<stdio.h>
#include<conio.h>
int reverse();
void main()
{
clrscr();
int y=reverse();
printf("Result is %d\n",y);
getch();
}
int reverse()
{
int n,x,a,c=0;
printf("Enter a no :");
scanf("%d",&n);
for(x=n;x!=0;x=x/10)
{
a=x%10;
c=c*10+a;
}
return c;
}