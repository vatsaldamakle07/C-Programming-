#include<stdio.h>
main()
{
    float price;
    printf("Enter the Marked Price : ");
    scanf("%f",&price);

    if (price>10000)
    {
        printf("\nNet amount to be paid is %f",price*0.8);

    }

     else if (price>7000 && price<=10000)
     {
         printf("\n Net amount to be paid is %f",price*0.85);
     }

      else if (price<=7000)
      {
          printf("\n Net amount to be paid is %f",price*0.9);
      }








}
