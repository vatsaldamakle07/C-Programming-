#include<stdio.h>
main()
{
    char op;
    int a,b;
    do
   {

    printf("\nEnter a for Addition");
    printf("\nEnter b for Substraction");
    printf("\nEnter c for Multiplication");
    printf("\nEnter d for division");
    printf("\nEnter f for Exit");
    printf("\nEnter The Option");
    fflush(stdin);
    scanf("%c",&op);

   if(op=='a')
   {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nAddition = %d",a+b);

   }

   else if(op=='b')
    {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nSubstraction = %d",a-b);

   }
   else if (op=='c')
   {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nMultiplication = %d",a*b);

   }
   else if (op=='d')
    {
       printf("\nEnter the numbers: ");
       scanf("%d%d",&a,&b);
       printf("\nDivision = %d",a/b);

   }
   else if (op=='e')
   {
       printf("\nBye");
   }
   else
   {
       printf("Wrong Input");
   }
   }while(op!='e');
}


