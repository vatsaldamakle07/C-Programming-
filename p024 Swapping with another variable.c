#include<stdio.h>
main()
{
    int a,b,c;

    printf("Enter The Value Of a: ");
    scanf("%d",&a);

    printf("Enter The Value Of b: ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\n a = %d",a);
    printf("\n b = %d",b);


}
