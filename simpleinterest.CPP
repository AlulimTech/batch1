#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,d,si;
clrscr();
printf("Enter the Price of si:\n");
scanf("%f",&p);
printf("Enter the Rate of si:\n");
scanf("%f",&r);
printf("Enter the discount of si:\n");
scanf("%f",&d);
si=p*r*d/100;
printf("simple interest=%f:\n",si);
getch();
}