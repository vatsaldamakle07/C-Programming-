#include<stdio.h>
#include<string.h>
#define N 3
main()
{
    int a[N][N];
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
          {
            printf("\nEnter Element: ");
            scanf("%d",&a[i][j]);
    }
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
           {
            if(i==j)
        {
            printf("%d ",a[i][j]);

        }
        else
        {
            printf("* ");

        }
    }
    printf("\n");
    }
}

