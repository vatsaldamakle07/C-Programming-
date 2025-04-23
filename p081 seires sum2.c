
#include<stdio.h>
 main()
{
    int i,no,sum=0;
    printf("Enter The limit :");
    scanf("%d",&no);


    for(i=1;i<=no;i++)
    {
        printf("%d + ",i*i);
        sum=sum+i*i;
    }
    printf("\nSum = %d",sum);

}


