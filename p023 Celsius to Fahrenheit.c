#include<stdio.h>
main()
{
    float Celsius,Fahrenheit;

    printf("Enter The Temperture in Celcius = ");
    scanf("%f",&Celsius);

    Fahrenheit = (Celsius*1.8)+32;

    printf("The Temperature in Fahrenheit is = %f ",Fahrenheit);

}
