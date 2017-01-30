#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define pf printf
void main()
{
float r, area;
clrscr();
pf("Enter the Radius of Circle:\n");
scanf("%f",&r);
area=pi*r*r;
printf("Area of Circle With Radius %fcm is %fcmsq.",r,area);
getch();
}


/*

sum=sum+i;


int k;
k=k+10;
printf("Value of k is %d",k);

*/