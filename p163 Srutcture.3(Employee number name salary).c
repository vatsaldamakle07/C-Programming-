#include<stdio.h>
struct employee{
int num;
char name[100];
int salary;
}

main()
{
  struct employee e1,e2,e3;

  printf("\nEnter E1's Number=>");
  scanf("%d",&e1.num);
  fflush(stdin);
  printf("\nEnter E1's Name=>");
  gets(e1.name);
  printf("\nEnter E1's Salary=>");
  scanf("%d",&e1.salary);

   printf("\nEnter E2's Number=>");
  scanf("%d",&e2.num);
  fflush(stdin);
  printf("\nEnter E2's Name=>");
  gets(e2.name);
  printf("\nEnter E2's Salary=>");
  scanf("%d",&e2.salary);

   printf("\nEnter E3's Number=>");
  scanf("%d",&e3.num);
  fflush(stdin);
  printf("\nEnter E3's Name=>");
  gets(e3.name);
  printf("\nEnter E3's Salary=>");
  scanf("%d",&e3.salary);

  printf("\nE1's Number=>%d    Name=>%s    Salary=>%d",e1.num,e1.name,e1.salary);
  printf("\nE2's Number=>%d    Name=>%s    Salary=>%d",e2.num,e2.name,e2.salary);
  printf("\nE3's Number=>%d    Name=>%s    Salary=>%d",e3.num,e3.name,e3.salary);



}











