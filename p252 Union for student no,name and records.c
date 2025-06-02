#include<stdio.h>
union student{
int rollno;
char name[50];
};
main()
{
    union student s;
    printf("Enter Roll No :");
    scanf("%d",&s.rollno);
    printf("Roll No :%d",s.rollno);
    fflush(stdin);
    printf("\nEnter Name: ");
    gets(s.name);
    printf("Name : %s",s.name);

    printf("\n\nNote: After storing the name,roll no becomes invalid.");

}
