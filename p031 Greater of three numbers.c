#include<stdio.h>
main()
{
    int a,b,c;

    printf("Enter the THREE numbers");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
      printf("A is greatest");
    }
    else if (b>a && b>c)
    {
        printf("B is greatest");
    }

    else if(c>a && c>b)
    {
        printf("C is greatest");
    }
    else{
        printf("\nAll are equal");
    }

}
