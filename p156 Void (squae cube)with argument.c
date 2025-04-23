#include<stdio.h>
void square(int a)
{
    printf("Sqaure = %d",a*a);
}
void cube(int a)
{

    printf("\ncube = %d",a*a*a);
}
main()
{
    int a;
    printf("Enter The numbber : ");
    scanf("%d",&a);
    square(a);
    cube(a);
}
