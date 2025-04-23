#include<Stdio.h>
void add(int a,int b)
{
    printf("\nSum= %d",a+b);
}
void substract(int a,int b)
{
   printf("\nSubstraction = %d",a-b);
}

void multi(int a,int b)
{
    printf("\nProduct = %d",a*b);
}
void div( int a,int b)
{
    printf("\nDivision = %f",a/b);
}
main()
{
    int a,b;
    printf("\nEnter 2nos =>");
    scanf("%d %d",&a,&b);
    add(a,b);
    substract(a,b);
    div(a,b);
    multi(a,b);
}




