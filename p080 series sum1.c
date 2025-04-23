#include<stdio.h>
main()
{
    int i,no,sum=1;
    printf("Enter The limit :");
    scanf("%d",&no);


    for(i=1;i<=no;i++)
    {
        printf("%d *  ",i);
        sum=sum*i;
    }
    printf("\nSum = %d",sum);
}

