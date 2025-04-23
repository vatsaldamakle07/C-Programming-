#include<stdio.h>
#include<string.h>
 main()
 {
     char name[]="Raja is good boy";
     int len;
     int i;
     char ch;
     int c=0;

     len=strlen(name);
     for(i=0;i<len;i++)
     {
         ch=name[i];
         if(ch=='a')
         {
             c++;
         }
     }

     printf("\nTotal A are %d",c);
 }







