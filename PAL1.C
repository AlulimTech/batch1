#include<stdio.h>
#include<conio.h>
void palindrome();
void main()
{
clrscr();
palindrome();
getch();
}
void palindrome()
{
int n,rev=0,rem,a;
printf("Enter a no :\n");
scanf("%d",&n);
a=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(a==rev)
{
printf("%d is Palindrome",a);
}
else
printf("%d is not Palindrome",a);

}