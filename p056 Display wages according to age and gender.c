#include<stdio.h>
main()                                   //doubt
{
    int age;
    char gender;

     printf("Enter the age: ");
     scanf("%d",&age);
     printf("Enter the gender (M/F): ");
     scanf("%c",&gender);

     if (age>=18 && age<30)
     {
      if(gender == 'M' )
            {
            printf("\nWage = 700");
        }
        else if(gender=='F')
        {
         printf("\nWage = 750");
        }
     }
     else if (age>=30 && age<=40 )
    {
       if (gender =='M')

       {
         printf("\nWage = 800");
       }

     else if (gender == 'F')

        {
        printf("\nWage = 850");
        }
    }
     else
     {
         printf("\nWrong Input");
     }






}
