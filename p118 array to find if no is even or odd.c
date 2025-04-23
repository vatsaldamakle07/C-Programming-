#include <stdio.h>
main()
{
    int i,a[100]={11,50,7,9,20,35,17,22,6,70,7,60,7,45,23,12};
    int n=16;
    for(i=0;i<n;i++)
  {

   if(a[i]%2==0)
    {
        printf("\n%d is Even",a[i]);
    }
    else
    {
        printf("\n%d is Odd",a[i]);
    }
  }
}


