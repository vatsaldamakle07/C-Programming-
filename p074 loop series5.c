
#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter The limit :");
    scanf("%d",&no);
    temp=no;

    for(i=1;i<=temp;i=i+2)
    {
        printf("%d + ",i);
    }
}

