#include<stdio.h>
main()
{
    int temp;
    printf("Enter the Tempertature : ");
    scanf("%d",&temp);

    if (temp<0)
    {
        printf("FREEZING ATMOSPHERE");
    }

    else if (temp>=0 && temp<=10 )
    {
        printf("VERY COLD ATMOSPHERE");
    }

    else if (temp>10 && temp <=20 )
    {
        printf("COLD ATMOSPHERE");
    }
    else if (temp>20 && temp<=30)
    {
        printf("NORMAL ATMOSPHERE");
    }
    else if (temp>30 && temp<=40)
    {
        printf("HOT ATMOSPHERE");

    }
    else
    {
        printf("VERY HOT ATMOSPHERE");
    }









}
