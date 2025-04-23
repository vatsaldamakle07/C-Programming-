#include<stdio.h>
struct student{
 int id;
 char name[100];
 int Eng_mark,hindi_mark;
 int total;

};
main()
{
    struct student b[100];

    int no,i,total,p=0,f=0;
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

    b[i].total=b[i].Eng_mark+b[i].hindi_mark;

}



   printf("\nID\tName\tEngMark\tHindiMark\tTotal");
   printf("\n===============================================");
    for(i=0;i<no;i++)
    {
        if(b[i].total>50)
   {
       printf("\n%d\t%s\t%d\t%d\t%d\tPASS",b[i].id,b[i].name,b[i].Eng_mark,b[i].hindi_mark,b[i].total);
       p++;
   }
   else
     {
       printf("\n%d\t%s\t%d\t%d\t%d\tFAIL",b[i].id,b[i].name,b[i].Eng_mark,b[i].hindi_mark,b[i].total);
       f++;
   }
   printf("\n===============================================");
   printf("\n");
    }
   printf("\nPASSED => %d",p);
   printf("\nFAILED => %d",f);


}



