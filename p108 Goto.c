#include<stdio.h>
main()
{
    int no ;
    vatsal:
    printf("\nEnter the number: ");
    scanf("%d",&no);

    if (no>0)
    {
        printf("\nSqaure = %d",no*no);
    }
    else
    {
        printf("\nWhy are you entering negative numbers");
        goto vatsal;
    }
}
