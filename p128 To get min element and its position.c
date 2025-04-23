#include <stdio.h>
main()
{
    int i,a[100]={5,6,3,9,7};
    int n=5;
    int min=a[0];


    for(i=1;i<5;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            n=i;
        }
    }
    printf("Min element is %d\n ",min);
    printf("Its Position is %d\n",n);
}


