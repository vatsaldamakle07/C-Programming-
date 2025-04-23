#include<stdio.h>
main()
{
    int op,a,b;
    do
   {

    printf("\nEnter 1 for Addition");
    printf("\nEnter 2 for Substraction");
    printf("\nEnter 3 for Multiplication");
    printf("\nEnter 4 for division");
    printf("\nEnter 5 for Exit");
    printf("\nEnter The Option");
    scanf("%d",&op);

   if(op==1)
   {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nAddition = %d",a+b);

   }

   else if(op==2)
    {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nSubstraction = %d",a-b);

   }
   else if (op==3)
   {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nMultiplication = %d",a*b);

   }
   else if (op==4)
    {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nDivision = %d",a/b);

   }
   else if (op==5)
   {
       printf("\nBye");
   }
   else
   {
       printf("Wrong Input");
   }
   }while(op!=5);
}

