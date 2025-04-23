#include<stdio.h>
main()
{
    char op;
    int a;
    do
    {
    printf("\nEnter s for square ");
    printf("\nEnter c for cube  ");
    printf("\nEnter e for exit");
    printf("\nEnter The Option : ");
    fflush(stdin);
    scanf("%c",&op);


    if(op=='s')
   {
       printf("\nEnter The number: ");
       scanf("%d",&a);
       printf("\nSquare = %d",a*a);
   }
   else if (op=='c')
    {
       printf("\nEnter The number: ");
       scanf("%d",&a);
       printf("\ncube = %d",a*a*a);
   }
   else if (op=='e')
     {
       printf(" bye ");

   }
   else
   {
    printf("Wrong Input");
   }
  }while(op!='e');

}
