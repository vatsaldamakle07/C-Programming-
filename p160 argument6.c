#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

main()
{
    int a,b,c;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);

    c=add(a,b);

    printf("Addition = %d ",c);

}
