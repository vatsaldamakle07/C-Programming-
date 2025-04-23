

#include<stdio.h>
main()
{
    int a,b;
    char op;

    printf("\n Enter p for Addition");
    printf("\nEnter q for Substraction");

    printf("\n Enter Your OPTION : ");
    scanf("%c",&op);

    switch (op)
    {
    case 'p':
    case 'P':
         printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf(" \nADDITION = %d",a+b);
        break;

    case 'q':
    case'Q':
        printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf("\nSUBSTRACTION = %d",a-b);
        break;


    default:
        printf("WRONG OPTION");
        break;
    }
    }
