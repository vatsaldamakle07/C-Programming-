#include <stdio.h>
main()
{
    int no,op;
    do
    {

    printf("\nEnter 1 for Sqaure");
    printf("\nEnter 2 for cube");
    printf("\nEnter 4 for exit");

    printf("\nEnter the Option : ");

    scanf("%d",&op);

    if(op==1)
    {
        printf("Enter The number : ");
        scanf("%d",&no);
        printf("Square = %d",no*no);
    }
    else if(op==2)
     {
        printf("Enter The number : ");
        scanf("%d",&no);
        printf("Cube = %d",no*no*no);
    }
    else if(op==4)
    {
        printf("\nBye");
    }
    else
    {
        printf("Wrong Option");
    }

    }while(op!=4);
}
