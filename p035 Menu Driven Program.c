
#include<stdio.h>
main()
{
    int op,no;

    printf("\n Enter 1 for square");
    printf("\nEnter 2 for cube");
    printf("\n Enter Your Number : ");
    scanf("%d",&op);

    if (op==1)
    {
        printf("\nEnter the number :");
        scanf("%d",&no);
        printf("\nSquare = %d,no*no");

    }
    else if (op==2)
    {
        printf("\nEnter the number :");
        scanf("%d",&no);
        printf("\nCube = %d",no*no*no);

    }
    else
    {
        printf("\n Wrong Choice");
    }
}
