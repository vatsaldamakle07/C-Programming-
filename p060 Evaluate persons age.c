#include<stdio.h>
main()
{
    int age;
    printf("Enter the age of the Person : ");
    scanf("%d",&age);

    if (age>0 && age<12)
    {
        printf("CHILD");

    }
    else if (age>=13 && age<=19)
    {
        printf("TEENAGER");
    }
    else if (age>=20 && age<=64)
    {
        printf("ADULT");
    }
    else if (age>=65)
    {
        printf("SENIOR");
    }





}
