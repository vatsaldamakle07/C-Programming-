#include<stdio.h>
main()
 {
     int i,no,t=0,cno,z,sum=0,f;
     printf("\nEnter The Number : ");
     scanf("%d",&no);
     cno=no;
     while(no>0)
     {
         t= no % 10 ;
         f=1;
         for(i=1;i<=t;i++)
         {
             f=f*i;
         }
         sum=sum+f;
         no=no/10;
    }
    if (sum==cno)
      {
        printf("\nNumber is krishnamurthy");
      }
      else
      {
          printf("\nNumber is not krishnamurthy");
      }
 }

