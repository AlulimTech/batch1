#include<stdio.h>
#include<conio.h>
void main()
{
long a,b,i,j,rev,rem,x;
clrscr();
printf("enter any two range:\n");
scanf("%ld%ld",&a,&b);
printf("multiplication numbers between %ld and %ld are:\n",a,b);
for(i=1;i<=10;i++)
{
   for(j=a;j<=b;j++)
   printf("%ldx%ld=%ld\t",j,i,i*j);
   printf("\n");
}
getch();
}
