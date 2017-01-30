#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter Any Charcter: \n");
scanf("%c",&ch);
if(isalpha(ch))
printf("Alphabet");
else if(isdigit(ch))
printf("Digits");
else if(ispunct(ch))
printf("Punctuators") ;
else
printf("Space");
getch();
}