#include <stdio.h>
#define SIZE 3
main()
{

int firstMatrix[SIZE][SIZE],secondMatrix[SIZE][SIZE],resultMatrix[SIZE][SIZE];
    int i,j,k;


  for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
              {
            printf("\nEnter No.{A} : ");
            scanf("%d",&firstMatrix[i][j]);
          }
    }
      for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
            {
                printf("%d  ",firstMatrix[i][j]);
            }

          printf("\n");

    }

    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
              {
            printf("\nEnter No.{B} : ");
            scanf("%d",&secondMatrix[i][j]);
          }
    }


         for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
            {
                printf("%d  ",secondMatrix[i][j]);
            }

          printf("\n");

    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }

    }
  printf("Product OF two Matrix is: \n");
{
  {
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
      {
          printf("%d  ",resultMatrix[i][j]);
    }
    printf("\n");
  }
 }
}
}
