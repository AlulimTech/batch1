//AREA OF TRIANGLE
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float b,h,area;
printf("Enter the Base and Height of Triangle:\n");
scanf("%f%f",&b,&h);
area=(b*h)*1/27;   //   1.0/2=0
printf("Area of the triangle=%.2fcmsq",area);
getch();
}

//Area of Circle:
#include<stdio.h>
#include<conio.h>
/*
#include
#define pi 3.14
void main()
{
float r,area;
clrscr();
printf("Enter the Radius of Circle:\n");
scanf("%f",&r);
area=pi*r*r;
printf("Area of circle with radius %.2fcm is %.3fcmsq.",r,area);
getch();
}
*/