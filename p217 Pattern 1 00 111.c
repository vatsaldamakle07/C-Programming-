#include<stdio.h>
main()
{
    int i,j,l;
    printf("Enter The limit : ");
    scanf("%d",&l);

    for(i=1;i<=l;i++)
    {
        for(j=l;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i%2);
        }
        printf("\n");
    }
}


