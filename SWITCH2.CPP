#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
float d;
char ch;
clrscr();
printf("Enter Any Two No.s :\n");
scanf("%d%d",&a,&b);
printf("\nenter the OPERATION  you want to perform\n");
printf("\n+\n-\n/\n%\n*\n");
flushall();//or " %c"  or fflush(stdin);
scanf("%c",&ch);
switch(ch)
{
case '+':
d=a+b;
printf("value is %.2f",d);
break;

case '-':
d=a-b;
printf("value is %.2f",d);
break;

case '/':
d=(float)a/b;
printf("value is %.2f",d);
break;

case '%':
d=a%b;
printf("value is %.2f",d);
break;

case '*':
d=a*b;
printf("value is %.2f",d);
break;

default :
printf("Invalid Entry");
break;
}
getch();
}