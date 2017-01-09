#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
int n;
clrscr();
printf("Enter any number:\n");
scanf("%d",&n);//5
int k=prime(n);
if(k==1)
printf("Prime");
else
printf("Not Prime");
getch();
}
int prime(int n)
{
int i,cnt=0;
for(i=1;i<=n;i++)
{
  if(n%i==0)
  cnt++;
}
if(cnt==2)
return 1;
else
return 0;
}

/*
int prime();
void main()
{
int n;
clrscr();
int k=prime();
if(k==1)
printf("Prime");
else
printf("Not Prime");
getch();
}
int prime()
{
int n,i,cnt=0;
printf("Enter any number:\n");
scanf("%d",&n);//5
for(i=1;i<=n;i++)
{
  if(n%i==0)
  cnt++;
}
if(cnt==2)
return 1;
else
return 0;
}
/*
void prime(int);
void main()
{
int n;
clrscr();
printf("Enter any number:\n");
scanf("%d",&n); //6
prime(n);
getch();
}
void prime(int n)
{
int i,cnt=0;
for(i=1;i<=n;i++)
{
  if(n%i==0)
  cnt++;
}
if(cnt==2)
printf("Prime Number");
else
printf("Not a Prime Number");
}
*/