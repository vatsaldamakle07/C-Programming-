#include<stdio.h>
void max2()
{
    int a,b;
    printf("Enter The Numbers :");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is max",a);
    }
    else
    {
        printf("%d is max",b);
    }
}
main()
{
max2();
}
