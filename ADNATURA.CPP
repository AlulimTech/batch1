
#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,n,i;
clrscr();
printf("enter the length\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum of %d natural no.s is %d",n,sum);
getch();
}