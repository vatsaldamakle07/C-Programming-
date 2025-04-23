#include<stdio.h>
#include<string.h>
 main()
 {
     char name1[100];
     char name2[100];

     printf("name1:");
     gets(name1);

     printf("\nname2:");
     gets(name2);

     printf("\nName 1 = %s",name1);
     printf("\nName 2 = %s",name2);

     strcat(name1,name2);

     printf("\nName 1 = %s",name1);
     printf("\nName 2 = %s",name2);


 }



