#include<stdio.h>
#include<conio.h>
void rev();
void main()
{
   clrscr();
   rev();
   getch();
}
 void rev()
{
int n,r,rev=0,rem;
printf("Enter any two numbers:\n");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("Reverse order number=%d",rev);
}
