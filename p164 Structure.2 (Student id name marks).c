#include<stdio.h>
struct student{
 int id;
 char name[100];
 int Eng_mark,hindi_mark;
};
main()
{
    struct student b1,b2,b3;

    printf("\nEnter b1's id=>");
    scanf("%d",&b1.id);
    fflush(stdin);
    printf("\nEnter b1's Name=>");
    gets(b1.name);
    printf("\nEnter b1's mark in Eng=>");
    scanf("%d",&b1.Eng_mark);
    printf("\nEnter b1's mark in Hindi=>");
    scanf("%d",&b1.hindi_mark);

    printf("\nEnter b2's id=>");
    scanf("%d",&b2.id);
    fflush(stdin);
    printf("\nEnter b2's Name=>");
    gets(b2.name);
    printf("\nEnter b2's mark in Eng=>");
    scanf("%d",&b2.Eng_mark);
    printf("\nEnter b2's mark in Hindi=>");
    scanf("%d",&b2.hindi_mark);

    printf("\nEnter b3's id=>");
    scanf("%d",&b3.id);
    fflush(stdin);
    printf("\nEnter b3's Name=>");
    gets(b3.name);
    printf("\nEnter b3's mark in Eng=>");
    scanf("%d",&b3.Eng_mark);
    printf("\nEnter b3's mark in Hindi=>");
    scanf("%d",&b3.hindi_mark);

    printf("\nB1's Id=>%d   NAME=>%s     Mark in Eng=>%d    Mark in Hindi=>%d",b1.id,b1.name,b1.Eng_mark,b1.hindi_mark);
    printf("\nB2's Id=>%d   NAME=>%s     Mark in Eng=>%d    Mark in Hindi=>%d",b2.id,b2.name,b2.Eng_mark,b2.hindi_mark);
    printf("\nB3's Id=>%d   NAME=>%s     Mark in Eng=>%d    Mark in Hindi=>%d",b3.id,b3.name,b3.Eng_mark,b3.hindi_mark);
}
