#include<stdio.h>
#include<conio.h>
void main()
{
int sum=1,n,i;
clrscr();
printf("enter the number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum*i;
}
printf("factorial of %d is %d",n,sum);
getch();
}