

#include<stdio.h>
main()
{
    int i,no,sum=1;
    printf("Enter The limit :");
    scanf("%d",&no);


    for(i=no;i>=1;i--)
    {
        printf("%d * ",i);
        sum=sum*i;
    }
    printf("\n Sum = %d",sum);
}
