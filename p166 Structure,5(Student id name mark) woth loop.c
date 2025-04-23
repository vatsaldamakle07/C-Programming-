#include<stdio.h>
struct student{
 int id;
 char name[100];
 int Eng_mark,hindi_mark;


};
main()
{
    struct student b[100];

    int no,i,total;
    printf("Enter The number of Students :");
    scanf("%d",&no);

    for(i=0;i<no;i++)
{
    printf("\nEnter b1's id=>");
    scanf("%d",&b[i].id);
    fflush(stdin);
    printf("\nEnter b1's Name=>");
    gets(b[i].name);
    printf("\nEnter b1's mark in Eng=>");
    scanf("%d",&b[i].Eng_mark);
    printf("\nEnter b1's mark in Hindi=>");
    scanf("%d",&b[i].hindi_mark);


}



   printf("\nID\tName\tEngMark\tHindiMark");
   printf("\n===============================================");
    for(i=0;i<no;i++)
   {
    printf("\n%d\t%s\t%d\t%d",b[i].id,b[i].name,b[i].Eng_mark,b[i].hindi_mark);
   }

   printf("\n===============================================");
}


