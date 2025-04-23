
#include<stdio.h>
main()
{
    int i,no,sum=0;
    printf("Enter The limit :");
    scanf("%d",&no);


    for(i=1;i<=no;i++)
    {
        printf("1/%d + ",i);
        sum=sum+1;
    }
    printf("\nSum = %d",sum);
}


