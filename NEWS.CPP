#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("1.N\n2.E\n3.W\n4.S\n");
scanf("%c",&ch);
switch(ch)
{
case 'N':
printf("You Chose NORTH Direction\n");
break;
case 'E' :
printf("You Chose EAST Direction\n");
break;
case 'W' :
printf("You Chose WEST Direction\n");
break;
case 'S' :
printf("You Chose SOUTH Direction\n");
break;
default:
printf("Invalid Entry");
break;
}
getch();
}