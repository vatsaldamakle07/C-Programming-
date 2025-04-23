#include<stdio.h>
main()
{
    int i,j,l,k;
    printf("Enter the limit : ");
    scanf("%d",&l);


    for(i=1;i<=l;i++)
    {
        k=l;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k--;
        }
        printf("\n");
    }
}


