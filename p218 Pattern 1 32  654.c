#include<stdio.h>
main()
{
    int i,j,l,k;
    printf("Enter The limit : ");
    scanf("%d",&l);

  k=1;
    for(i=1;i<=l;i++)
    {

        for(j=l;j>=i;j--)
        {
            printf(" ");
        }


        for(j=1;j<=i;j++)
        {
            printf("%d",k);
         k=k+1;
        }


        printf("\n");
    }
}


