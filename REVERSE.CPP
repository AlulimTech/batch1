#include<stdio.h>
#include<conio.h>
void reverse();
void main()
{
clrscr();
reverse();
getch();
}
void reverse()
{
int i,x,c=0,n,a;
printf("Enter a no :");
scanf("%d",&n);
for(x=n;x!=0;x=x/10)
{
a=x%10;
c=c*10+a;
}
printf("Result is %d",c);
}
