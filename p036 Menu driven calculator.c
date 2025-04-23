#include<stdio.h>
main()
{
    int op,a,b;
    printf("\nEnter 1 for Addition");
    printf("\nEnter 2 FOR Substraction ");
    printf("\nEnter 3 For Division");
    printf("\nEnter 4 For Multiplication");
    printf("ENTER YOUR OPTION :");
    scanf("%d",&op);

    if (op==1)
    {
        printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf(" \nADDITION = %d",a+b);
    }

    else if (op==2)
    {
        printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf("SUBSTRACTION = %d",a-b);

    }

    else if (op==3)
       {
        printf("\nEnter the values : ");
        scanf("%d %d",&a,&b);
        printf("DIVISION = %d",a/b);
       }
    else if (op==4)
    {
        printf(" Enter the Values : ");
        scanf("%d %d",&a,&b);
        printf("MULTIPLICATION = %d",a*b);

    }
    else
        printf("WRONG OPTION");
}
