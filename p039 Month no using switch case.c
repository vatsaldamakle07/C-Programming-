#include<stdio.h>
main()
{
    int monthno;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&monthno);

    switch(monthno)
{


    case 1:
    printf("\nJanuray");
    break;

    case 2:
    printf("\nFEb");
    break;

    case 3:
    printf("\nMarch");
    break;

    case 4:
    printf("\nApril");
    break;

    case 5:
    printf("\nMay");
    break;

    case 6:
    printf("\nJUNE");
    break;

    case 7:
    printf("\nJULY");
    break;

    case 8:
    printf("\nAugust");
    break;

    case 9:
    printf("\nSeptember");
    break;

    case 10:
    printf("October");
    break;

    case 11:
    printf("\nNovenber");
    break;

    case 12:
    printf("\nDecember");
    break;

    default:
    printf("\nWRONG OPTION");
    break;
}
}
