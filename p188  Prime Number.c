#include<stdio.h>
main()
{
    int k=0,i,no;
    printf("Enter The number: ");
    scanf("%d",&no);

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            k=1;
            break;
        }
    }


  if (k==1)
{
    printf("Number is not a prime number");
}
else
{
    printf("Number is prime number");
}
 }
