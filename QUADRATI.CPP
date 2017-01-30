#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,D,x,y;
clrscr();
printf("enter value of a,b and c:\n");
scanf("%f%f%f",&a,&b,&c);
D=((b*b)-(4*a*c));
printf("Dicriminant is %f\n",D);
if(D<0)
printf("roots are imaginary\n");
else if(D==0)
{
printf("roots are real and equal.\n");
x=((-b)+sqrt(D))/(2*a);
y=((-b)-sqrt(D))/(2*a);
printf("roots are %.2f and %.2f",x,y);
}
else if(D>0)
{
printf("roots are real and distinct.\n");
x=((-b)+sqrt(D))/(2*a);
y=((-b)-sqrt(D))/(2*a);
printf("roots are x=%.2f and y=%.2f",x,y);
}
getch();
}
