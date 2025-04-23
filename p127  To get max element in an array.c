#include <stdio.h>
main()
{
    int i,a[5]={1,2,3,4,5};
    int n=5;
    int max=a[0];

    for(i=1;i<5;i++)
    {
      if(a[i]>max)
    {
        max=a[i];
        n=i;
    }
    }
    printf("Max value is %d\n",max);
    printf("Its Position is %d\n",n);
}


