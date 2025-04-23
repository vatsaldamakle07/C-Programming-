#include<Stdio.h>
void add()
{
    int a,b,sum;
    printf("\nEnter Number to get their sum :");
    scanf("%d %d",&a,&b);
    sum=a+b;

    printf("\nSum= %d",sum);
}
void substract()
{
    int a,b,sub;
    printf("\nEnter Two Numbers To get their substraction : ");
    scanf("%d %d",&a,&b);
    sub= a-b;
    printf("\nSubstraction = %d",sub);
}

void multi()
{
    int a,b,multi;
    printf("\nEnter Two Number to get their product : ");
    scanf("%d %d",&a,&b);
    multi = a*b;
    printf("\nProduct = %d",multi);
}
void div()
{
    float a,b,div;
    printf("\nEnter Two numbers to get their division : ");
    scanf("%f %f",&a,&b);
    div=a/b;
    printf("\nDivision = %f",div);
}
main()
{
    add();
    substract();
    div();
    multi();
}




