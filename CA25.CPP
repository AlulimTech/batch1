#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i;
clrscr();
for(i=10;i>=0;i--)
{
if(i==0)
break;
else if(i==7)
continue;
else if(i==1)
exit(0);
printf("%d\n",i);
}
printf("Finally im %d\n",i);
getch();
}
/*
void main()//usage of goto statement
{
int i=1;
clrscr();
niel:
printf("%d\t",i++);
if(i<=100)
goto niel;
getch();
}
/*
Jumping Statements:
a. goto
Syntax:
label:
statements;

goto label;

b. continue
Syntax:
continue;

c. break
Syntax:
break;

d. return
Syntax:
return value;
or
return (value);
or
return expression;

e. exit(0)   [process.h  or  stdlib.h]
Syntax:
exit(0);
*/