#include<stdio.h>
main()
{
    int i,j,l;
    printf("Enter The limit: ");
    scanf("%d",&l);

    for(i=1;i<l;i++)
    {
        for(j=1;j<l;j++)
        {
        if(i==1||i==l-1||j==1||j==l-1)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }

    }
    printf("\n");
}
}
