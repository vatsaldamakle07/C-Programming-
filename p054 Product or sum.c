#include<stdio.h>
main()
{
    int a,b,product,sum;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);

    product=a*b;

    sum=a+b;

    if (product<=50)
    {
        printf("RESULT IS %d",product);
    }

    else
       {
        printf("Result is %d",sum);
       }
}
