#include<stdio.h>
main()
 {
     int no,t=0,r=0,z,cno;
     printf("\nEnter The Number : ");
     scanf("%d",&no);
     cno=no;
     while(no>0)
     {
         t= no % 10 ;
         r= r + (t*t*t);
         no=no/10;
    }
    if (r==cno)
      {
        printf("\nNumber is Armstrong");
      }
      else
      {
          printf("\nNumber is not Armstrong");
      }
 }
