#include<stdio.h>
#include<conio.h>
 void main()
 {
 clrscr();
 int arr[100],i,n;
 printf("Enter the size of an array\n");
 scanf("%d",&n);
 printf("Enter the elements of array\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  printf("odd numbers are\n");
    for(i=0;i<n;i++)
    {
     if(arr[i]%2 !=0)
     {
     printf("%d\t",arr[i]);
     }
     }
  printf("even numbers are\n");
   for(i=0;i<n;i++)
    {
     if(arr[i]%2==0)
      {
   printf("%d\t",arr[i]);
     }
     }
     getch();
     }


