#include<stdio.h>
#include<string.h>
 main()
 {
     char name[]="Raja is good boy";
     int len;
     int i;
     char ch;

     len=strlen(name);
     for(i=len;i>=0;i--)
   {
    ch=name[i];
     printf("%c",ch);
   }
 }
