//First Program
#include<stdio.h>
#include<conio.h>
#define pf printf
#define max(a,b) a>b?a:b
int k=3;//Global variable declaration & definition.
void fun();  //user-defined function
void main()
{
clrscr();
pf("Hello\n");
fun();
pf("Max is %d\n",max(5,6));
getch();
}
void fun()
{
printf("Fun\n");
}
/*
Structure of a C Program:
1. Documentation or Comment Section
a. Single Line Comments //
b. Multi-line Comments  /*
-We can use this section anywhere in our program.

2. Include or Header File or Linker Section
-This section consists of all the header files.
#include<stdio.h>
#include<conio.h>
#include<math.h>
-All these header file contains pre-defined function declarations.

3. Definition Section
#define
-This section is used to define symbolic constants.
-Also this section defines macros, where macro is one line function like
statement.
#define max(a,b) a>b?a:b
#define pf printf
#define pi 3.14

4. Global Declaration Section
-In this section we declare and define global variables.
-Also we are declaring user-defined functions.

5. Main Section
-It includes all the other user-defined function callings.
-It is used to initialize variables.
-It is used to print statements.

6. Sub-Program Section
-Here we are actually defining a user-defined function.
*/
