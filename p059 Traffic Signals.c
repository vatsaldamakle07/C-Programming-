#include<stdio.h>
main()
{
    char light[200];
    printf("Enter the color of light: ");
    gets(light);



     if (light == "green")
     {
         printf("car is allowed to go");
     }
      else if (light == "yellow")
      {
          printf("car has to wait");

      }
      else if (light == "red")
      {
          printf("Car has to stop");

      }
      else
      {
          printf("Unrecognized signals");
      }
}
