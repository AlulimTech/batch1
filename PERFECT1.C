#include<stdio.h>
#include<conio.h>
void perfect();
void main()
{
clrscr();
perfect();
getch();
}

void perfect()
{
int sum=0,i,n;
printf("Enter a no :\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
sum=sum+i;
}
if(sum==n)
printf("Perfect no.");
else
printf("Not Perfect no.");
}


/*
void perfect()
{
int i=1,n,sum=0;
printf("Enter a no :");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
{
sum=sum+i;
i++;
}
if(sum==n)
{
printf("%d is Perfect no.\n");
}
else
{
printf("%d is not perfect no.");
}
}
}
*/
