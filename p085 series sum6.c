
#include<stdio.h>
main()
{
    int i,no,sum=0;
    printf("Enter The Limit :");
    scanf("%d",&no);



    for(i=1;i<=no;i++)
    {
        if(i%2==0)
          {
            printf("%d + ",i*i);
            sum=sum+i*i;

          }

          else
          {
              printf("%d + ",i*i*i);
              sum=sum+i*i*i;

          }


}
      printf("\n Sum = %d",sum);

}
