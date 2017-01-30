#include<stdio.h>
#include<conio.h>
#define PI 3.14159
void main()
{
float item,output;
clrscr();
printf("enter the amount\n");
scanf("%f",&item);
output=(float)item*100;
printf("price is %.2f paise",output);
getch();
}
