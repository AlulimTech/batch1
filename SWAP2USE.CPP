#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter value of a and b:\n");
scanf("%d%d",&a,&b);
printf("value of a and b b4 swapping is %d and %d\n",a,b);
c=a;
a=b;
b=c;
printf("value of a and b after swapping is %d and %d\n",a,b);
getch();
}
