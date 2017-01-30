#include<stdio.h>
#include<conio.h>
void main()
{
int f1=0,f2=1,n,f3,i;
clrscr();
printf("enter the length.\n");
scanf("%d",&n);
printf("fibonacci series is %d\t %d\t",f1,f2);
for(i=1;i<=n-2;i++)
{
f3=f1+2*f2;
printf("%d\t",f3);
f1=f2;
f2=f3;
}
getch();
}