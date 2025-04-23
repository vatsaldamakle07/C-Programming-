#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

float areaoftri(int h,int base)
{
    return 0.5*h*base;
}
int max2(int i,int j)
{
    if(i>j)
    {
        return i;
    }
    else
    {
        return j;
    }
}

main()
{
    int a,b,c;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);

    c=add(a,b);
    printf("Addition = %d ",c);

    float h,base,area;
    printf("\nEnter The Value Of Height and Base :");
    scanf("%f %f",&h,&base);

    area=areaoftri(h,base);
    printf("\nArea Of Triangle is : %f",area);

    int i,j,k;
    printf("\nEnter Two Numbers :");
    scanf("%d %d",&i,&j);

    k=max2(i,j);
    printf("%d is max",k);
}
