#include<stdio.h>
main()

{
      float principle,interest,time,SI;

      printf("Enter the Principle Amount =");
      scanf("%f",&principle),

      printf("Enter the Interest Rate =");
      scanf("%f",&interest);

      printf("Enter the Time(in years)=");
      scanf("%f",&time);

      SI = (principle*interest*time)/100;

      printf("The Simple Interest is %f ",SI);
}
