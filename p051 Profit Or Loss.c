
#include<stdio.h>
main()
{
    int buy,sell;
    printf("Enter the buying price: ");
    scanf("%d",&buy);
    printf("\nEnter the selling price: ");
    scanf("%d",&sell);

    if(buy>sell)
       {
        printf("\nUser has Made A Loss");
       }

    else if (sell>buy)
    {
        printf("\nUser Has Made A Profit");

    }
    else
        printf("NO PROFIT NO LOSS");

}
