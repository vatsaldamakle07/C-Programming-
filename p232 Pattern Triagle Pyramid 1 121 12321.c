#include <stdio.h>
main()
 {
    int l,i,j;

    printf("Enter Limit: ");
    scanf("%d", &l);

    for (i=1;i<=l;i++)
        {
        for (j=1;j<=l-i;j++)
        {
            printf("  ");
        }
        for (j=1;j<=i; j++)
        {
            printf("%d ",j);
        }
        for (j=i-1; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}
