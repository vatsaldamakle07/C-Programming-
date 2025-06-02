
#include <stdio.h>

int main()
 {
    int a[100]={1,2,3,4,5};
    int b[100]={3,8,9,4,5};
    int n=5,c=0,i,j;

    printf("Common values:");

    for(i=0;i<5;i++)
    {
     for(j=0;j<5;j++)
     {
        if(a[i]== b[j])
        {
             printf("%d  ",a[i]);
        }
     }
    }
}



