//Range Programs
#include<stdio.h>
#include<conio.h>
void main()          //Multiplication
{
long a,b,i,j,rev,rem,x;
clrscr();
printf("Enter any two range:\n");
scanf("%ld%ld",&a,&b);//5   7
printf("Multiplication Numbers Between %ld and %ld are:\n",a,b);
for(i=1;i<=10;i++)
{
    for(j=a;j<=b;j++)
    printf("%ldx%ld=%ld\t",j,i,i*j);
    printf("\n");
}
getch();
}

/*
void main()          //Perfect
{
long a,b,i,j,rev,rem,sum;
clrscr();
printf("Enter any two range:\n");
scanf("%ld%ld",&a,&b);//77  100
printf("Perfect Numbers Between %ld and %ld are:\n",a,b);
for(i=a;i<=b;i++)
{
sum=0;
       for(j=1;j<i;j++)
       {
	 if(i%j==0)
	 sum=sum+j;
       }
      if(sum==i)
      printf("%ld\t",i);
}
getch();
}

/*
void main()          //Strong
{
long a,b,i,j,rev,rem,x,f;
clrscr();
printf("Enter any two range:\n");
scanf("%ld%ld",&a,&b);//77  100
printf("Strong Numbers Between %ld and %ld are:\n",a,b);
for(i=a;i<=b;i++)
{
x=i;
rev=0;
    while(x!=0)
    {
    rem=x%10;
    f=1;
       for(j=rem;j>=1;j--)
       f*=j;
    rev=rev+f;//87
    x/=10;
    }
    if(i==rev)
    printf("%ld\t",i);
}
getch();
}
/*
void main()          //Armstrong
{
long a,b,i,j,rev,rem,x;
clrscr();
printf("Enter any two range:\n");
scanf("%ld%ld",&a,&b);//77  100
printf("Armstrong Numbers Between %ld and %ld are:\n",a,b);
for(i=a;i<=b;i++)
{
x=i;
rev=0;
    while(x!=0)
    {
    rem=x%10;
    rev=rev+rem*rem*rem;//87
    x/=10;
    }
    if(i==rev)
    printf("%ld\t",i);
}
getch();
}

/*
void main()          //Palindrome
{
long a,b,i,j,rev,rem,x;
clrscr();
printf("Enter any two range:\n");
scanf("%ld%ld",&a,&b);//77  100
printf("Palindrome Numbers Between %ld and %ld are:\n",a,b);
for(i=a;i<=b;i++)
{
x=i;
rev=0;
    while(x!=0)
    {
    rem=x%10;
    rev=rev*10+rem;//87
    x/=10;
    }
    if(i==rev)
    printf("%ld\t",i);
}
getch();
}
/*
void main()  //Prime Numbers
{
long a,b,i,j,cnt;
clrscr();
printf("Enter any two range:\n");
scanf("%ld%ld",&a,&b);//7  100
printf("Prime Numbers Between %ld and %ld are:\n",a,b);
for(i=a;i<=b;i++)
{
cnt=0;
    for(j=1;j<=i;j++)
    {
      if(i%j==0)
      cnt++;
    }
    if(cnt==2)
    printf("%ld\t",i);
}
getch();
}
*/