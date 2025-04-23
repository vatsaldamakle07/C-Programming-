#include<stdio.h>
void add(int a,int b,int c,int d,int e)
{
    printf("Addition = %d",a+b+c+d+e);
}
main()
{
    int a,b,c,d,e;
    printf("Enter Five Numbers : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    add(a,b,c,d,e);
}
