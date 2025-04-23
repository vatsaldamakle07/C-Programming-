#include<stdio.h>
main()
{
    int i,j,l,k;
    printf("Enter the limit : ");
    scanf("%d",&l);

    k=l;
    for(i=1;i<=l;i++)
    {
        for(j=l;j>=i;j--)
        {
            printf("%d",k);
        }
        printf("\n");
       k--;
    }
}




