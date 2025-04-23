#include<stdio.h>
main()
{
    int a=20;
    int *b;
    b=&a;

    printf("\na=%d  a=%d",a,&a);

    printf("\nb=%d  *b=%d",b,*b);

}
