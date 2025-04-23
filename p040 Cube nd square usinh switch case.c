
#include<stdio.h>
main()
{
    int op,no;

    printf("\n Enter 1 for square");
    printf("\nEnter 2 for cube");
    printf("\n Enter Your Number : ");
    scanf("%d",&op);

    switch(op)
{

    case 1:
    printf("ENTER THE NUMBER :");
    scanf("%d",&no);
    printf(" SQUARE = %d",no*no);
    break;

    case 2:
    printf("ENTER THE NUMBER :");
    scanf("%d",&no);
    printf(" CUBE = %d",no*no*no);
    break;

    default:
    printf(" WRONG NUMBER");
    break;

}



}

