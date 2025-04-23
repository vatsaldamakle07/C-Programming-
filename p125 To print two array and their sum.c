#include <stdio.h>
main()
{
    int i,a[100]={11,50,7,9,20,35,5};
    int b[100]={12,14,5,2,10,3,8};
    int n=7,sum=0;
    for(i=0;i<n;i++)
       {
        printf("  %d",a[i]);
       }
       printf("\n");


    for(i=0;i<n;i++)
       {
        printf("  %d",b[i]);
       }
       printf("\nSum\n");


    for(i=0;i<n;i++)
       {
       sum=a[i]+b[i];
       printf(" %d",sum);
       }



}


