#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter The limit :");
    scanf("%d",&no);
    temp=no;

    for(i=1;i<=temp;i++)
     {
         if(i%2==0)
         {
             printf("\n%d is even",i);
         }
         else
        {
          printf("\n%d is odd",i);

        }
     }



}

