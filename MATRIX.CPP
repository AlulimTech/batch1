#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,c;
int a[10][10];
clrscr();
printf("Enter the Rows Columns for a Matrix:\n");
scanf("%d%d",&r,&c);
printf("Enter the %d Elements:\n",r*c);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);
 }
printf("Entered Matrix is:\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
  printf("%d \t",a[i][j]);
    }
  printf("\n");
   }
  getch();
  }