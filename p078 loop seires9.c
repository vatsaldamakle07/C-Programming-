
#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter The limit :");
    scanf("%d",&no);
    temp=no;

    for(i=temp;i>=1;i--)
    {
        printf("%d * ",i);
    }
}

