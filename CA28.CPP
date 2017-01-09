#include<stdio.h>
#include<conio.h>
void fun();       //NR With NA
void fun1(int);   //NR with A
int fun2();       //R with NA
char fun3(int,float);  //R with A
void main()
{
clrscr();
fun();
fun1(5);
int h=fun2();
printf("Value of h is %d\n",h);
char t=fun3(97,4.5789f);
printf("Value of t is %c\n",t);
getch();
}
void fun()
{
printf("No Return Type With No Arguments\n");
}
void fun1(int a)
{
printf("No Return Type With Arguments...%d\n",a);
}
int fun2()
{
int k=4;
printf("Return Type With No Arguments\n");
return k*k*k;
}
char fun3(int a,float b)
{
printf("Return Type With Arguments %d and %f\n",a,b);
return (char)a;
}