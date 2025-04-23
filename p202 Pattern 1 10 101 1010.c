#include<stdio.h>
main()
{
    int i,j,l;
    printf("Enter the limit : ");
    scanf("%d",&l);

    for(i=1;i<=l;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
}

