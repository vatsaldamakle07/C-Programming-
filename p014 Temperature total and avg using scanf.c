#include<stdio.h>
main()
{
    int mon,tue,wed,total,avg;

    printf("\nMonday =");
    scanf("%d",&mon);

    printf("\nTueday = ");
    scanf("%d",&tue);

    printf("\nWednesday =");
    scanf("%d",&wed);

    total = mon+tue+wed;
    avg = total/3;

    printf("\nTotal = %d",total);
    printf("\nAvg = %d",avg);
}
