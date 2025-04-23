
#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter the limit : ");
    scanf("%d",&no);
    temp=no;

    i=temp;
    while(i>=1)
    {
        printf("%d * ",i);
        i--;
    }

}
