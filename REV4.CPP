#include<stdio.h>
#include<conio.h>
int reverse(int);
void main()
{
clrscr();
int n,res;
printf("Enter a no :");
scanf("%d",&n);
res=reverse(n);
printf("Result is %d ",res);
getch();
}
int reverse(int p)
{
int x,c=0,n,a;
for(x=p;x!=0;x=x/10)
{
a=x%10;
c=c*10+a;
}
return c;
}