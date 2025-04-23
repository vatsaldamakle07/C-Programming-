#include<stdio.h>
#include<conio.h>
 main()
{
   int i,no,temp;

   printf("\nEnter limit =>");
   scanf("%d",&no);

   temp=no;

   for(i=1; i<=temp; i++)
   {
     printf("\n%d == %d",i,i*i);
   }

}
