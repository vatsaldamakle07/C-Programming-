#include<stdio.h>
 int main()
{
    int n,i,first=0,second=1,next;

    printf("Enter The number of terms in series => ");
    scanf("%d",&n);

    printf("\nFibonacci Serie: ");
    for(i=0;i<n;i++)
    {
        if(i<=1)
         {
          next=i;
         }
         else
         {
             next=first+second;
             first=second;
             second=next;
         }

         printf("%d ",next);
    }
}
