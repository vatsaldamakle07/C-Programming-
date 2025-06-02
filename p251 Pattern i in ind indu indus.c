#include<stdio.h>
#include<string.h>
int main()
{
 char str[]="INDUS";
 int len,i,j;
 len=strlen(str);

 for(i=0;i<len;i++)
 {
     for(j=0;j<=i;j++)
     {
         printf("%c",str[j]);
     }
     printf("\n");
 }
}
