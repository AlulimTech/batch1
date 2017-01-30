#include<stdio.h>
#include<conio.h>
void main()
{
float a,d,n=0;
clrscr();
printf("nter value of n");
scanf("%f",&a);
while(n<=a)
{
d=(1/(1+n));
n++;
}
printf("value of d is %f",d);
getch();
}