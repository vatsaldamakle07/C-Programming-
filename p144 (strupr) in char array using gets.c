#include<stdio.h>
#include<string.h>
 main()
 {
     char name1[100];
     printf("Name 1 : ");
     gets(name1);

     printf("\nName 1 = %s",name1);

     printf("\nName 1 = %s",strupr(name1));

 }

