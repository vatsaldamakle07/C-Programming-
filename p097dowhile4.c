#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter the limit : ");
    scanf("%d",&no);
     temp=no;

    i=1;
    do
    {
        printf("\n 5 * %d = %d",i,5*i);
        i++;
    }while(i<=temp);
}

