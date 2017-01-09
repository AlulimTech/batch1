#include<stdio.h>
#include<conio.h>
int add(int,int);// 4. Return Type With Arguments
void main()
{
int a,b,c;
clrscr();
printf("Enter any two numbers:\n");
scanf("%d%d",&a,&b);
c=add(a,b);//Actual Arguments
printf("Result is %d\n",c);
getch();
}
int add(int x,int y) //Formal Arguments
{
int z=x+y;
return z;
}
/*
int add();
void main()   //3. Return Type With No Arguments
{
clrscr();
int y=add();
printf("Result is %d\n",y);
getch();
}

int add()
{
int a,b,c;
printf("Enter any two numbers:\n");
scanf("%d%d",&a,&b);
c=a+b;   //c=3
return c;
}
/*
void add(int,int);  //2. No Return Type With Arguments
void main()
{
clrscr();
int a,b;
printf("Enter any two numbers:\n");
scanf("%d%d",&a,&b);
add(a,b);  //Actual Arguments
getch();
}
void add(int a,int b)  //Definition
{
int c=a+b;
printf("Result is %d",c);
}
/*
void add();  //1. No Return Type With No Arguments
void main()
{
clrscr();
add();
getch();
}
void add()
{
int a,b,c;
printf("Enter any two numbers:\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("Result is %d",c);
}
*/