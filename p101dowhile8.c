
#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter the limit : ");
    scanf("%d",&no);
    temp=no;

    i=temp;
    do
    {
        printf("%d * ",i);
        i--;
    }while(i>=1);

}

