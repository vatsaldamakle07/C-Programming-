#include<stdio.h>
main()
 {
     int no,t=0,r=0,z;
     printf("\nEnter The Number : ");
     scanf("%d",&no);

     while(no>0)
     {
         t= no%10 ;
         r= r*10 + t;
         no=no/10;

     }
     printf("\n Reverse = %d",r);

 }
