#include<stdio.h>
main()
{
    int ss,math,eng,total;

    printf("Enter the marks of SS, ENGlISH AND MATHS : ");
    scanf("%d %d %d",&ss,&eng,&math);

    total = ss+eng+math;

    if (total>50)
    {
    printf("PASS");
    }

    else
    {
    printf("FAIL");
    }
}





