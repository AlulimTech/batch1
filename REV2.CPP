#include<stdio.h>
#include<conio.h>
void reverse(int);
void main()
{
clrscr();
int n;
printf("Enter a no :");
scanf("%d",&n);
reverse(n);
getch();
}

void reverse(int q)
{
int x,i,c=0,a;
for(x=q;x!=0;x=x/10)
{
a=x%10;
c=c*10+a;
}
printf("Result is %d",c);
}