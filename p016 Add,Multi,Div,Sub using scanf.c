#include<stdio.h>
main()
 {
     float a,b,add,subs,multiplication,division;

     printf("Enter the value of A:");
     scanf("%f",&a);

     printf("Enter the value of B:");
     scanf("%f",&b);

    add=a+b;
     subs=a-b;
     multiplication=a*b;
     division=a/b;

    printf("\nAddition = %f",add);
    printf("\nSubstraction = %f",subs);
    printf("\nDivision = %f",division);
    printf("\nMultiplication = %f",multiplication);

 }
