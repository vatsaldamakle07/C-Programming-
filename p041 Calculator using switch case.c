
#include<stdio.h>
main()
{
    int op,a,b;

    printf("\n Enter 1 for Addition");
    printf("\nEnter 2 for Substraction");
    printf("\nEnter 3 for Division");
    printf("\nEnter 4 for Multiplication");
    printf("\n Enter Your OPTION : ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
         printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf(" \nADDITION = %d",a+b);
        break;

    case 2:
        printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf("SUBSTRACTION = %d",a-b);
        break;

    case 3:
        printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf("DIVISION = %d",a/b);
        break;

    case 4:
        printf(" Enter the Values : ");
        scanf("%d %d",&a,&b);
        printf("MULTIPLICATION = %d",a*b);
        break;

    default:
        printf("WRONG OPTION");
        break;
    }
    }
