

#include<stdio.h>
main()
{
    int i,no,sum=0;
    printf("Enter The limit :");
    scanf("%d",&no);

    for(i=1;i<=no;i=i+2)
    {
        printf("%d + ",i);
        sum=sum+i;
    }
    printf("\nSum = %d ",sum);
}

