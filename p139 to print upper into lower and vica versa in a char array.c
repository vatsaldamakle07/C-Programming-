#include<stdio.h>
#include<string.h>
 main()
 {
     char name[]="Raja is good boy";
     int ch;
     int i;
     char len,u,l;



     len=strlen(name);
     for(i=0;i<len;i++)
  {
     ch=name[i];
     u=isupper(ch);
     l=islower(ch);
     if(isupper(ch))
     {
         printf("%c",tolower(ch));
     }
     else
     {
         printf("%c",toupper(ch));
     }

  }
 }
