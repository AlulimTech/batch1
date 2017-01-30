#include<stdio.h>
#include<conio.h>
void main()
{
int k;
clrscr();
printf("Enter any value:\n");
scanf("%d",&k);
printf("Value of k is %d",k);
getch();
}
/*
void main()
{
int a=123;               //         %d   or  %i  or   %u
long b=2675672;          //         %ld  or  %li or   %lu
float c=3.27979;           //            %f
double d=4.28782;            //          %lf
long double e=4.290923;        //        %Lf
char f='T';                      //      %c
char g[10]="Nilesh";             //      %s
clrscr();
printf("Integer=%d\nLong=%ld\nFloat=%f\nDouble=%lf\nLongDouble=%Lf\nCharacter=%c\nString=%s\n",a,b,c,d,e,f,g);
getch();
}

/*
Managing Input Output Functions:

1. printf() is available within <stdio.h>

a. To print any message we are using printf()
Syntax:
printf("any message or string");
where string is any combination of characters.
Ex:

printf("Hello Programming\n");
cout<<"Hello Programming"<<endl;
System.out.print("Hello Programming\n");


b. To print any variable's value.
plastic bottle=value;
			     Access Specifier /Format Specifier
int a=123;                        %d   or  %i  or   %u
long b=2675672;                   %ld  or  %li or   %lu
float c=3.27979;                       %f
double d=4.28782;                      %lf
long double e=4.290923;                %Lf
char f='T';                            %c
char g[10]="Nilesh";                   %s

Syntax:
printf("any message with compulsory access speicfier",variablename);

Ex:
int k=12
float b=4.29789;

printf("Value of k is %d and b is %f\n",k,b);
cout<<"Value of k is "<<k<<" and b is "<<b<<endl;
System.out.println("Value of k is "+k+" and value of b is "+b);


2. scanf() is available within <stdio.h>
-This function is used to take input from user.
Syntax:
scanf("only access specifier",&variablename);
where & is the address of variable.
*/