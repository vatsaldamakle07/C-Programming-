#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter The Limit :");
    scanf("%d",&no);

    temp=no;

    for(i=1;i<=temp;i++)
    {
        if(i%2==0)
          {
            printf("+%d",i);
          }
          else
          {
              printf("-%d",i);
          }
    }
}
