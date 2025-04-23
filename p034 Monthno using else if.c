#include<stdio.h>
main()
{
    int monthno;

    printf("Enter the monthno : ");
    scanf("%d",&monthno);

   if(monthno==1)
   {
       printf("\nJanuary");
   }
   else if (monthno==2)
   {
       printf("\nFebruary");
   }
   else if (monthno==3)
   {
       printf("\nMarch");
   }
   else if (monthno==4)
   {
       printf("\nApril");
   }
   else if (monthno==5)
   {
       printf("\nMay");
   }
   else if (monthno==6)
   {
       printf("\nJune");

   }
   else if(monthno==7)
   {
       printf("\nJuly");
   }
   else if (monthno==8)
   {
       printf("\nAugust");
   }
   else if (monthno==9)
   {
       printf("\nSeptember");

   }
   else if (monthno==10)
   {
       printf("\nOctober");
   }
   else if (monthno==11)
   {
       printf("\nNovember");
   }
   else if (monthno==12)
   {
       printf("\nDecember");
   }
   else
   {
    printf("Wrong Option")
   }
}
