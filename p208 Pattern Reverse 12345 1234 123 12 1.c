#include<stdio.h>
main()
{
    int i,j,l,k;
    printf("Enter the limit : ");
    scanf("%d",&l);

    for(i=1;i<=l;i++)
    {
        k=1;
        for(j=l;j>=i;j--)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}




