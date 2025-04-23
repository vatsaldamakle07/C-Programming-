
#include<stdio.h>
main()
{
    int no;
    char op;

    printf("\n Enter s for square");
    printf("\nEnter c for cube");
    printf("\n Enter Your Number : ");
    scanf("%c",&op);

    switch(op)
{

    case 's':
    case 'S':
    printf("ENTER THE NUMBER :");
    scanf("%d",&no);
    printf(" SQUARE = %d",no*no);
    break;


    case 'c':
    case 'C':
    printf("ENTER THE NUMBER :");
    scanf("%d",&no);
    printf(" CUBE = %d",no*no*no);
    break;

    default:
    printf(" WRONG NUMBER");
    break;

}



}
