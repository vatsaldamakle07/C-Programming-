#include<stdio.h>
main()
{
    int a,b;
    printf("Enter Two Numbers :");
    scanf("%d %d",&a,&b);

    a>b ? printf("\nA is GRATER") : b>a? printf("\nB is greater") : printf("\nBoth are equal");

}
