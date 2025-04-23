#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter the limit : ");
    scanf("%d",&no);
    temp=no;

    i=2;
    while(i<=temp)
    {
        printf("\n%d",i);

       i=i+2;
    }


}
