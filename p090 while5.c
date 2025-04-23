#include<stdio.h>
main()
{
    int i,no,temp;
    printf("Enter the limit : ");
    scanf("%d",&no);
     temp=no;

    i=1;
    while(i<=temp)
  {

       if(i%2==0)
    {
      printf("\n%d is even",i);
    }
    else
    {
      printf("\n%d is odd",i);
    }
    i++;
  }
}
