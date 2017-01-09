/*
Functions:

Based on Users:
1. Pre-Defined    printf()  scanf()
2. User-Defined   main()


Three Important things for any function:
a. Function Declaration  or Function Prototype  [Top of main()]
Mr Abc();
Miss Pqr();
Syntax:
returtype functionname(parameters/arguments);

Ex:
void fun();
float fun1(int,float,char);


b. Function Definition  [After main() definition]
Mr Abc()
{
C,C++,Java,2+yearsExpr;
}

Miss Pqr()
{
C,C++,.NET,3+yearsExp;
}
Syntax:
returntype functionname(formal_arguments/parameters)
{
statements;
}

Ex:
void fun()
{

}

float fun1(int a,float b,char c)
{

}

c. Function Calling  [Inside main() or some other functions]
Abc();
Pqr();
Syntax:
functionname(actual_arguments);

Ex:
fun();
float y=fun1(2,3.456f,'N');


Function Based on Return type:
1. No Return Type With No Arguments   Ex: void fun();
2. No Return Type With Arguments      Ex: void fun1(int,float);
3. Return Type With No Arguments      Ex: float fun2();
4. Return Type With Arguments         Ex: double fun3(char,float);


*/
#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
printf("Hello\n");
getch();
return -1;
}

