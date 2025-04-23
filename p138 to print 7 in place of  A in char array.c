#include<stdio.h>
#include<string.h>
 main()
 {
     char name[]="Raja is good boy";
     int len;
     int i;
     char ch;

     len=strlen(name);
     for(i=0;i<len;i++)
     {
         ch=name[i];
         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
         {
            printf("7");

          }
         else{
            printf("%c",ch);
         }
     }

 }
