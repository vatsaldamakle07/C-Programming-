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
        printf("\n%d %d %d",i,i,i);
        i++;
    } while(i<=temp);

}
