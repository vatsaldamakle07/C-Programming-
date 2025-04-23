#include<stdio.h>
main()
{
    int monthno=1;


    switch(monthno)
    {
    case 1:
        printf("\nJanuary");
        break;
    case 2:
        printf("\nFeb");
        break;

    case 3:
        printf("\nMarch");
        break;
    default:
       printf("WRONG OPTION");
       break;
   }
}
