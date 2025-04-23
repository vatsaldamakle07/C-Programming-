#include <stdio.h>
main()
{
    int i;

    for(i=1;i<=9;i++)
    {
      if(i==4 || i==7)
    {
        break;
    }
    printf("%d",i);
    }
}
