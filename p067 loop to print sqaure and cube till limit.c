#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter The limit :");
    scanf("%d",&no);
     temp=no;

    for(i=1;i<=temp;i++)

    {
    printf("\n %d %d %d",i,i*i,i*i*i);
      }
}
