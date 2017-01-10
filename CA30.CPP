/*
5=1
6=1 2 3
28=1 2 4 7 14

int sum=0,i,n=6;
for(i=1;i<n;i++)
{
  if(n%i==0)
  sum=sum+i; //sum=6
}
if(sum==n)
printf("Perfect");

*/

#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
int i;
clrscr();
printf("Normal Static\n");
for(i=0;i<3;i++)
fun();
int k=-90;
printf("%d\n",~k);
getch();
}
void fun()
{
auto int a=2;
static int b=3;
a++;
b++;
printf("%d\t%d\n",a,b);
}


/*
#include"stdio.h"
#include<conio.h>
#include"ca31.cpp"
extern int t;
void main()
{
clrscr();
printf("Value of t is %d\n",t);
fun();
getch();
}
/*
void main()
{
int i;
register int k=0xF;//
clrscr();
printf("Value of k is %o\n",k);
for(i=0;i<=16;i++)
printf("%d\t%o\t%x\n",i,i,i);
getch();
}
/*
void main()
{
auto int a=4;
clrscr();
printf("Value of a is %d\n",a);//4   4
a=a+7;
printf("Value of a is %d\n",a);//11  11
a++;
printf("Value of a is %d\n",a);//11 11  12  12
a*=5;
{
int a;
printf("Value of a is %d\n",a);//60 60   Garbage
a=6;
a*=2;
printf("Value of a is %d\n",a);//12      12
a-=2;
}
printf("Value of a is %d\n",a);//10      60
getch();
}

/*
Storage Classes:  It will give you the Life & Scope of a variable.
1. auto or automatic
2. register
3. extern or external
4. static

auto
Default Value: Garbage
Storage Medium: RAM[Main Memory]
Scope:          Within Blocks
Life            Within Blocks

extern or external
Default Value:  Zero
Storage Medium: RAM[Main Memory]
Scope:          Within More than one program.
Life            Till the Program Ends

register
Default Value:  Garbage
Storage Medium: CPU Registers
Scope:          Within Blocks
Life            Within Blocks

static
Default Value:  Zero
Storage Medium: RAM[Main Memory]
Scope:          Within function calls
Life            Till the program ends

*/
