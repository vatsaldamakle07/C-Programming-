#include<stdio.h>
main()
{
   char ch;
   printf("WRITE ANY char: ");
   scanf("%c",&ch);

   if(ch>=65 && ch<=90)
   {
       printf("%c",ch+32);
   }
   else
   {
       printf("%c",ch);
   }
}
