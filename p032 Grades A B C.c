#include<stdio.h>
main()
{
    int eng,math,ss,total;

    printf("Enter the marks of ENG , MATH , SS : ");
    scanf("%d %d %d",&eng,&math,&ss);

    total =eng+math+ss;
    printf("\nTotal = %d",total);

     if (total<50)
        {
        printf("\nC GRADE");
        }
    else if(total>=50 && total<100)
        {
            printf("\nB GRADE");
        }
    else
    {aa
        printf("\nA GRADE");
    }

}
