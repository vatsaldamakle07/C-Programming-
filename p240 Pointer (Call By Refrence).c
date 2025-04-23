#include<stdio.h>


void swa(int*x,int*y)
{
    int z;
    *x=*y;
    z=*x;
    *y=z;
}

 int main()
{
    int a=22,b=2;

    printf("\nBefore swap a=%d  b=%d",a,b);

    swa(&a,&b);

    printf("\nAfter swap a=%d  b=%d",a,b);
}

