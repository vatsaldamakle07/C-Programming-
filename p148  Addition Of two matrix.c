#include<stdio.h>
#include<string.h>
#define N 2
main()
{
    int a[N][N],b[N][N];
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
              {
            printf("\nEnter No.{A} : ");
            scanf("%d",&a[i][j]);
          }
    }
      for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            {
                printf("%d  ",a[i][j]);
            }

          printf("\n");

    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
              {
            printf("\nEnter No.{B} : ");
            scanf("%d",&b[i][j]);
          }
    }


         for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            {
                printf("%d  ",b[i][j]);
            }

          printf("\n");

    }
    printf("\nAddition Of Two Matrix is:\n");
     for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)

    printf(" %d   ",a[i][j]+b[i][j]);

    printf("\n");

}
}

